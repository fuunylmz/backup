//
// Created by fuuny_lmz on 2022/4/18.
//63
#include "../header/base.h"
template<typename T>
void swap(T &a,T &b);

int main63(){
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    double a1 = 12.5;
    double b2 = 22.5;
    swap(a1,b2);
    std::cout << "a1: " << a1 << " b2: " << b2 << std::endl;
    return 0;
}
template<typename T>
void swap(T &a,T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

