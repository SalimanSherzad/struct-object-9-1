//starter code for Struct Sandbox Part 2
//Do not modify the starter code except where indicated in main()

#include <iostream>

using namespace std;

//declare struct for XY point
//this struct holds an x coordinate and a y coordinate for a data point
struct XYPoint {
    double xCoord;
    double yCoord;
};

//Declare polygon struct
struct Polygon {
    int numSides;    //number of sides in the polygon
    XYPoint *vertexCoordinates;  //pointer to dynamic array of XYPoint values for Polygon coordinates
};

//Do not modify this function
void outputDataPoint(XYPoint Datapoint);
//Precondition: Datapoint is a XYPoint type struct with xCoord and yCoord initialized to double values.
//Postcondition: outputs "(xCoord, yCoord)" to screen.

int main() {
    cout << "Welcome to part 1 of Prof. Erickson's Struct Sandbox!" << endl;
    cout << "Sample code: " << endl;
    cout << "Initializing ExamplePoint to (1,2): " << endl;

    //Example: declare XYPoint type value called ExamplePoint.
    //Initialize its xCoord to 1 and its yCoord to 2 using dot operator.

    XYPoint ExamplePoint;
    ExamplePoint.xCoord = 1;
    ExamplePoint.yCoord = 2;
    outputDataPoint(ExamplePoint);

    cout << endl;
    //Example: Prompt user for new values for ExamplePoint
    cout << "Enter a new x value for ExamplePoint: " << endl;
    cin >> ExamplePoint.xCoord;
    cout << "Enter a new y value for ExamplePoint: " << endl;
    cin >> ExamplePoint.yCoord;

    //output new data point values to screen
    outputDataPoint(ExamplePoint);
    cout << endl;

    //Declare a Polygon type value called square with 4 sides
    Polygon square;
    square.numSides = 4;

    //use the 1D dynamic array from Polygon struct to hold numSides points, one per corner
    square.vertexCoordinates = new XYPoint[square.numSides];

    cout << "Initializing square's vertexCoordinates[" << square.numSides << "] to zero: " << endl;
    for (int i = 0; i < square.numSides; i++) {
        square.vertexCoordinates[i].xCoord = 0;
        square.vertexCoordinates[i].yCoord = 0;
    }

    cout << "The values in the square Polygon struct are: " << endl;
    for (int i = 0; i < square.numSides; i++) {
        outputDataPoint(square.vertexCoordinates[i]);  //output data point
        cout << endl;  //output data points separated by newline
    }

    cout << "End of sample code.  Part 1 begins here." << endl;


    //****** Beginning of Part1.  Write your code below *****//
    cout << endl;
    cout << "Part 1: Initializing an unknown Polygon struct." << endl;

    //Starter code
    Polygon unknown;
    int numberOfSides;

    cout << "How many sides does the unknown polygon have?" << endl;
    cin >> numberOfSides;

    /*Suppose you have the Polygon type struct named unknown, as declared above.
    Initialize the numSides value in the unknown polygon to have the value
     numberOfSides provided by the user.
    Then, following the examples above, prompt the user for the x and y coordinates
    for each vertex and store each (x, y) point in unknown's vertexCoordinates array.
     When finished entering values, output all the coordinates to the screen.*/

    //Add your code for part 1 here.




    return 0;
}


//do not modify this function definition
void outputDataPoint(XYPoint Datapoint) {
    cout << "(" << Datapoint.xCoord << ", ";
    cout << Datapoint.yCoord << ")";
}