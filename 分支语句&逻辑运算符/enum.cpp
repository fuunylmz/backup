//
// Created by fuuny_lmz on 2022/3/24.
//30
#include "../header/base.h"
enum {red,blue,yellow,green,blank};
int main30(){
    using namespace std;
    int input = 0;
    cout << "请输入(0-4的数字): ";
    cin >> input;
    for(;input >= red and input <= blank;){
        switch (input) {
            case red:{
                cout << "红色" << endl;
                break;
            }
            case blue:{
                cout << "蓝色" << endl;
                break;
            }
            case yellow:{
                cout << "黄色" << endl;
                break;
            }
            case green:{
                cout << "绿色" << endl;
                break;
            }
            case blank:{
                cout << "黑色" << endl;
                break;
            }
            default:{
                break;
            }
        }
        cout << "请输入(0-4的数字): ";
        cin >> input;
    }
    cout << "bye\n";
    return 0;
}
