//
// Created by fuuny_lmz on 2022-03-12.
//
#include "header/base.h"
#include <string>
struct CandyBar{
    std::string brand;
    double weight = 0.0;
    unsigned int calorie = 0;
};
int main4(){
    unsigned int total = 0;
    std::cout << "����Ҫ¼���������Ʒ��";
    std::cin >> total;
    auto* candyBarArray = new CandyBar[total];
    for(int i = 0;i < total;i++){
        std::cout << "�������" << i+1 <<"����ƷƷ�ƣ�";
        std::cin >> candyBarArray[i].brand;
        std::cout << "������<" << candyBarArray[i].brand <<">�Ĳ�Ʒ������";
        std::cin >> candyBarArray[i].weight;
        std::cout << "������<" << candyBarArray[i].brand <<">�Ĳ�Ʒ��·�";
        std::cin >> candyBarArray[i].calorie;
    }
    delete[] candyBarArray;
    return 0;
}

