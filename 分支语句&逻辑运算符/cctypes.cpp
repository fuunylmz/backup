//
// Created by fuuny_lmz on 2022/3/23.
//28
#include "../header/base.h"
#include <cctype>

int main28(){
    using namespace std;
    char str;
    int charTotal = 0;
    int spaceTotal = 0;
    int numberTotal = 0;
    int punctTotal = 0;
    int otherTotal = 0;
    cout << "请输入任何一段话(输入@退出)：";
    cin.get(str);
    while(str != '@'){
        cin.get(str);
        if(isalpha(str)){
            ++charTotal;
        }else if(isspace(str)){
            ++spaceTotal;
        }else if(isdigit(str)){
            ++numberTotal;
        }else if(ispunct(str)){
            ++punctTotal;
        }else {
            ++otherTotal;
        }
    }
    cout << "总共:" << charTotal <<"个字母, " << spaceTotal << "个空格, " << numberTotal << "个数字, "<< punctTotal << "个标点符号, " << otherTotal << "个其他. "<< endl;
    return 0;
}

