//
// Created by fuuny_lmz on 2022/3/22.
//25
#include "../header/base.h"
//逻辑或 logic or
int main25(){
    using namespace std;
    char ch;
    for(;!cin.fail();){
        cout << "请选择(Y,N)：";
        cin >> ch;
        if(ch == 'y' || ch == 'Y'){
            cout << "你选择了：Y" << endl;
            break;
        }else if(ch == 'n' || ch == 'N'){
            cout << "你选择了：N" << endl;
            break;
        }else {
            system("cls");
            cout << "请输入有效的选择." << endl;
            cin.clear();
        }
    }
    system("pause");
    return 0;
}
