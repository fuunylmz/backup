//
// Created by fuuny_lmz on 2022/4/1.
//42
#include "../header/base.h"
unsigned int char_in_str(const char * ,char);

int main42(){
    char* str = "nnew";
    std::cout << char_in_str(str,'n') ;
    return 0;
}
unsigned int char_in_str(const char* str,char ch){
    unsigned int count = 0;
    for(;*str;){
        if(*str == ch){
            count++;
        }
        str++;//mov to next char
    }
    return count;
}

