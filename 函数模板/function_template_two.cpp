//
// Created by fuuny_lmz on 2022/4/24.
//64
#include "../header/base.h"
template<typename Type>
void swap(Type *a_ptr,Type *b_ptr,int length);
template<typename Type>
void swap(Type &number1,Type &number2);

int main64(){
    int array[5]{};
    int array2[5] = {1,1,1,1,1};
    swap(array,array2,5);

    for(int index : array){
        std::cout << index;
    }
    std::cout << std::endl;
    for(int index : array2){
        std::cout << index;
    }
    std::cout << std::endl;
    return 0;
}

template<typename Type>
void swap(Type *a_ptr,Type *b_ptr,int length){
    Type temp;
    for(int index = 0;index < length;index++){
        temp = a_ptr[index];
        a_ptr[index] = b_ptr[index];
        b_ptr[index] = temp;
    }
}
template<typename Type>
void swap(Type &number1,Type &number2){
    Type temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}