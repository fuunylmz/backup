//
// Created by fuuny_lmz on 2022-03-17.
//
#include "../header/base.h"
int main6(){
    using std::cout;
    using std::cin;
    using std::endl;
    cout << "input a int：";
    int a;
    cin >> a;
    cout << "当前步长为：" << a << endl;
    for (int i = 0; i < 257; i = i + a) {
        cout << i << endl;
    }
    system("pause");
    return 0;
}
