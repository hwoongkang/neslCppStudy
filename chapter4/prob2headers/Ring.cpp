#include "Ring.h"

void Ring::init(int x1, int y1, double r1, int x2, int y2, double r2){
    Point temp1;
    temp1.init(x1,y1);
    Point temp2;
    temp2.init(x2,y2);
    inner.init(temp1,r1);
    outer.init(temp2,r2);
}

void Ring::show() const{
    std::cout<<"Inner circle info..."<<std::endl;
    inner.show();
    std::cout<<"Outer circle info..."<<std::endl;
    outer.show();
}