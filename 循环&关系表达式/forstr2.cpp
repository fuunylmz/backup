//
// Created by fuuny_lmz on 2022/3/18.
//
#include "../header/base.h"
int main(){
    using namespace std;
    cout << "输入一个字符串：";
    string word;
    cin >> word;
    char temp;
    int i,j;
    for(j = 0,i = word.size() -1;j < i;--i,++j){
        temp = word[i];//abcd a
        word[i] = word[j];//dbca dcba
        word[j] = temp;//
    }
    cout << word << endl;

    return 0;
}

