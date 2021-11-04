//
// Created by hloi on 11/4/2021.
//

#ifndef CSC109CH10ABSTRACTCLASS_POINT_H
#define CSC109CH10ABSTRACTCLASS_POINT_H


class Point {
private:
    double x;
    double y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double GetX() const {
        return x;
    }

    double GetY() const {
        return y;
    }

    void SetX(double x) {
        this->x = x;
    }

    void SetY(double y) {
        this->y = y;
    }
};

#endif //CSC109CH10ABSTRACTCLASS_POINT_H
