#ifndef NAME_CARD_H
#define NAME_CARD_H

#include <string>
#include <iostream>

using namespace std;

namespace COMP_POS{
    enum{
        CLERK,SENIOR,ASSIST,MANAGER
    };
}

class NameCard{
private:
    string name;
    string companyName;
    string phoneNumber;
    int rank;
public:
    NameCard(string nameIn, string compIn, string phoneNumIn, int rankIn);
    void showInfo();
};

#endif