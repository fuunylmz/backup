//
// Created by fuuny_lmz on 2022/4/5.
//46
#include "../header/base.h"
#include <array>
using namespace std;
const int Seasons = 4;
const array<string,Seasons> season_name = {"春","夏","秋","冬"};/* NOLINT */
void fill(array<double,Seasons> *pointer);
void show(const array<double,Seasons> *pointer);
int main46(){
    array<double,Seasons> exp = {};
    fill(&exp);
    show(&exp);
    return 0;
}
void fill(array<double,Seasons> *pointer){
    for(int index = 0;index < Seasons;index++){
        cout << "请输入" << season_name[index] << "季的开支:";
        if(not (cin >> (*pointer)[index])){//pointer是指向array对象的指针
            cout << "输入有误.程序退出!" << endl;
            exit(-1);
        }
    }
}
void show(const array<double,Seasons> *pointer){
    auto total = 0.0;
    for(int index = 0;index < Seasons;index++){
        cout << season_name[index] << "季的开支为: " << (*pointer)[index] <<" 元."<< endl;
        total += (*pointer)[index];
    }
    cout << "合计为: " << total <<" 元."<< endl;
}

