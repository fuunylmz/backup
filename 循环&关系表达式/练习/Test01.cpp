//
// Created by fuuny_lmz on 2022/3/21.
//21
#include "../../header/base.h"
int main21(){
    using namespace std;
    struct User{
        double principal;//本金
        double interest_rate;//利率
    };
    User Daphne = {100,0.10};
    User Cleo = {100,0.05};
    int year = 0;
    while(true){
        Daphne.principal += 100 * Daphne.interest_rate;
        Cleo.principal += (Cleo.principal * Cleo.interest_rate);
        ++year;
        if(Cleo.principal > Daphne.principal) break;
    }
    cout << "Daphne's principal:" << Daphne.principal << endl;
    cout << "Cleo's principal:" << Cleo.principal << endl;
    cout << "需要：" << year << "年.\n";
    return 0;
}

