//
// Created by fuuny_lmz on 2022/4/2.
//43
#include "../header/base.h"
char* buildStr(char,size_t);

int main43(){
    char* p = buildStr('D',10);
    std::cout << p;
    delete[] p;
    return 0;
}
char* buildStr(char ch,size_t size){
    char* pointerStr = new char[size+1];
    pointerStr[size] = '\0';
    for(int index = 0;index < size;index++){
        pointerStr[index] = ch;
    }
    return pointerStr;
}

