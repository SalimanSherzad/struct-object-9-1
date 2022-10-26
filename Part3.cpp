#include <iostream>
#include "Box.h"

using namespace std;

//Do not modify this main function or any of this code.  This main function is complete and working.
//The autograder will run this main function to test your finished Box class and implementation.
//In part 3, you instead need to add preconditions and postconditions to "Box.h"
//and add function definitions to "Box.cpp"

int main() {
    Box myBox;

    myBox.setWidth(2.0);
    cout << "Width: " << myBox.getWidth() << endl;

    myBox.setHeight(3.0);
    cout << "Height: " << myBox.getHeight() << endl;

    myBox.setLength(6.0);
    cout << "Length: " << myBox.getLength() << endl;
    cout << "Surface Area: " << myBox.getSurfaceArea() << endl;
    cout << "      Volume: " << myBox.getVolume() << endl;

    cout << endl;

    myBox.resize(0.5);
    cout << "Width: " << myBox.getWidth() << endl;
    cout << "Height: " << myBox.getHeight() << endl;
    cout << "Length: " << myBox.getLength() << endl;
    cout << "Surface Area: " << myBox.getSurfaceArea() << endl;
    cout << "      Volume: " << myBox.getVolume() << endl;

    return 0;
}
