#include <iostream>

int boxVolume(int length, int width, int height);
int boxVolume(int length, int width);
int boxVolume(int length);

int main(void){
    std::cout<<"[3, 3, 3] : "<<boxVolume(3,3,3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<boxVolume(5,5)<<std::endl;
    std::cout<<"[7, D, D] : "<<boxVolume(7)<<std::endl; 
    return 0;
}

int boxVolume(int l, int w, int h){
    return l*w*h;
}
int boxVolume(int l, int w){
    return l*w;
}
int boxVolume(int l){
    return l;
}