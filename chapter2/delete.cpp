#include <iostream>

int* myMalloc(int num);

int main(){
    int *ptr1 = myMalloc(20);
    int *ptr2 = ptr1;

    std::cout<<"ptr1 points to the address "<<ptr1<<" and the value "<<*ptr1<<std::endl;
    delete ptr1;
    std::cout<<"ptr2 points to the address "<<ptr2<<" and the value "<<*ptr2<<std::endl;
    return 0;
}

int* myMalloc(int num){
    int *returned = new int(num);
    std::cout<<"returned addresss is " <<returned<<std::endl;
    return returned;
}