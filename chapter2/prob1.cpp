#include <iostream>

using namespace std;

void increment(int &num);
void changeSign(int &num);

void swapPointer(int *(&ptr1), int *(&ptr2));

int main(){
    cout<<"Prob 1-1. Call by Reference"<<endl;
    int prob1a = 10;
    int prob1b = 20;
    increment(prob1a);
    changeSign(prob1b);
    cout<<"10 incremented to "<<prob1a<<"\n20 changed to "<<prob1b<<"\n\n";

    cout<<"Prob 1-2. swapByRef2"<<endl;
    cout<<"cannot initialize reference with a literal\n\n";

    cout<<"Prob 1-3. SwapPointer"<<endl;
    int prob3a = 5;
    int prob3b = 10;
    int *ptr1 = &prob3a;
    int *ptr2 = &prob3b;
    cout<<*ptr1<<"\n"<<*ptr2<<endl;
    swapPointer(ptr1, ptr2);
    cout<<*ptr1<<"\n"<<*ptr2<<endl;
    return 0;
}

void increment(int &num){
    num++;
}
void changeSign(int &num){
    num*=-1;
}

void swapPointer(int *(&ptr1), int*(&ptr2)){
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}