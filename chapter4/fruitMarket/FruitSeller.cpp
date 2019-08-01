#include "FruitSeller.h"

using namespace std;

void FruitSeller::initMembers(int price,int num, int money){
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney= money;
}
int FruitSeller::saleApples(const int &money){
    if (money<0){
        throw("money should be a positive integer");
    }
    int num = money/APPLE_PRICE;
    numOfApples -=num;
    myMoney+=money;
    return num;
}
void FruitSeller::showSalesResult(){
    cout<<"남은 사과: "<<numOfApples<<endl;
    cout<<"판매 수익: "<<myMoney<<"\n"<<endl;
}