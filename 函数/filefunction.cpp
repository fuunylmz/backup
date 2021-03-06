//
// Created by fuuny_lmz on 2022/4/17.
//61
#include <fstream>
#include "../header/base.h"
using namespace std;
void file_it(ostream &output_stream,const string& input_data_type,const double &size);
int main61(){
    ofstream fileout;
    fileout.open("data.txt");
    if(not fileout.is_open()){
        cout << "无法打开文件" << endl;
        exit(EXIT_FAILURE);
    }
    string input;
    double input2;
        cout << "请输入键入的数据类型(GB,MB,KB):";
        while(cin >> input){
            if(input == "gb" or input == "GB" or input == "mb" or input == "MB" or input == "kb" or input == "KB"){
                break;
            }else{
                system("cls");
                cout << "输入有误请重新输入数据类型: ";
                continue;
            }
        }
        cout << "请输入需要换算的数据大小:";
        for(;not (cin >> input2);){
            string err_str;
            cin.clear();
            cin >> err_str;
            err_str = "";
            system("cls");
            cout << "输入有误请重新输入数据大小: ";
        }
    file_it(cout,input,input2);
    file_it(fileout,input,input2);
    system("pause");
    return 0;
}
void file_it(ostream &output_stream,const string& input_data_type,const double &size){
    while(true){
        if(input_data_type == "gb" or input_data_type == "GB"){
            auto gb = size;
            auto mb = gb * 1024;
            auto kb = mb * 1024;
            auto b = kb * 1024;
            output_stream << fixed << setprecision(5) <<  gb << " GB = " << mb << " MB = " << kb << " KB = " << b << " B." << endl;
            break;
        }else if(input_data_type == "mb" or input_data_type == "MB"){
            auto gb = size / 1024;
            auto mb = size;
            auto kb = mb * 1024;
            auto b = kb * 1024;
            output_stream << fixed << setprecision(5) <<  gb << " GB = " << mb << " MB = " << kb << " KB = " << b << " B."<< endl;
            break;
        }else if(input_data_type == "kb" or input_data_type == "KB"){
            auto gb = (size / 1024) / 1024;
            auto mb = size / 1024;
            auto kb = size;
            auto b = kb * 1024;
            output_stream << fixed << setprecision(5) <<  gb << " GB = " << mb << " MB = " << kb << " KB = " << b << " B."<< endl;
        }
    }
}

