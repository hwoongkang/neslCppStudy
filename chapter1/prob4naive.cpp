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
    std::cout<<"���ǵ� ��: BestCom"<<std::endl;
}

void ProgComImpl::SimpleFunc(void){
    std::cout<<"���ǵ� ��: ProbCom"<<std::endl;
}