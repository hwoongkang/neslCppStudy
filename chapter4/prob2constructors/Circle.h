#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>

class Circle{
private:
    Point center;
    double radius;
public:
    Circle(const Point & point, const double rad);
    void show() const;
};

#endif