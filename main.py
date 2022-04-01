import sys
import codecs
import cpplint as cl

# Class for storing the file's error in styling
class Scorer:
    def __init__(self, filename):
        self.filename = filename
        self.errors = []
        self.erroneous_lines = set()

    # Logs the error
    # The inputs to this function are neccessary for the cpplint library
    def logError(self, filename, linenum, category, confidence, message):
        msg = '%s:%s:  %s  [%s] [%d]\n' % (
                filename, linenum+1, message, category, confidence)
        self.errors.append(msg)
        self.erroneous_lines.add(linenum+1)

    # Currently the score is set to how many errors there were
    def getScore(self):
        return len(self.erroneous_lines)

    def printErrors(self):
        print("Styling errors for ", self.filename)
        for error in self.errors:
            print(error, end="")

# Get the filenames
filenames = cl.ParseArguments(sys.argv[1:])

scorers = []
for filename in filenames:
    # Needed to hold states for cpplint to parse braces
    nesting_state = cl.NestingState()
    scorer = Scorer(filename)

    # Separate the code into lines
    with codecs.open(filename, 'r', 'utf8', 'replace') as target_file:
        lines = target_file.read().split('\n')

    # Finds the file extention eg) .cpp, .hpp, etc.
    file_extension = filename[filename.rfind('.')+1:]

    # Remove comments
    clean_lines = cl.CleansedLines(lines)

    # Check the style for each line in the code
    # Currently only uses the CheckStyle function from the cpplint library
    for line in range(clean_lines.NumLines()):
        cl.CheckStyle(filename, clean_lines, line, file_extension, nesting_state, scorer.logError)
    scorers.append(scorer)

for scorer in scorers:
    scorer.printErrors() # Also possible to print the errors
    print(scorer.filename, " fixes required: ", scorer.getScore())

