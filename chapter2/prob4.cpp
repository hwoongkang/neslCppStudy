#include <iostream>
#include <string>

using namespace std;

int strlen(string stringIn);
string strcat(string str1, string str2);
string strcpy(string stringIn);

int main(){
    string myString = "hello, world!";

    string hello = "hello";
    string world = " world";

    string toCopy = "woong";
    string copied = strcpy(toCopy);
    copied +="2";

    cout<<strlen(myString)<<endl;
    cout<<strcat(hello, world)<<endl;
    cout<<toCopy<<", "<<copied<<endl;

    return 0;
}

int strlen(string stringIn){
    return stringIn.length();
}
string strcat(string str1, string str2){
    return str1+str2;
}
string strcpy(string stringIn){
    return stringIn;
}