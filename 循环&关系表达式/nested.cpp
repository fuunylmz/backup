//
// Created by fuuny_lmz on 2022/3/21.
//20
#include "../header/base.h"
const int Cities = 5;
const int Years = 4;
int main20(){
    //二维数组
    using namespace std;
    string CityList[] = {"北京","上海","深圳","成都","青岛"};
    int maxTemp[Years][Cities] =
            {
                    {30,31,35,29,25},
                    {25,26,28,35,30},
                    {30,25,19,25,30},
                    {30,35,32,29,28},
            };
    cout << "\t五个城市4年平均温度" << endl;
    for(int city = 0;city < Cities;city++){
        cout << CityList[city] << ":\t";
        for(int year = 0;year < Years;year++){
            cout << maxTemp[year][city] <<"℃"<< "\t";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
