//
// Created by fuuny_lmz on 2022/3/22.
//26
#include "../header/base.h"
const char* stringArray[4] = {
        "string01",
        "string02",
        "string03",
        "string04"
};
int main(){
    using namespace std;
    int age;
    int index = 0;
    cout << "输入一个年龄:" << endl;
    cin >> age;
    if(age > 17 && age < 25){
    index = 0;
    }else if(age >= 30 && age <= 50){
        index  = 1;
    }else if (age >= 50 && age <= 65){
        index = 2;
    }else{
        index = 3;
    }
    cout <<stringArray[index] << endl;
    return 0;
}

