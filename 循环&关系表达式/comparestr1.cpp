//
// Created by fuuny_lmz on 2022/3/19.
//
#include "../header/base.h"
int main11(){
    using namespace std;
    char word[5] = "word";
    for(char ch = 'a';strcmp(word,"xord");ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout.setf(ios::boolalpha);
    return 0;
}
