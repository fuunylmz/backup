//
// Created by fuuny_lmz on 2022-03-12.
// ���ڴ����ṹ�� �� ����ṹ���ڴ�
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
    cout << "��������Ʒ���ƣ�";
    cin.get(items->name,20);
    cout << "�����������";
    cin >> items->volume;
    cout << "������۸񣺣�";
    cin >> items->price;
    cout << "****************" << endl;
    cout << "���ƣ�" << items->name << endl;
    cout << "�����" << items ->volume << endl;
    cout << "�۸񣺣�" << items -> price << endl;
    delete items;
    item i,j,k;
    const item* structArray[3] ={&i,&j,&k};
    const item** structArrayPointer = structArray;
    return 0;
}


