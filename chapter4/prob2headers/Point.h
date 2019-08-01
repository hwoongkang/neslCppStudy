#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
private:
    int xPos, yPos;
public:
    void init(int x, int y);
    void show() const;
};

#endif