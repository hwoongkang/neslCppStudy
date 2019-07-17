#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
    srand((unsigned int)time(0));

    for (int i=0;i<5;i++){
        cout<<rand()%100<<endl;
    }
}