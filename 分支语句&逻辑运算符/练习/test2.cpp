//
// Created by fuuny_lmz on 2022/3/28.
//35
#include "../../header/base.h"

struct bop {
    std::string fullname;
    std::string title;
    std::string bopname;
    unsigned int preference = 0;
};

int main35() {
    using namespace std;
    bop bopArray[4];
    bopArray[0].fullname = "张三", bopArray[0].title = "头衔1", bopArray[0].bopname = "张三bopname", bopArray[0].preference = 0;
    bopArray[1].fullname = "李四", bopArray[1].title = "头衔2", bopArray[1].bopname = "李四bopname", bopArray[1].preference = 1;
    bopArray[2].fullname = "王五", bopArray[2].title = "头衔3", bopArray[2].bopname = "王五bopname", bopArray[2].preference = 2;
    bopArray[3].fullname = "赵六", bopArray[3].title = "头衔4", bopArray[3].bopname = "赵六bopname", bopArray[3].preference = 0;
    string ch;
    cout << "a.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
    for (; cin >> ch;) {
        if(ch.length() > 1){//check
        goto flag;
        }
        switch (ch[0]) {
            case 'q': {
            }
            case 'Q': {
                system("pause");
                return 0;
            }
            case 'a': {
            }
            case 'A': {
                system("cls");
                for (int index = 0; index < (sizeof bopArray) / (sizeof bopArray[0]); index++) {
                    cout << "[" << index + 1 << "] " << bopArray[index].fullname << endl;
                }
                cout << "a.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
                break;
            }
            case 'b': {
            }
            case 'B': {
                system("cls");
                for (int index = 0; index < (sizeof bopArray) / (sizeof bopArray[0]); index++) {
                    cout << "[" << index + 1 << "] " << bopArray[index].title << endl;
                }
                cout << "a.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
                break;
            }
            case 'c': {
            }
            case 'C': {
                system("cls");
                for (int index = 0; index < (sizeof bopArray) / (sizeof bopArray[0]); index++) {
                    cout << "[" << index + 1 << "] " << bopArray[index].bopname << endl;
                }
                cout << "a.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
                break;
            }
            case 'd': {
            }
            case 'D': {
                system("cls");
                for (int index = 0; index < (sizeof bopArray) / (sizeof bopArray[0]); index++) {
                    if (bopArray[index].preference == 0) {
                        cout << "[" << index + 1 << "] " << bopArray[index].fullname << endl;
                    } else if (bopArray[index].preference == 1) {
                        cout << "[" << index + 1 << "] " << bopArray[index].title << endl;
                    } else {
                        cout << "[" << index + 1 << "] " << bopArray[index].bopname << endl;
                    }

                }
                cout << "a.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
                break;
            }
            default: {
                flag:
                system("cls");
                cout << "输入无效,请重新输入!\na.显示名单\t\t b.显示头衔\nc.显示bopname\t\td.显示偏好\nq.退出\n请选择:";
                ch = "";//reset string
                break;
            }
        }
    }
    system("pause");
    return 0;
}

