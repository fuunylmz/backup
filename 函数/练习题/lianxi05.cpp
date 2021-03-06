//
// Created by fuuny_lmz on 2022/4/8.
//54
#include "../../header/base.h"
using namespace std;
struct student{
    string name;
    string hobby;
};
int getinfo(student *array,size_t size);
void display1(student student);//单个结构 按值传递
void display2(const student* student);//单个结构 按指针传递
void display3(const student* student,size_t size);//结构数组 传递数组第一个元素地址指针

int main54(){
    int input{};
    cout << "输入录入学生数量:";
    if(not (cin >> input)){//异常处理
        string err_str;
        cin >> err_str;
        cin.clear();
        err_str = "";
        exit(-1);
    }
    auto* array = new student[input];
    getinfo(array,input);
    display3(array,input);
    cout << "-----------" << endl;
    display2(&array[0]);
    delete[] array;
    return 0;
}
int getinfo(student *array,size_t size){
    for(int i = 0;i< size;i++){
        cout << i + 1 << "号学生信息录入" << endl;
        cout << "请输入" << i + 1 << "号学生姓名:";
        cin >> array -> name;
        cout << "请输入" << i + 1 << "号学生专业:";
        cin >> array ->hobby;
        array++;//ptr++;
    }
    return 0;
}
void display1(student student){//单个结构 按值传递
    cout << "姓名:" << student.name << endl;
    cout << "专业:" << student.hobby << endl;
} //单个结构 按值传递
void display2(const student* student){
    cout << "姓名:" << student->name << endl;
    cout << "专业:" << student->hobby << endl;
} //单个结构 按指针传递
void display3(const student* student,size_t size){
    for(int i = 0;i < size;i++){
        cout << "姓名:" << student->name << endl;
        cout << "专业:" << student->hobby << endl;
        student++;
    }
} //结构数组 传递数组第一个元素地址指针