//
// Created by hloi on 11/4/2021.
//

#ifndef CSC109CH10ABSTRACTCLASS_SHAPE_H
#define CSC109CH10ABSTRACTCLASS_SHAPE_H

#include "Point.h"

class Shape {
protected:
    Point position;

public:
    virtual ~Shape() { }
    virtual double ComputeArea() const = 0;

    Point GetPosition() const {
        return position;
    }

    void SetPosition(Point newPosition) {
        position = newPosition;
    }

    void MovePositionRelative(Point otherPosition) {
        double x = position.GetX() + otherPosition.GetX();
        double y = position.GetY() + otherPosition.GetY();

        position.SetX(x);
        position.SetY(y);
    }
};

#endif //CSC109CH10ABSTRACTCLASS_SHAPE_H
