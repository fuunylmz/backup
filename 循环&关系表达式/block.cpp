//
// Created by fuuny_lmz on 2022/3/19.
//

#include "../header/base.h"
int main(){
    using namespace std;
    int x = 20;
    {
        int y = 100;
        cout << x << endl;//ok
        cout << y << endl;//ok
    }
    cout << x << endl;//ok
    //cout << y << endl;//invalid
    return 0;
}