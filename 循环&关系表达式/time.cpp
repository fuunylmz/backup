//
// Created by fuuny_lmz on 2022/3/21.
//15
#include "../header/base.h"
#include <ctime>
#include <Windows.h>

int main15(){
    using namespace std;
    time_t now = time(nullptr);
    char strTime[26];
    ctime_s(strTime, 26, &now);
    cout << "localTime: " << strTime;

    struct tm structTime{};
    for(;;){
        Sleep(500);
        time_t temp = time(nullptr);
        localtime_s(&structTime, &temp);
        system("cls");
        cout << structTime.tm_hour << ":" << structTime.tm_min << ":" << structTime.tm_sec <<endl;
        if(structTime.tm_min == 50) break;
    }
    return 0;
}