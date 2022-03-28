//
// Created by fuuny_lmz on 2022/3/28.
//34
#include "../../header/base.h"
#include <cctype>

int main34(){
    using namespace std;
    char ch;
    cin >> ch;
    while(not cin.fail() and ch != '@'){
        cout << (char)toupper(ch);
        cin >> ch;
    }
    return 0;
}

