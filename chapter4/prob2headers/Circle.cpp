#include "Circle.h"

using namespace std;

void Circle::init(Point &centerIn, double radiusIn){
    center = centerIn;
    radius = radiusIn;
}

void Circle::show() const{
    cout<<"radius: "<<radius<<endl;
    center.show();
}