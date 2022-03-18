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
    std::cout << "您需要录入多少样产品：";
    std::cin >> total;
    auto* candyBarArray = new CandyBar[total];
    for(int i = 0;i < total;i++){
        std::cout << "请输入第" << i+1 <<"样产品品牌：";
        std::cin >> candyBarArray[i].brand;
        std::cout << "请输入<" << candyBarArray[i].brand <<">的产品重量：";
        std::cin >> candyBarArray[i].weight;
        std::cout << "请输入<" << candyBarArray[i].brand <<">的产品卡路里：";
        std::cin >> candyBarArray[i].calorie;
    }
    delete[] candyBarArray;
    return 0;
}

