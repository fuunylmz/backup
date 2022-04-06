//
// Created by fuuny_lmz on 2022/4/6.
//50
#include "../../header/base.h"
struct boss{};
struct map{};
struct applicant{
    char name[30];
    int credit_ratings[5];
};
void igor();
float tofu(int);
double mpg(double,double);
long summation(long* ,int );
double doctor(const char*);
void ofCourse(boss);
char* plot(map);
void fill(int *,unsigned int,int);
void fill(int*,const int*,int );
double get_max(const double*,int);
int replace(char*,char,char);
void f1(applicant* a);
const char* f2(const applicant* a1,const applicant* a2);

typedef void (*function_ptr)(applicant*);
typedef const char* (*function_ptr2)(const applicant*,const applicant*);

int main50(){
    double array1[5] = {10.0,20.0,30.5,40.5,-1};
    std::cout << get_max(array1,5) << std::endl;
    char str[5] = "test";
    replace(str,'t','a');
    std::cout << str << std::endl;
    applicant ap = {
            "test",{1,2,3,4,5}
    };
    function_ptr array[3] = {f1,f1,f1};//给指针函数赋值
            array[0](&ap);
    return 0;
}

void f1(applicant* a){
    std::cout << "f1 function called" << std::endl;
}
const char* f2(applicant* a1,applicant* a2){
    return a1->name;
}
void fill(int* array,unsigned int size,int fill_number){
    for(int index = 0;index < size;index++){
        *array = fill_number;
        array++;
    }
}
void fill(int* array_head,const int* array_end,int fill_number){
   int total = 0;
   for(int *temp = array_head;temp != array_end;total++){
       temp++;
       array_head[total] = fill_number;
   }
}
double get_max(const double* array,int size){
    double max = 0;
    for(int i = 0;i < size - 1;i++){
         if(array[i] < array[i+1]){
             max = array[i+1];
         }
         if(array[i] > array[i+1]){
             max = array[i];
         }
    }
    return max;
}
int replace(char* str,char ch1,char ch2){
    int count{};
    for(int index = 0;index < 5;index++){
        if(str[index] == ch1){
            str[index] = ch2;
            count++;
        }
    }
    return count;
}