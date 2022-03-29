//
// Created by fuuny_lmz on 2022/3/29.
//38
#include "../header/base.h"
using namespace std;
int sum_add(const int* arr,size_t size);

int main(){
    int arr[] = {1,2,4,8,16,32,64,128,256};
    int* a = new int;
    delete a;
    cout << "arr address: 0x" << arr << endl;
    size_t size = sizeof(arr) / sizeof(arr[0]);
    cout << "size address: 0x" << &size << endl;
    cout << sum_add(arr,size) << endl;
    system("pause");
    return 0;
}

int sum_add(const int* arr,size_t size){
    cout << "function parameter arr address: 0x" << arr << endl;
    cout << "function parameter size address: 0x" << &size << endl;
    int total = 0;
    for(int index = 0;index < size;index++){
        total += *arr++;
    }
    return total;
}
