#include <iostream>

using namespace std;

int main(){
    const int num= 12;
    const int *myPointer = &num;
    const int *(&myRef) = *(&myPointer);
    cout<<"my pointer points to the adress \t"<<myPointer<<endl;
    cout<<"in that adress is \t"<<*myPointer<<endl;
    cout<<"my Reference points to the adress \t"<<myRef<<endl;
    cout<<"there is \t\t"<<*myRef<<endl;
    return 0;
}