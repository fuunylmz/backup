//
// Created by fuuny_lmz on 2022/3/21.
//22
#include "../../header/base.h"
using namespace std;
int main22(){
    struct Car{
        string brand;
        int year = 0;
    };
    int total = 0;
    cout << "您需要记录多少辆汽车：";
    cin >> total;
    Car *CarArray = new Car[total];
    for(int i = 0;i < total;i++){
        cout << "汽车#" << i+1 << ":"<< endl;
        cout << "请输入汽车制造商：";
        cin >> CarArray[i].brand;
        cin.clear();
        cout << "请输入生产年份：";
        cin >> CarArray[i].year;
        cin.clear();
    }
    cout << "\t统计：\n";
    for(int j = 0;j<total;j++){
        cout << CarArray[j].year << CarArray[j].brand << endl;
    }
    delete[] CarArray;
    return 0;
}
