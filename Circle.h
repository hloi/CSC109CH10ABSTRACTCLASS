//
// Created by hloi on 11/4/2021.
//

#ifndef CSC109CH10ABSTRACTCLASS_CIRCLE_H
#define CSC109CH10ABSTRACTCLASS_CIRCLE_H
#include <cmath>
#include <iostream>
#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(Point center, double radius) {
        position = center;
        this->radius = radius;
    }
    double ComputeArea() const {
        std::cout << "Circle: " << std::endl;
        return (M_PI * pow(radius,2));
    }
};


#endif //CSC109CH10ABSTRACTCLASS_CIRCLE_H
