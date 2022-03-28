//
// Created by fuuny_lmz on 2022/3/26.
//33
#include "../header/base.h"
#include <fstream>
int main(){
    using namespace std;
    string fileName;
    ifstream inFile;//input file stream
    cout << "请输入要读取的文件名: ";
    cin >> fileName;
    inFile.open(fileName);
    if(!inFile.is_open()){
        cout << "无法打开文件 " << fileName << "." << endl;
        cout << "程序终止." << endl;
        system("pause");
        return 1;
    }
    double value = 0.0;
    double sum = 0.0;
    int count = 0;
    inFile >> value;
    while(inFile >> value){
        ++count;
        sum += value;
    }
    if (inFile.eof()){//End of File
        cout << "已经读取到文件末尾.\n";
    }else if(inFile.fail()){
        cout << "读取终止!数据类型不匹配.\n";
    }else{
        cout << "读取终止,原因未知.\n";
    }
    if(count == 0) {
        cout << "没有读取到任何数据,请检查文件是否为空.\n";
    }else{
        cout << "已读: " << count << "个数据.\n";
        cout << "累计: " << sum << ".\n";
        cout << "平均: " << sum / count << ".\n";
    }
    inFile.close();
    system("pause");
    return 0;
}

