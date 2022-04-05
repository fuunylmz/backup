//
// Created by fuuny_lmz on 2022/4/5.
//48
#include "../header/base.h"
double user1(int);
double user2(int);
void estimate(int,double (*ptr)(int));//指针函数
int main48(){
    int line;
    using namespace std;
    cout << "输入需要多少行代码: ";
    cin >> line;
    estimate(line,user2);
    estimate(line,user1);
    return 0;
}
double user1(int lines){
    return 0.05 * lines;
}
double user2(int lines){
    return 0.03 * lines + 0.0004 * lines * lines;
}
void estimate(int line,double (*ptr)(int)){
    using namespace std;
    cout << line << " 行需要花" << (*ptr)(line) << " 小时." << endl;
}

