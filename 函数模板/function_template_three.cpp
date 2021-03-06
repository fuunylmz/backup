//
// Created by fuuny_lmz on 2022/4/24.
//65
#include "../header/base.h"
using namespace std;

struct job{
    string name;
    double salary;
    int floor;
};
template<typename Type> void Swap(Type &a,Type &b);
template<> void Swap<job>(job &a,job &b);
template void Swap<double>(double &a,double &b);
void show(const job &ref);
int main65(){
    job array[2] = {
            {"张三",70000,7},
            {"李四",80000,9},
    };
    int a = 10,b = 20;
    double c = 10,d = 20;
    Swap<double>(c,d);
    Swap(a,b);
    cout << "a :" << a << "b : " << b << endl;
    cout << "swap 前:" << endl;
    show(array[0]);
    show(array[1]);
    Swap(array[0],array[1]);
    cout << "swap 后:" << endl;
    show(array[0]);
    show(array[1]);
    system("pause");
    return 0;
}
void show(const job &ref){
    cout << "姓名: " << ref.name << ": $" << ref.salary << " 在" << ref.floor << "楼" << endl;
}
template<typename Type> void  Swap(Type &a,Type &b){
    Type temp;
    temp = a;
    a = b;
    b = temp;
}
template<> void Swap<job>(job &a,job &b){//显式具体化
    double temp_salary;
    int temp_floor;
    temp_salary = a.salary;
    a.salary = b.salary;
    b.salary = temp_salary;
    temp_floor = a.floor;
    a.floor = b.floor;
    b.floor = temp_floor;
}
