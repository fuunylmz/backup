//
// Created by fuuny_lmz on 2022/4/5.
//49
#include "../header/base.h"
const double * f1(const double*,int);
const double * f2(const double*,int);
const double * f3(const double*,int);
int main49(){
    using namespace std;
    double v[3] = {1111.1,2222.2,3333.3};
    const double* (*ptr1)(const double*,int) = f1;
    auto p2 = f2;
    cout << "地址:" << endl;
    cout << "0x"<< ptr1(v,3) << " : " << *ptr1(v,3) << endl;
    cout << "0x"<< p2(v,3) << " : " << *p2(v,3) << endl;
    //指针函数数组
    const double* (*ptr_array[3])(const double*,int) = {f1,f2,f3};
    cout << "指针函数数组地址:" << endl;
    for(int i = 0;i < 3;i++){
        cout << "0x"<< ptr_array[i](v,3) << " : " << *ptr_array[i](v,3) << endl;
    }
    auto ptr_array2 = ptr_array;
    cout << "指针的指针函数数组地址:" << endl;
    for(int i = 0;i < 3;i++){
        cout << "0x"<< ptr_array2[i](v,3) << " : " << *ptr_array2[i](v,3) << endl;
    }
    cout << "指向指针数组的指针地址:" << endl;
    const double* (*(*ptr)[3])(const double *,int) = &ptr_array;
    cout << "0x"<< ptr << " -> 0x" <<(*ptr[0])(v,3)<< " : " << *(*ptr[0])(v,3) << endl;
    cout << "指向指针指针数组的指针地址: " << endl;
    const double* (*(**ptr2)[3])(const double *,int) = &ptr;
    cout << "0x"<< ptr2 << " -> 0x" <<(*ptr2)[1] << " -> 0x" << (**ptr2)[1](v,3) << " : " << *(**ptr2)[1](v,3) << endl;
    return 0;
}
const double * f1(const double * arr,int limit){
    return arr;
}
const double * f2(const double * arr,int limit){
    return arr+1;//add size of double
}
const double * f3(const double * arr,int limit){
    return arr+2;
}
