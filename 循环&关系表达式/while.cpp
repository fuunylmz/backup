//
// Created by fuuny_lmz on 2022/3/21.
//
#include "../header/base.h"
int main13(){
    using namespace std;
    string name;
    int i = 0;
    cout << "输入您的名字：";
    cin >> name;
    cout << "你的名字为：" << name << endl;
    cout << "ASCII：" << endl;
    while(i < name.size()){
        cout << name[i] << "：" << (int)name[i] << endl;
        i++;
    }
    system("pause");
    return 0;
}
