#ifndef FRUIT_BUYER_H
#define FRUIT_BUYER_H

#include <iostream>
#include "FruitSeller.h"
class FruitBuyer{
private:
    int myMoney;
    int numOfApples;
public:
    void initMembers(int money);
    void buyApples(FruitSeller &seller, const int &money);
    void showResult();
};

#endif