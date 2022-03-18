//
// Created by fuuny_lmz on 2022-03-12.
//
#include "header/base.h"
char* getName();
int main2(){
    char* name = getName();
    std::cout << "你的名字是：" << name << " 地址为：" << std::hex << &name;
    delete[] name;
    system("pause");
    return 0;
}
char* getName(){
    char temp[80];//局部变量 函数无它无
    unsigned int strLength = (int)strlen(temp);
    std::cout << "请输入名字：";
    std::cin >> temp;
    char* arrayPointerOfTheName = new char[strLength+1];//堆变量 函数无它有
    strcpy_s(arrayPointerOfTheName,strLength+1,temp);
    return arrayPointerOfTheName;
}
