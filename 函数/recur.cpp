//
// Created by fuuny_lmz on 2022/4/5.
//47
#include "../header/base.h"
void countdown(int n);
int main47(){
    countdown(4);
    return 0;
}

void countdown(int n){
    using namespace std;
    cout << "Counting down ..." << n << " n at 0x" << &n << endl;
    if(n > 0){
        countdown(n-1);
        cout << n << ": "<< "kaboom!" << " n at 0x" << &n << endl;
    }
}

