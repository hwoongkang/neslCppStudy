#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<<"Prob 1-1"<<endl;

    int sum = 0;
    int temp1;
    for(int i=0; i<5;i++){
        cout<<i+1<<"��° ���� �Է�: ";
        cin>>temp1;
        sum+=temp1;
    }
    cout<<"�հ�: "<<sum<<endl<<endl;

    cout<<"Prob 1-2"<<endl;

    string name;
    string phoneNumber;

    cout<<"�̸��� �Է��ϼ���:\n";
    cin>>name;
    cout<<"��ȭ��ȣ�� �Է��ϼ���:\n";
    cin>>phoneNumber;

    cout<<"�Էµ� �̸�: "<<name<<"\n"<<"�Էµ� ��ȭ��ȣ: "<<phoneNumber<<endl<<endl;

    cout<<"Prob 1-3"<<endl;
    int myNum;
    cout<<"���ڸ� �ϳ� �Է��ϼ���: ";
    cin>>myNum;
    for (int ind = 1;ind<=9;ind++){
        cout<<myNum<<" * "<<ind<<" = "<<myNum*ind<<endl;
    }
    cout<<endl;

    cout<<"Prob 1-4"<<endl;
    float sales;
    while(1){
        cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
        cin>>sales;
        if(sales==-1){
            cout<<"���α׷��� �����մϴ�."<<endl;
            break;
        }
        cout<<"�̹��� �޿�: "<<50.0+sales*0.12<<"����\n";
    }
    return 0;
}