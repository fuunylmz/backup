//
// Created by fuuny_lmz on 2022/3/26.
//filestream 写入文件
//32
#include "../header/base.h"
#include <fstream>

int main32(){
    using namespace std;
    string phoneName;
    double price = 0.0;
    string phoneColor;
    ofstream outFile;
    outFile.open("phoneInfo.txt");
    cout << "请输入手机名: ";
    cin >> phoneName;
    cout << "请输入手机颜色: ";
    cin >> phoneColor;
    cout << "请输入手机价格: ";
    cin >> price; //fix exception
    for(string err_char;cin.fail();){
        cin.clear();
        cin >> err_char;
        err_char = "";//reset
        cout << "无效输入,请正确输入手机价格: ";
        cin >> price;
    }
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "-----------------------------------" << endl;
    cout << "手机名: " << phoneName << endl;
    cout << "手机颜色: " << phoneColor << endl;
    cout << "手机价格: " << price << endl;
    cout << "-----------------------------------" << endl;
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "手机名: " << phoneName << endl;
    outFile << "手机颜色: " << phoneColor << endl;
    outFile << "手机价格: " << price << endl;
    outFile.close();
    cout << "写入完成!" << endl;
    system("pause");
    return 0;
}
