#include "MyClass.h"

MyClass::MyClass(int samplingRateIn){
    samplingRate = samplingRateIn;
    barCount = magCount = gyroCount = accCount= 0;
}
int MyClass::getAccCount() {return accCount;}
int MyClass::getGyroCount(){return gyroCount;}
int MyClass::getMagCount() {return magCount;}
int MyClass::getBarCount() {return barCount;}


int MyClass::accCallback(){return ++accCount;}
int MyClass::gyroCallback(){return ++gyroCount;}
int MyClass::magCallback(){return ++magCount;}
int MyClass::barCallback(){return ++barCount;}
