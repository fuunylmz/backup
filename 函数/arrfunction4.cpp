//
// Created by fuuny_lmz on 2022/3/30.
//40
#include "../header/base.h"
//数组区间
int sum_arr(const int*,const int*);
int sum_arr(int [][4],size_t);
int main41(){
    int arr[] = {2,4,8,16,32,64,128,256};
    int arr2[3][4] = {
            {10,10,10,10},
            {10,10,10,10},
            {10,10,10,10}
    };
    size_t size = sizeof(arr) / sizeof(arr[0]);
    size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << size2 << std::endl;
    std::cout << sum_arr(arr,arr + size) << std::endl; //使用数组区间
    std::cout << sum_arr(arr2,size2) << std::endl;
    return 0;
}

int sum_arr(const int* const head,const int* const end){
    const int* temp;
    int total = 0;
    for(temp = head;temp != end;temp++){
        total += *temp;
    }
    return total;
}
int sum_arr(int arr[][4],size_t size){
    int total = 0;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < 4;j++){
            total += *(*(arr+i)+j);
            //*(*(arr+i)+j) 等于 arr[i][j] arr+i: 指向编号为i的元素,由于arr+i存储的元素指向一个由4个int组成的数组
            //*(arr+i)+j :将 j 作为数组下标找到目标元素 *(*(arr+i)+j);解引用 得到arr[i][j]处 存储的int 值
        }
    }
    return total;
}