//
// Created by fuuny_lmz on 2022/3/18.
//
#include "../header/base.h"

int main7(){
    using namespace std;
    //��ת�ַ���
    string input;
    cout << "����һ���ַ�����";
    cin >> input;
    for(int i = input.size() - 1;i >= 0;i--){
        cout << input[i];
    }
    return 0;
}
