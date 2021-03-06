//
// Created by fuuny_lmz on 2022/3/30.
//39
#include "../header/base.h"


bool fill_array(double[],size_t);
void show_array(const double[],size_t);
bool revaluation_factor(double[],size_t);
int main39(){
    using namespace std;
    double arr[2];
    size_t length = sizeof(arr) / sizeof(arr[0]);
    //exception
    fill_array(arr,length);
    show_array(arr,length);
    revaluation_factor(arr,length);
    show_array(arr,length);
    system("pause");
    return 0;
}
void show_array(const double arr[],size_t limit){
    using namespace std;
    for(int index = 0;index < limit;index++){
        cout << "值#" << index+1 << ": " << fixed << setprecision(3) << arr[index] << "." << endl;
    }
}
bool fill_array(double arr[],size_t limit){
    using namespace std;
    for(int index = 0;index < limit;index++){
        double temp = 0;
        cout << "请输入值#" << index+1 << ": ";
        cin >>temp;
        for(;cin.fail();){//fix exception
            string err_str;
            cin.clear();
            cin >> err_str;
            err_str = "";
            cout << "输入有误,请重新输入正确的值: ";
            cin >> temp;
        }
        for(;temp <= 0;){
            cout << "输入有误,请重新输入正整数: ";
            cin >> temp;
        }
        arr[index] = temp;
    }
    return false;
}
bool revaluation_factor(double arr[],size_t limit){
    using namespace std;
    double factor;
    cout << "请输入增长率(x.xx倍): ";
    cin >> factor;
    for(int index = 0;index < limit;index++){
        for(;cin.fail();){
            string err_str;
            cin.clear();
            cin >> err_str;
            cout << "输入有误,请重新输入: ";
            cin >> factor;
        }
        for(;factor < 0;){
            cout << "输入有误,请重新输入正数: ";
            cin >> factor;
        }
        arr[index] = arr[index] * factor;
    }
    return false;
}
