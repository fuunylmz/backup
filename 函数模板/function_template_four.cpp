//
// Created by fuuny_lmz on 2022/4/25.
//66
#include "../header/base.h"
using namespace std;
template <typename Type>
void showArray(Type arr[],int length);
template <typename Type>
void showArray(Type *arr[],int length);
struct debts{
    string name;
    double amount;
};
int main66(){
    int things[6] = {10,20,30,40,50,60};
    debts arr[3] = {
            {"张三",2000},
            {"李四",3000},
            {"王五",4000},
    };
    double *ptr[3];
    for(int i = 0;i < 3;i++){
        ptr[i] = &arr[i].amount;
    }
    showArray(things,6);
    cout << endl;
    showArray(ptr,3);
    return 0;
}
template <typename Type>
void showArray(Type arr[],int length){
    cout << "模板A:\n";
    for(int i = 0;i < length ;i++){
        cout << "0x" << &arr[i] << endl;
    }
}
template <typename Type>
void showArray(Type *arr[],int length){
    cout << "模板B:\n";
    for(int i = 0;i < length ;i++){
        cout << *arr[i] << endl;
    }
}
