#include "Circle.h"

using namespace std;

Circle::Circle(const Point &centerIn, const double radiusIn)
:center(centerIn),radius(radiusIn){}

void Circle::show() const{
    cout<<"radius: "<<radius<<endl;
    center.show();
}