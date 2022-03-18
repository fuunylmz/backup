//
// Created by fuuny_lmz on 2022-03-12.
// 关于创建结构体 和 分配结构体内存
//
#include "header/base.h"

struct item{
    char name[20];
    float volume;
    double price;
};
int main1(){
    using namespace std;
    item* items = new item;
    cout << "请输入物品名称：";
    cin.get(items->name,20);
    cout << "请输入体积：";
    cin >> items->volume;
    cout << "请输入价格：￥";
    cin >> items->price;
    cout << "****************" << endl;
    cout << "名称：" << items->name << endl;
    cout << "体积：" << items ->volume << endl;
    cout << "价格：￥" << items -> price << endl;
    delete items;
    item i,j,k;
    const item* structArray[3] ={&i,&j,&k};
    const item** structArrayPointer = structArray;
    return 0;
}


