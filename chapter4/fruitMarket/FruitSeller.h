#ifndef FRUIT_SELLER_H
#define FRUIT_SELLER_H

#include <iostream>
#include <stdexcept>
class FruitSeller{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void initMembers(int price,int num, int money);
    int saleApples(const int &money);
    void showSalesResult();
};

#endif