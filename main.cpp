#include <iostream>
#include <vector>

#include "Circle.h"
#include "Rectangle.h"
#include "Point.h"
using namespace std;
int main() {
    Circle* circle1 = new Circle(Point(1.0, 1.0), 1.0);
    Rectangle* rect1 = new Rectangle(Point(0.0, 1.0), 2.0, 3.0);

    vector<Shape*> shape;
    shape.push_back(circle1);
    shape.push_back(rect1);

    for (size_t i=0; i<shape.size(); i++) {
        cout << shape.at(i)->ComputeArea() << endl;
    }
    return 0;
}
