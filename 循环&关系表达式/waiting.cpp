//
// Created by fuuny_lmz on 2022/3/21.
//14
#include "../header/base.h"
#include <ctime>
int main14(){
    using namespace std;
    cout << "输入一个秒数:";
    float secs;
    cin >> secs;
    clock_t delay = (clock_t)secs * CLOCKS_PER_SEC; //秒 To 毫秒 i x 1000
    clock_t start = clock();//clock() 返回 程序开始到执行到此代码的时间 返回 毫秒
    cout << "start time：" << start << "clock() time：" << clock() << endl;
    for(;clock() - start <= delay;){//clock() - clock_t start  <  需要延迟的时间
        cout << (clock_t)clock() - start << endl;
    }
    return 0;
}

