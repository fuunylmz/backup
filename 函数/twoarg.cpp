//
// Created by fuuny_lmz on 2022/3/29.
//36
#include "../header/base.h"

using namespace std;

void n_chars(char,int);
int main36(){
    int times;
    string ch;
    cout << "输入一个字符(输入Q退出): ";
    cin >> ch;
    while(ch[0] != 'Q' and ch[0] != 'q'){
        cout << "输入一个数字:";
        cin >> times;
        for(string err_str;cin.fail() or times < 0;){
            cin.clear();
            cin >> err_str;
            cout << "输入有误,请输入一个正整数,请重新输入:";
            cin >> times;
            err_str = "";
        }
        n_chars(ch[0],times);
        cout << "输入一个字符(输入Q退出): ";
        cin >> ch;
    }
    return 0;
}
void n_chars(char ch,int num){
    for(;num-- > 0;){
        cout << ch;
    }
    cout << endl;
}

