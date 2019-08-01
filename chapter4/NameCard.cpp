#include "NameCard.h"

using namespace std;

NameCard::NameCard(string nameIn, string compIn, string phoneIn, int rankIn)
:name(nameIn),companyName(compIn),phoneNumber(phoneIn),rank(rankIn){}

void NameCard::showInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Company: "<<companyName<<endl;
    cout<<"Phone: "<<phoneNumber<<endl;
    string rankTemp;
    switch(rank){
        case COMP_POS::ASSIST:
            rankTemp = "assist";
            break;
        case COMP_POS::MANAGER:
            rankTemp = "manager";
            break;
        case COMP_POS::CLERK:
            rankTemp = "clerk";
            break;
        case COMP_POS::SENIOR:
            rankTemp = "senior";
            break;
        default:
            throw("unknown rank");
            break;
    }
    cout<<"Rank: "<<rankTemp<<endl;
}