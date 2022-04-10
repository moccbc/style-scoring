import sys
import cpplint as cl
import scorer as sc

# Get the filenames
filenames = cl.ParseArguments(sys.argv[1:])

scorers = []
for filename in filenames:
    scorer = sc.Scorer(filename)
    scorer.score()
    scorers.append(scorer)

for scorer in scorers:
    scorer.printErrors() # Also possible to print the errors
    print(scorer.filename, "fixes required:", scorer.getScore())
    print(scorer.getErrors())

