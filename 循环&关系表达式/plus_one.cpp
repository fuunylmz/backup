//
// Created by fuuny_lmz on 2022/3/18.
//
#include "../header/base.h"

int main8(){
    using namespace std;
    int a = 20;
    int b = 20;
    cout << "递增与递减运算符" << endl;
    cout << "a = " << a << "," << " b = " << b << endl;
    cout << "a++ = " << a++ << "," << "++b = " << ++b << endl;
    cout << "a = " << a << "," << " b = " << b << endl;
    cout << "----------------------------" << endl;
    cout << "a = " << a << "," << " b = " << b << endl;
    cout << "a-- = " << a-- << "," << "--b = " << --b << endl;
    cout << "a = " << a << "," << " b = " << b << endl;
    cout << "递增递减运算符与指针" << endl;
    double arr[5] = {1.0,2.0,3.0,4.0,5.0};
    double* ap = arr;
    cout << "--*ap: "<<--(*ap) << endl; // equal arr[0]--;
    cout << "++*ap: "<<++(*ap) << endl; // equal arr[0]++;
    for(int i = 0;i < 5;i++) {
        cout << *ap++ << endl;
    }
    return 0;
}
