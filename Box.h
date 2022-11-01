#ifndef BOX_H
#define BOX_H

//Do not modify this Box.h file except for adding preconditions and postcondition comments below.
//Remember to add your preconditions and postconditions below where commented.

class Box {
public:
    Box();
    //Precondition: initialize width, length, height
    //Postcondition: make all of them 0

    Box(int initWidth, int iniHeight, int initLength);
    //Precondition: there are 3 private variables set to 0
    //Postcondition: this sets all the private variables to the parameters

    double getWidth() const;
    //Precondition: there is a private variable width
    //Postcondition: this returns width

    void setWidth(double newWidth);
    //Precondition: there is a private variable width
    //Postcondition: the private variable is set to the value of newWidth

    double getHeight() const;
    //Precondition: there is a private variable height
    //Postcondition: this function returns the variable height

    void setHeight(double newHeight);
    //Precondition: there is a private variable height
    //Postcondition: this function sets the private variable height to the value of newHeight

    double getLength() const;
    //Precondition: there is a private variable length
    //Postcondition: this function returns length

    void setLength(double newLength);
    //Precondition: there is a private variable length
    //Postcondition: this function sets length to the value of newLength

    double getSurfaceArea() const;
    //Precondition: there are private variables: width, height, length
    //Postcondition: returns 2(width * height) + 2(width * length) + 2(length * height) this is surface area

    double getVolume() const;
    //Precondition: there are private variables: width, height, length
    //Postcondition: returns length * width * height which is volume

    void resize(double factor);
    //Precondition: there is a factor and 3 of our private variables
    //Postcondition: we multiply all of our private variables by the factor

private:
    double width;
    double height;
    double length;
};
#endif // BOX_H