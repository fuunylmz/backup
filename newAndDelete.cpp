//
// Created by fuuny_lmz on 2022-03-12.
//
#include "header/base.h"
char* getName();
int main2(){
    char* name = getName();
    std::cout << "��������ǣ�" << name << " ��ַΪ��" << std::hex << &name;
    delete[] name;
    system("pause");
    return 0;
}
char* getName(){
    char temp[80];//�ֲ����� ����������
    unsigned int strLength = (int)strlen(temp);
    std::cout << "���������֣�";
    std::cin >> temp;
    char* arrayPointerOfTheName = new char[strLength+1];//�ѱ��� ����������
    strcpy_s(arrayPointerOfTheName,strLength+1,temp);
    return arrayPointerOfTheName;
}
