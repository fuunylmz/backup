//
// Created by fuuny_lmz on 2022/3/24.
//29
#include "../header/base.h"
void showMenu();
int main29(){
    using namespace std;
    showMenu();
    char input = 0;
    cin >> input;
    cin.clear();
    for(;;){
        if(input == 'E' or input == 'e') break;
        switch(input){
            case 'a':
            case 'A':{
                cout << "你选择了选项一" << endl;
                break;
            }
            case 'b':
            case 'B':{
                cout << "你选择了选项二" << endl;
                break;
            }
            case 'c':
            case 'C':{
                cout << "你选择了选项三" << endl;
                break;
            }
            case 'd':
            case 'D':{
                cout << "你选择了选项四" << endl;
            }
            default:{
                cout << "请重新输入有效的选择!!" << endl;
            }
        }
        showMenu();
        cin >> input;
    }
    cout << "bye" << endl;
    return 0;
}
void showMenu(){
    std::cout << "请选择: \n"
                 "A) 选项一\t\tB)选项二\n"
                 "C) 选项三\t\tD)选项四\n"
                 "E) 退出" << std::endl;

}
