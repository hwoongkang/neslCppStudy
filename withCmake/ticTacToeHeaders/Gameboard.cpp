#include "Gameboard.h"
Gameboard::Gameboard(){
    for(int i=0; i<4; i++){
        for (int j=0;j<4;j++){
            board[i][j] = '.';
        }
    }
}
void Gameboard::showBoard(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            std::cout<<board[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

void Gameboard::startGame(){
    getNames();
    while(true){
        if(isFull()){
            std::cout<<"draw game"<<std::endl;
            break;
        }
        else{
            if(turn('x')){
                std::cout<<xName<<" wins!";
                break;
            }
            if(turn('o')){
                std::cout<<yName<<" wins!";
                break;
            }
        }
    }
}

bool Gameboard::turn(char turnIn){
    std::cout<<turnIn<<" turn"<<std::endl;
    getInput(turnIn);
    showBoard();
    return boardCheck();
}
bool Gameboard::boardCheck(){
    if(horizontalCheck()){
        return true;
    }
    if(verticalCheck()){
        return true;
    }
    if(diagonalCheck()){
        return true;
    }
    return false;
}
bool Gameboard::horizontalCheck(){
    int j;
    for(int i=0;i<4;i++){
        char now = board[i][0];
        if(now!= 'x' && now!='o'){
            continue;
        }
        for (j=1;j<4;j++){
            if (board[i][j]!=now){
                break;
            }
        }
        if(j==4)
            return true;
    }
    return false;
}
bool Gameboard::verticalCheck(){
    int j;
    for(int i=0;i<4;i++){
        char now = board[0][i];
        if(now!= 'x' && now!='o'){
            continue;
        }
        for (j=1;j<4;j++){
            if (board[j][i]!=now){
                break;
            }
        }
        if(j==4)
            return true;
    }
    return false;
}
bool Gameboard::diagonalCheck(){
    char first = board[0][0];
    char second = board[3][0];
    int i;
    if(first=='x' || first=='o'){
        for(i=1;i<4;i++){
            if(board[i][i]!=first){
                break;
            }
        }
        if(i==4){
            return true;
        }
    }
    if(second=='x'||second=='o'){
        for(i=1;i<4;i++){
            if(board[3-i][i]!=second){
                break;
            }
        }
        if(i==4){
            return true;
        }
    }
    return false;

}
void Gameboard::getInput(char turnIn){
    int i,j;
    bool askingAgain = false;
    do{
        if(!askingAgain)
            std::cout<<"Select a grid position (0<=i,j<4), separated by a space: ";
        else
            std::cout<<"Please select again: ";
        std::cin>>i>>j;
        askingAgain = true;
    }while(!inputCheck(i,j));

    board[i][j] = turnIn;
}
bool Gameboard::inputCheck(int a, int b){
    if (a<0 || a>3){
        std::cout<<"Row out of range"<<std::endl;
        return false;
    }else if(b<0 || b>3){
        std::cout<<"Column out of range"<<std::endl;
        return false;
    }else if(board[a][b] == 'x' || board[a][b] == 'o'){
        std::cout<<"Selected position already occupied"<<std::endl;
        return false;
    }else{
        return true;
    }
}
bool Gameboard::isFull(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(board[i][j]!='x' && board[i][j]!='o'){
                return false;
            }
        }
    }
    return true;
}
void Gameboard::getNames(){
    char in = '\0';
    while(true){
        std::cout<<"Enter a name for the 'x' user: ";
        std::cin>>xName;
        std::cout<<"\nThe name of the 'x' user is set to "<<xName<<std::endl;
        std::cout<<"Press 'y' if it is right, or 'n' to set again: ";
        std::cin>>in;
        if(in=='y'){
            std::cout<<std::endl;
            break;
        }
        else if(in=='n')
            continue;
        else
        {
            do{
                std::cout<<"Please enter again (y/n): ";
                std::cin>>in;
            }while(in!='y' && in!='n');
            if(in=='y'){
                std::cout<<std::endl;
                break;
            }
            else if(in=='n')
                continue;
        }
    }
    while(true){
        std::cout<<"Enter a name for the 'o' user: ";
        std::cin>>yName;
        std::cout<<"\nThe name of the 'o' user is set to "<<yName<<std::endl;
        std::cout<<"Press 'y' if it is right, or 'n' to set again: ";
        std::cin>>in;
        if(in=='y'){
            std::cout<<std::endl;
            break;
        }
        else if(in=='n')
            continue;
        else
        {
            do{
                std::cout<<"Please enter again (y/n): ";
                std::cin>>in;
            }while(in!='y' && in!='n');
            if(in=='y'){
                std::cout<<std::endl;
                break;
            }
            else if(in=='n')
                continue;
        }

    }
}