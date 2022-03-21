//
// Created by fuuny_lmz on 2022/3/19.
//
#include "../header/base.h"
int main(){
    using namespace std;
    char word[5] = "?ord";
    for(char ch = 'a';strcmp(word,"xord");ch++){
        cout << word << endl;
        word[0] = ch;
    }
    return 0;
}
