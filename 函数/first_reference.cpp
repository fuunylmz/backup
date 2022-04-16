//
// Created by fuuny_lmz on 2022/4/11.
//56
#include "../header/base.h"

int main56(){
    int a = 100;
    int &b = a;
    std::cout << a <<","<< b << std::endl;
    a++;
    b++;
    std::cout << a <<","<< b << std::endl;
    std::cout << "0x" << &a <<","<< "0x"<< &b << std::endl;
    return 0;
}


