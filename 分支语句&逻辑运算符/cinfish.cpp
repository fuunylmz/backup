//
// Created by fuuny_lmz on 2022/3/25.
//31
#include "../header/base.h"
const int Max = 5;
int main(){
    using namespace std;
    double weight[Max];
    double total = 0.0;
    double avg = 0.0;
    cout << "请输入5个重量.\n 数量超过5或者输入<q>来退出.\n";
    cout << " #1: ";
    int i = 0;
    while(i < Max and cin >> weight[i]){
        if(++i < Max){
            cout << "#" << i+1 << ": ";
        }
    }
    //avg
    if(i != 0){
        for(int j = 0;j < i;j++){
            total += weight[j];
        }
        cout << "平均数为:" <<total / i << ",总共" << i << "件货物." << endl;
    }else{
        cout << "没有数据录入.";
    }
    system("pause");
    return 0;
}

