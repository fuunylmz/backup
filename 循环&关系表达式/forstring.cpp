//
// Created by fuuny_lmz on 2022/3/18.
//
#include "../header/base.h"

int main7(){
    using namespace std;
    //反转字符串
    string input;
    cout << "输入一个字符串：";
    cin >> input;
    for(int i = input.size() - 1;i >= 0;i--){
        cout << input[i];
    }
    return 0;
}
