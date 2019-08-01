#include "Ring.h"

Ring::Ring(int x1, int y1, double r1, int x2, int y2, double r2)
:inner(Point(x1,y1),r1), outer(Point(x2,y2),r2){}

void Ring::show() const{
    std::cout<<"Inner circle info..."<<std::endl;
    inner.show();
    std::cout<<"Outer circle info..."<<std::endl;
    outer.show();
}