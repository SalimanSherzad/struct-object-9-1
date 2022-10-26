#ifndef BOX_H
#define BOX_H

//Do not modify this Box.h file except for adding preconditions and postcondition comments below.
//Remember to add your preconditions and postconditions below where commented.

class Box {
public:
    Box();
    //Precondition:
    //Postcondition:

    Box(int initWidth, int iniHeight, int initLength);
    //Precondition:
    //Postcondition:

    double getWidth() const;
    //Precondition:
    //Postcondition:

    void setWidth(double newWidth);
    //Precondition:
    //Postcondition:

    double getHeight() const;
    //Precondition:
    //Postcondition:

    void setHeight(double newHeight);
    //Precondition:
    //Postcondition:

    double getLength() const;
    //Precondition:
    //Postcondition:

    void setLength(double newLength);
    //Precondition:
    //Postcondition:

    double getSurfaceArea() const;
    //Precondition:
    //Postcondition:

    double getVolume() const;
    //Precondition:
    //Postcondition:

    void resize(double factor);
    //Precondition:
    //Postcondition:

private:
    double width;
    double height;
    double length;
};
#endif // BOX_H