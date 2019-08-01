#include <iostream>
#include <locale>
#include "fruitMarket/FruitSeller.h"
#include "fruitMarket/FruitBuyer.h"
using namespace std;

int main(){

    FruitBuyer buyer;
    FruitSeller seller;

    seller.initMembers(500, 50, 0);
    buyer.initMembers(10000);

    buyer.buyApples(seller, 2000);

    seller.showSalesResult();
    buyer.showResult();

    return 0;
}