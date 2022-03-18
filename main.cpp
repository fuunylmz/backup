#include <iostream>
#include <string>
int main0() {
    using namespace std;
    double doubleNumber[3] = {10.1,20.2,30.3};
    int intNumber[3] = {1,2,3};
    double* pointerOfDouble = doubleNumber;
    int* pointerOfInt = &intNumber[0];
    //数组地址 = 数组头元素地址
    cout << "pointerOfDouble = " << pointerOfDouble <<" , " << "*pointerOfDouble Value = " << *pointerOfDouble << endl;
    cout << "double数组指针+1: " << endl;
    pointerOfDouble = pointerOfDouble + 1;
    cout << "pointerOfDouble = " << pointerOfDouble << " , " << "*pointerOfDouble Value = " << *pointerOfDouble << endl;
    //数组地址 = 数组头元素地址
    cout << "pointerOfInt    = " << pointerOfInt <<" , " << "*pointerOfInt Value = " << *pointerOfInt << endl;
    cout << "int数组指针+1: " << endl;
    pointerOfInt = pointerOfInt + 1;
    cout << "pointerOfInt    = " << pointerOfInt <<" , " << "*pointerOfInt Value = " << *pointerOfInt << endl;
    cout <<"***********************************************************" << endl;
    //char[] 和 char * 和string
    string TestStr = "hello";
    int strLength = strlen(TestStr.c_str());
    char* charArr = new char[strLength+1];
    strcpy_s(charArr, strLength+1,TestStr.c_str());
    cout << charArr << endl;
    delete[] charArr;
    system("pause");
    return 0;
}