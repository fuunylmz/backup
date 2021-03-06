//
// Created by fuuny_lmz on 2022/4/8.
//53
#include "../../header/base.h"
double* fill_array(double* array,int size);
void show_array(double* array,const double* last_ptr);
void reverse_array(double* array);
int main53(){
    auto* array = new double[5];
    auto* last_ptr = fill_array(array,5);
    show_array(array,last_ptr);
    reverse_array(array);
    std::cout << "反转后:" << std::endl;
    show_array(array,last_ptr);
    delete[] array;
    system("pause");
    return 0;
}

double* fill_array(double* array,int size){//返回最后一个元素的指针位置
    double* count = nullptr;
    for(int i = 0;i < size;i++){
        count = array;
        std::cout << "请输入第"<< i + 1<<"个数字:";
        if(not (std::cin >> *array)) break;
        array++;
    }
    return count;
}
void show_array(double* array,const double* last_ptr){
    for(int i = 0;array <= last_ptr;array++,i++){
        std::cout << "第"<< i + 1 << "个元素为:" << *array << std::endl;
    }
}
void reverse_array(double* array){
    auto size = _msize(array) / sizeof(double);
    for(int i = 0; i < size/2;i++){
        double temp = array[i];
        array[i] = array[size -1 - i]; // 最后一个元素
        array[size - 1 - i] = temp;
    }
}