//
// Created by fuuny_lmz on 2022/3/23.
//27
#include "../header/base.h"
#include <climits>
bool check_Int_Limit(const long long *number);
int main27(){
    using namespace std;
    long long num;
    int result = 0;
    cout << "请输入一个Int:" << endl;
    cin >> num;
    for(; not check_Int_Limit(&num);){
        cout << "你输入的数字超出int范围! 请重新输入：" << endl;
        cin >> num;
        cin.clear();
    }
    result = (int)num;
    cout << "你输入的数字是: " << result << endl;
    return 0;
}

bool check_Int_Limit(const long long *number){
    if(*number <= INT_MAX and *number >= INT_MIN){
        return true;
    }
    return false;
}
