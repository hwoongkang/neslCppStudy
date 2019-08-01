#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>

class Circle{
private:
    Point center;
    double radius;
public:
    void init(Point &centerPoint, double radiusIn);
    void show() const;
};

#endif