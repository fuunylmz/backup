//
// Created by fuuny_lmz on 2022/4/5.
//45
#include "../header/base.h"
using namespace std;
void show_list(const string*,int);
int main45(){
    string list[5];
    cout << "输入5个字符串:\n";
    for(int i = 0; i < 5;i++){
        cout << i+1<< ":";
        getline(cin,list[i]);
    }
    show_list(list,5);
    return 0;
}
void show_list(const string *str,int i){
    cout << "你输入的是:\n";
    for(int j = 0;j < i;j++){
        cout << j+1 << ": "<<*(str+j) << endl;
    }
}

