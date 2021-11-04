//
// Created by hloi on 11/4/2021.
//

#ifndef CSC109CH10ABSTRACTCLASS_RECTANGLE_H
#define CSC109CH10ABSTRACTCLASS_RECTANGLE_H
#include "Point.h"
#include "Shape.h"
#include <iostream>
class Rectangle : public Shape {
private:
    double length, height;
public:
    Rectangle(Point center, double length, double height) {
        this->position = center;
        this->length = length;
        this->height = height;
    }
    double ComputeArea() const {
        std::cout << "Rectangle: " << std::endl;
        return length*height;
    }

};


#endif //CSC109CH10ABSTRACTCLASS_RECTANGLE_H
