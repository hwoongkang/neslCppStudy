#ifndef RING_H
#define RING_H

#include "Circle.h"
#include "Point.h"
#include <iostream>

class Ring{
private:
    Circle outer;
    Circle inner;
public:
    Ring(int x1, int y1, double r1, int x2, int y2, double r2);
    void show() const;
};


#endif