//
// Created by fuuny_lmz on 2022/4/17.
//60
#include "../header/base.h"
using namespace std;
string version1(const string &,const string &);
const string& version2(string &,const string &);
const string& version3(string &,const string &);//不要返回一个临时变量引用
int main60(){
    string s1 = "abc";
    cout << version1(s1,"**") << endl;
    cout << version2(s1,"***") << endl;
    cout << s1 << endl;
    return 0;
}
string version1(const string & string1,const string &string2){
    string temp;
    temp = string2 + string1 + string2;
    return temp;
}
const string& version2(string & string1,const string & string2){
    string1 = string2 + string1 + string2;
    return string1;
}
const string& version3(string & string1,const string & string2){//不要返回一个临时变量引用
    string temp;
    temp = string2 + string1 + string2;
    return temp;
}