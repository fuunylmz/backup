//
// Created by fuuny_lmz on 2022/3/25.
//31
#include "../header/base.h"
const int Max = 5;
int main31(){
    using namespace std;
    double weight[Max];
    double total = 0.0;
    cout << "请输入5个重量.\n 数量超过5或者输入<q>来退出.\n";
    cout << " #1: ";
    int i = 0;
    bool check = true;
    while(i < Max and check){
        cin >> weight[i];
        while(cin.fail()){
            string error_str;
            cin.clear();
            cin >> error_str;
            if(error_str[0] == 'q' or error_str[0] == 'Q'){
                check = false;
                break;
            }
            //cin.ignore(1,EOF);
            cout << "#" << i+1 <<"输入有误,请输入数字: ";
            cin >> weight[i];
        }
        if(check and ++i < Max){
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
