//
// Created by fuuny_lmz on 2022/3/22.
//24
#include "../header/base.h"
int number = 27;
int main24(){
    using namespace std;
    int temp;
    cout << "Enter a number";
    do {
        cin >> temp;
        if(temp > number){
            cout << "大了,猜小一点试试" << endl;
        }else if (temp < number){
            cout << "小了,猜大一点试试" << endl;
        }else{
            cout << "恭喜猜对了!" << endl;
        }
    } while (temp != number);
    return 0;
}

