//
// Created by fuuny_lmz on 2022/4/6.
//51
#include "../../header/base.h"

using namespace std;
void show(const double*,int );
void show_avg(const double*,int );
void initialization(double * array,int size,double value);
int main51(){
    cout << "高尔夫成绩录入系统." << endl;
    cout << "请输入你需要录入多少成绩:";
    int input{};
    cin >> input;
    auto *array = new double[input];
    int count{};
    while(true){
        if(count >= input){
            break;
        }
        cout << "请输入第 "<< count +1 << " 个成绩(输入q退出):";
        cin >> array[count];
        initialization(array,input,0.0);
        count++;
        if(cin.fail()) {
            string err_str;
            cin >> err_str;
            cin.clear();
            err_str = "";
            break;
        }
    }
    show(array,input);
    show_avg(array,input);
    delete[] array;
    return 0;
}
void initialization(double * array,const int size,const double value){
    for(int index = 0;index < size;index++){
        *array = value;
        array++;
    }
}
void show(const double* array,const int size){
    cout << "------成绩列表------"<< endl;
    for(int index = 0;index < size;index++){
        cout << "   #" << index+1 << "成绩为:" << array[index] << endl;
    }
}
void show_avg(const double * array,const int size){
    double avg{};
    for(int index = 0;index < size;index++){
         avg += array[index];
    }
    cout << "平均成绩为: " << avg / size<< endl;
}
