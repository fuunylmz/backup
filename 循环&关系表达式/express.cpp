//
// Created by fuuny_lmz on 2022-03-17.
//
#include "../header/base.h"
int main5(){
    using namespace std;
    int x;
    cout << "x = " << (x = 100) << endl;
    cout << "now x = " << x << endl;
    cout << "x < 3么 " << (x < 3) << endl;
    cout << "x > 3么 " << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "x < 3么(boolean) " << (x < 3) << endl;
    cout << "x > 3么(boolean) " << (x > 3) << endl;
    system("pause");
    return 0;
}
