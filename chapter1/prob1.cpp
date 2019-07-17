#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<"Prob 1-1"<<endl;

    int sum = 0;
    int temp1;
    for(int i=0; i<5;i++){
        cout<<i+1<<"번째 정수 입력: ";
        cin>>temp1;
        sum+=temp1;
    }
    cout<<"합계: "<<sum<<endl<<endl;

    cout<<"Prob 1-2"<<endl;

    string name;
    string phoneNumber;

    cout<<"이름을 입력하세요:\n";
    cin>>name;
    cout<<"전화번호를 입력하세요:\n";
    cin>>phoneNumber;

    cout<<"입력된 이름: "<<name<<"\n"<<"입력된 전화번호: "<<phoneNumber<<endl<<endl;

    cout<<"Prob 1-3"<<endl;
    int myNum;
    cout<<"숫자를 하나 입력하세요: ";
    cin>>myNum;
    for (int ind = 1;ind<=9;ind++){
        cout<<myNum<<" * "<<ind<<" = "<<myNum*ind<<endl;
    }
    cout<<endl;

    cout<<"Prob 1-4"<<endl;
    float sales;
    while(1){
        cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        cin>>sales;
        if(sales==-1){
            cout<<"프로그램을 종료합니다."<<endl;
            break;
        }
        cout<<"이번달 급여: "<<50.0+sales*0.12<<"만원\n";
    }
    return 0;
}