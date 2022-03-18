//
// Created by fuuny_lmz on 2022-03-12.
//
#include "header/base.h"
#include <vector>
#include <array>
int main3(){
    using namespace std;
    vector<int> vectorArray(2);
    auto *vectorString = new vector<string>;
    vectorString->push_back("≤‚ ‘");
    delete vectorString;
    vectorArray = {1,2};
    cout << vectorArray[0] << endl;
    array<double,2> Array;
    Array = {10.5,20.5};
    array<double,2> Array2;
    Array2 = Array;
    cout << Array2[0] << endl;
    system("pause");
    return 0;
}

