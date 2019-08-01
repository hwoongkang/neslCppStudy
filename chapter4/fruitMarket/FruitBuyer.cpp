#include "FruitBuyer.h"

using namespace std;

void FruitBuyer::initMembers(int money){
    myMoney= money;
    numOfApples = 0;
}

void FruitBuyer::buyApples(FruitSeller &seller, const int &money){
    if (money<0){
        throw("money should be a constant integer");
    }
    numOfApples += seller.saleApples(money);
    myMoney -= money;
}

void FruitBuyer::showResult(){
    cout<<"���� �ܾ�: "<<myMoney<<endl;
    cout<<"��� ����: "<<numOfApples<<"\n"<<endl;
}