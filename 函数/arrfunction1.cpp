//
// Created by fuuny_lmz on 2022/3/29.
//37
#include "../header/base.h"
int sum_add(const int [],int);

int main37(){
    using namespace std;
    int arr[] = {1,2,4,8,16,32,64,128,256};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << sum_add(arr,arrSize);
    return 0;
}
int sum_add(const int arr[],int size){
    int total = 0;
    for(int index = 0;index < size;index++) {
        total += arr[index]; //equals total += *arr++;
        //&arr[0] equals arr;
    }
    return total;
}
