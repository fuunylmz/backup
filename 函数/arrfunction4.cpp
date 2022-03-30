//
// Created by fuuny_lmz on 2022/3/30.
//40
#include "../header/base.h"
//数组区间
int sum_arr(const int*,const int*);
int main(){
    int arr[] = {2,4,8,16,32,64,128,256};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    std::cout << sum_arr(arr,arr + size) << std::endl; //使用数组区间
    std::cout << sum_arr(arr,arr + 3);//前三个元素 和
    return 0;
}

int sum_arr(const int* head,const int* end){
    const int* temp;
    int total = 0;
    for(temp = head;temp != end;temp++){
        total += *temp;
    }
    return total;
}