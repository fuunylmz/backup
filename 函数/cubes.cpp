//
// Created by fuuny_lmz on 2022/4/16.
//58
#include "../header/base.h"
double cube(double a);
double ref_cube(double& a);
int main58(){
    double x = 3.0;
    std::cout << cube(x) << " arg = " << x <<std::endl;
    std::cout << ref_cube(x) << " arg = " << x << std::endl;
    system("pause");
    return 0;
}
double cube(double a){
    a *= a * a;
    return a;
}
double ref_cube(double& a){
    a = a * a * a;
    return a;
}

