//
// Created by fuuny_lmz on 2022/4/5.
//44
#include "../header/base.h"
struct travel_time{
    int hours;
    int mins;
};
const int min_per_hour = 60;
travel_time sum(travel_time,travel_time);
void show_time(travel_time);
int main44(){
    travel_time day1 = {5,45};
    travel_time day2 = {4,55};
    travel_time total = sum(day1,day2);
    show_time(total);
    return 0;
}
void show_time(travel_time t){
    using namespace std;
    cout << t.hours << "小时,"
    << t.mins << "分.\n";
}
travel_time sum(travel_time t1,travel_time t2){
    travel_time total{};
    total.mins = (t1.mins + t2.mins) % min_per_hour;
    total.hours = t1.hours+t2.hours + (t1.mins + t2.mins) / min_per_hour;
    return total;
}

