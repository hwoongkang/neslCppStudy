#include "Point.h"

using namespace std;

Point::Point(int x, int y){
    xPos = x;
    yPos = y;
}

void Point::show() const{
    cout<<"("<<xPos<<", "<<yPos<<")"<<endl;
}