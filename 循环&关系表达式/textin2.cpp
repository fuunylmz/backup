//
// Created by fuuny_lmz on 2022/3/21.
//17
#include "../header/base.h"
typedef char* charPointer;
int main17(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "输入字符;输入#号退出：";
    cin.get(ch);
    while(ch != '#'){
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << "个字符以读" << endl;
    return 0;
}

