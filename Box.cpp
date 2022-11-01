#include "Box.h"


//add your code here for the Box implementation
//see our class lecture notes and recording for more examples and demos of an implementation

Box::Box() {
    width = 0;
    length = 0;
    height = 0;
}

Box::Box(int initWidth, int iniHeight, int initLength) {
    if (initWidth < 0) {
        throw "negative width";
    }
    if (iniHeight < 0) {
        throw "negative height";
    }
    if (initLength < 0) {
        throw "negative length";
    }
    width = initWidth;
    length = initLength;
    height = iniHeight;
}

double Box::getWidth() const {
    return width;
}

void Box::setWidth(double newWidth) {
    if (newWidth < 0){
        throw "Negative Dimension";
    }
    width = newWidth;
}

double Box::getHeight() const {
    return height;
}

void Box::setHeight(double newHeight) {
    if (newHeight < 0){
        throw "Negative Dimension";
    }
    height = newHeight;
}

double Box::getLength() const {
    return length;
}

void Box::setLength(double newLength) {
    if (newLength < 0){
        throw "Negative Dimension";
    }
    length = newLength;
}

double Box::getSurfaceArea() const {
    return (2 * (width * height)) + (2 * (width * length)) + (2 * (length * height));
}

double Box::getVolume() const {
    return length * width * height;
}

void Box::resize(double factor) {
    width = width * factor;
    height = height * factor;
    length = length * factor;
}
