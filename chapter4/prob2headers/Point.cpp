#include "Point.h"

using namespace std;

void Point::init(int x, int y){
    xPos = x;
    yPos = y;
}

void Point::show() const{
    cout<<"("<<xPos<<", "<<yPos<<")"<<endl;
}