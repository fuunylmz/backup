//
// Created by fuuny_lmz on 2022/3/21.
//19
#include "../header/base.h"
int main19(){
    using namespace std;
    int ch;
    int count = 0;
    cout << "输入字符：\n";
    while((ch = cin.get()) != EOF){
    cout.put((char)ch);
        ++count;
    }
    cin.clear();
    cout << endl << count << "个字符以读" << endl;
    system("pause");
    return 0;
}
