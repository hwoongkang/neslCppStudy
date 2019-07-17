#include <iostream>

using namespace std;

void addAndPrint(float floatIn[3]);

int main(){
    float mainTemp[3] = {1.0,2.0,3.9};
    addAndPrint(mainTemp);
    return 0;
}

void addAndPrint(float floatIn[3]){
    float temp[3] = {1.0,2.0,3.0};
    for(int ind=0;ind<3;ind++){
        cout<<temp[ind] + floatIn[ind]<<"\t";
    }
    cout<<endl;
}