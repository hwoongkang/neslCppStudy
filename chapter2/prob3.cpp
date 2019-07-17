#include <iostream>

using namespace std;
typedef struct __Point{
        int xPos;
        int yPos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(){
    Point *P = new Point;
    P->xPos = 3;
    P->yPos = 5;

    Point *Q = new Point;
    Q->xPos = 11;
    Q->yPos = 15;

    Point &R = PntAdder(*P,*Q);

    cout<<"P :("<<P->xPos<<", "<<P->yPos<<")\n";
    cout<<"Q :("<<Q->xPos<<", "<<Q->yPos<<")\n";
    cout<<"R :("<<R.xPos<<", "<<R.yPos<<")\n";

    delete P;
    delete Q;
    delete &R;
    return 0;
}

Point& PntAdder(const Point &p1, const Point &p2){
    Point *pointOut = new Point;
    pointOut->xPos = p1.xPos + p2.xPos;
    pointOut->yPos = p1.yPos + p2.yPos;
    return *pointOut;
}