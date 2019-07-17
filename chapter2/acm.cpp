#include <iostream>

using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    w-=x;
    h-=y;
    cout<<min(min(w,x),min(h,y));
}