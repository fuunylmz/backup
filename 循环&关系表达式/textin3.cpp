//
// Created by fuuny_lmz on 2022/3/21.
//18
//EOF
#include "../header/base.h"
int main18(){
    using namespace std;
    char ch;
    int count = 0;
    cout << "输入字符：\n";
    cin.get(ch);
    while(!cin.fail()){
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << "个字符以读" << endl;
    cin.clear();
    cout << cin.get() << endl;
    system("pause");
    return 0;
}
