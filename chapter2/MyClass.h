#ifndef MY_CLASS
#define MY_CLASS

class MyClass{
private:
    int accCount,gyroCount,magCount,barCount;
    int samplingRate;
public:
    MyClass(int samplingRateIn);
    int getAccCount();
    int getGyroCount();
    int getMagCount();
    int getBarCount();

    int accCallback();
    int gyroCallback();
    int magCallback();
    int barCallback();
};

#endif