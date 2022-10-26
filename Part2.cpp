//starter code for Struct Sandbox Part 2
//Do not modify the starter code except where indicated in main()


#include <iostream>
using namespace std;

//declare struct named Matrix_T (_T is short for _Type)
struct Matrix_T {
    int numRows;  //stores number of rows in the matrix
    int numCols;   //number of columns in the matrix
    int** values;    //2D dynamic array to hold the values
};


int main()
{
    cout << "Welcome to Part 2 of Prof. Erickson's Struct Sandbox." << endl;
    cout << "Here we will use a struct and dynamic array to create a Matrix-like data type." << endl;
    cout << "Declaring an instance of the matrix struct named testMatrix with 2 rows and 2 columns and"
         << endl << " initializing all of its elements to zero: " << endl;

    Matrix_T testMatrix;
    testMatrix.numRows = 2;  //set numRows to 2
    testMatrix.numCols = 2;  //set numCols to 2

    //Build the 2D dynamic array by declaring an array of pointers
    //initialize 2D dynamic array to have numCols columns
    testMatrix.values = new int*[testMatrix.numCols];

    // Each pointer in the array points to a dynamic 1D int array
    // initialize each dynamic 1D int array to have numRows elements
    for (int col = 0; col < testMatrix.numCols; col++)
    {
        testMatrix.values[col] = new int[testMatrix.numRows];
    }

    //now we can initialize each element to zero.
    //we build the 2D array column by column so first we loop through columns, then rows within a column
    for (int row = 0; row < testMatrix.numRows; row++)
    {
        for(int col = 0; col < testMatrix.numCols; col++)
        {
            testMatrix.values[col][row] = 0;
            cout << testMatrix.values[col][row] << "\t";
        }
        cout << endl;  //make a newline between each row
    }

    //Here we can number each element from 1 to 4
    int counter = 1;
    for(int col = 0; col < testMatrix.numCols; col++) {
        for (int row = 0; row < testMatrix.numRows; row++)
        {
            testMatrix.values[col][row] = counter;
            cout << testMatrix.values[col][row] << "\t";
            counter++;
        }
        cout << endl;  //make a newline between each row
    }
    cout << endl;
    cout << "End of sample code.  Part 2 of sandbox begins here."  << endl;
    //---------------End of sample code------------------//

    //Beginning of Part 2
    //Use the below starter code and follow the instructions below

    //Starter code for Part 2
    cout << "Part 2:" << endl;
    int numberOfRows, numberOfCols, arrayValue;

    Matrix_T inputMatrix;
    cout << "How many rows does your matrix have?" << endl;
    cin >> numberOfRows;
    cout << "How many columns does your matrix have?" << endl;
    cin >> numberOfCols;
    cout << "What value should we initialize all of the data to?" << endl;
    cin >> arrayValue;

    /*
    Suppose you have the above code which declares
    a Matrix_T named inputMatrix and prompts the user for a number of rows,
    a number of columns, and a number called arrayValue.
    Following the examples above, initialize the Matrix_T to have
    numRows rows, numCols columns, and all values initialized to arrayValue.
    Do not hard code values for numRows, numCols, or array value as you do not know
    in advance what value the user will choose.
     */

    //write your code for part2 here
    inputMatrix.numRows = numberOfRows;
    inputMatrix.numCols = numberOfCols;
    inputMatrix.values = new int*[inputMatrix.numCols];

    for (int col = 0; col < inputMatrix.numCols; col++)
    {
        inputMatrix.values[col] = new int[inputMatrix.numRows];
    }

    for (int row = 0; row < inputMatrix.numRows; row++)
    {
        for(int col = 0; col < inputMatrix.numCols; col++)
        {
            inputMatrix.values[col][row] = arrayValue;
            cout << inputMatrix.values[col][row] << "\t";
        }
        cout << endl;
    }


    return 0;

}
