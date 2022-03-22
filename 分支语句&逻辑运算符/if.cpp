//
// Created by fuuny_lmz on 2022/3/22.
//23
#include "../header/base.h"

int main23(){
    using namespace std;
    char ch;
    int space = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.'){
        if(ch == ' ') ++space;
        ++total;
        cin.get(ch);
    }
    cin.clear();
    cout << space << " spaces, " << total << " char total in sentence" << endl;
    return 0;
}


