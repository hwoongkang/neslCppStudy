#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}

namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void){
    std::cout<<"정의된 곳: BestCom"<<std::endl;
}

void ProgComImpl::SimpleFunc(void){
    std::cout<<"정의된 곳: ProbCom"<<std::endl;
}