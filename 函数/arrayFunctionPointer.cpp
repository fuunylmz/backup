//
// Created by fuuny_lmz on 2022/4/5.
//49
#include "../header/base.h"
const double * f1(const double*,int);
const double * f2(const double*,int);
const double * f3(const double*,int);
int main(){
    using namespace std;
    double v[3] = {1111.1,2222.2,3333.3};
    const double* (*ptr1)(const double*,int) = f1;
    //auto p2 = f2;
    cout << "地址:" << endl;
    cout << "0x"<< ptr1(v,3) << " : " << *ptr1(v,3);

    return 0;
}
const double * f1(const double * arr,int limit){
    return arr;
}
const double * f2(const double * arr,int limit){
    return arr+1;//add size of double
}
const double * f3(const double * arr,int limit){

}
