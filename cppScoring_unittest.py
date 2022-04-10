import unittest
import scorer as sc

cppTestPath = "tests/"
class TestSpaceChecks(unittest.TestCase):
    def test_LongLineOk(self):
        scorer = sc.Scorer(cppTestPath+"LongLineOk.cpp")
        scorer.score()
        self.assertEqual(scorer.getErrors(), [])

    def test_LongLineTooLong(self):
        scorer = sc.Scorer(cppTestPath+"LongLineTooLong.cpp")
        scorer.score()
        self.assertEqual(scorer.getErrors(), [
            'tests/LongLineTooLong.cpp:7:  Lines should be <= 100 characters long  [whitespace/line_length] [2]\n'])

class TestIndentChecks(unittest.TestCase):
    def test_IndentOk(self):
        scorer = sc.Scorer(cppTestPath+"IndentOk.cpp")
        scorer.score()
        self.assertEqual(scorer.getErrors(), [])

    def test_IndentLongLineOk(self):
        scorer = sc.Scorer(cppTestPath+"IndentLongLineOk.cpp")
        scorer.score()
        self.assertEqual(scorer.getErrors(), [])

    def test_IndentStaggered(self):
        scorer = sc.Scorer(cppTestPath+"IndentStaggered.cpp")
        scorer.score()
        self.assertEqual(scorer.getErrors(), [
            'tests/IndentStaggered.cpp:6:  Weird number of spaces at line-start.  Are you using a 3-space indent?  [whitespace/indent] [3]\n',
            'tests/IndentStaggered.cpp:8:  Weird number of spaces at line-start.  Are you using a 3-space indent?  [whitespace/indent] [3]\n',
            'tests/IndentStaggered.cpp:10:  Weird number of spaces at line-start.  Are you using a 3-space indent?  [whitespace/indent] [3]\n',
            'tests/IndentStaggered.cpp:12:  Weird number of spaces at line-start.  Are you using a 3-space indent?  [whitespace/indent] [3]\n',
            'tests/IndentStaggered.cpp:16:  Weird number of spaces at line-start.  Are you using a 3-space indent?  [whitespace/indent] [3]\n'])

class TestBraceChecks(unittest.TestCase):


if __name__ == '__main__':
    unittest.main()
