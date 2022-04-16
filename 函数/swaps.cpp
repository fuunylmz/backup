//
// Created by fuuny_lmz on 2022/4/11.
//57
#include "../header/base.h"
void swap(int &a,int &b);
void swap(int *,int*);
void swap(int a,int b);

int main(){
    int a = 100;
    int b = 200;
    int* a_ptr = &a;
    int* b_ptr = &b;
    swap(&a,&b);
    std::cout << a << "," << b << std::endl;
    swap(a_ptr,b_ptr);
    std::cout << a << "," << b << std::endl;
    return 0;
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}