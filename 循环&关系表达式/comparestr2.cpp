//
// Created by fuuny_lmz on 2022/3/21.
//
#include "../header/base.h"
int main12(){
    using namespace std;
    string word = "?ord";
    for(char ch = 'a';word != "word";ch++){
        cout << word << endl;
        word[0] = ch;
    }
    system("pause");
    return 0;
}