

**Points for Assignment 9 3/4**

**Grading rubric (20 points possible)**


| Points | Requirements |
|----------|----------|
|2|Part 1 (part1.cpp) Part 1 Struct Sandbox output exactly matches sample (autograded).
|2|Part 2 (part2.cpp) Part 2 Struct Sandbox output exactly matches sample (autograded).
|3|Part 3 Constructor test definitions and output matches instructions (autograded).
|2|Part 3 Getter and Setter function definition and output matches instructions (autograded).
|2|Part 3 Volume and Area definition and output matches instructions (autograded).
|2|Part 3 Resize definition and output matches instructions (autograded).
|4|Part 4 Questions about Box class answered correctly as comments in Part4_Questions.md file (manually graded).
|3|Good coding practices followed for all parts, including: Part 3 Preconditions and postconditions written in Box.h for all Box class member functions describing required initial conditions and result after each function is called.  Good coding practices followed, including self-commenting variable names, one statement per line, no more than 80 characters per line, properly indenting inside braces/loops/if statements, and including descriptive comments explaining changes with each commit and push to GitHub (manually graded).


**Your scores**


Autograded portion:  13/13
Manually graded portion: 7/7
Total: 18/20

Be careful to answer the questions and write preconditions and postconditions correctly.

Be careful not to confuse preconditions and postconditions.  Preconditions are what must be in place BEFORE the function runs.  Postconditions are what happens after the function has run.
Your preconditions should requre that variables in the argument of the function are initialized.  For example, in order for setWidth to run, the variable
newWidth must be initialized to a valid double value.  "there is a private variable width" is not a correct precondition for setWidth because setWidth requires that
the argument variable newWidth is initialized to a valid value.

Question 1 is correct but missing the explanation.  For question 1, the given code is redeclaring local copies of the private variables which is not correct.  
Instead, the constructor should be assigning value to the existing private variables in the object.
The correct code would be width = 0; height = 0; and length = 0;
For question 3-4, the purpose of the default constructor is to initialize the private variables in an object to some known values.  
Often but not always zero is chosen.



| Part| Points Possible | Points Earned| Comments|
|----------|-----|----| -------|
|Good coding practices followed| 3| 2 | partial - some errors in preconditions |
|Questions answered correctly| 4| 3 | partial for questions 1 and 3|
