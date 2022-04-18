//
// Created by fuuny_lmz on 2022/4/18.
//62
#include "../header/base.h"
using namespace std;
char * left(const char* string,int n = 1);
size_t left(size_t num,size_t ct);
int main62(){
    char * ret_ptr = left("test");
    cout << ret_ptr << endl;
    cout << left(456,1);
    delete[] ret_ptr;
    return 0;
}
char* left(const char* string,int n){
    auto length = strlen(string);
    if(n < 0){n = 0;};
    n = int ((n < length) ? n : length);
    auto ptr = new char[n+1];
    int i{};
    for(i = 0;i < n and string[i];i++){
        ptr[i] = string[i];
    }
    while(i <= n){
        ptr[i++] = '\0';
    }
    return ptr;
}

size_t left(size_t num,size_t ct){
    unsigned digits = 1;
    auto n = num;
    if(num ==0 or ct == 0) return 0;
    while((n = n / 10)){
        digits++;
    }
    if(digits > ct){
        ct = digits - ct;
        while(ct--){
            num /= 10;
        }
        return num;
    }else{
        return num;
    }
}