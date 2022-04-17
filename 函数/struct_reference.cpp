//
// Created by fuuny_lmz on 2022/4/16.
//59
#include "../header/base.h"
struct free_test{
    std::string name;
    int age{};
};
void display(const free_test&);
free_test& change_name(free_test&,std::string);//返回结构体引用
std::unique_ptr<free_test> clone(const free_test &);
int main59(){
    free_test arr[2] = {{"张三",18},{"李四",25}};
    display(change_name(arr[0],"王五"));
    display(arr[1]);
    display(*clone(*arr));
    system("pause");
    return 0;
}
void display(const free_test &obj){
    std::cout << "姓名: " << obj.name << std::endl;
    std::cout << "年龄: " << obj.age << std::endl;
}
free_test& change_name(free_test& obj,std::string new_name){
    obj.name = std::move(new_name);
    return obj;
}
std::unique_ptr<free_test> clone(const free_test& clone_target){//返回结构体引用
    auto *clone_ptr = new free_test;
    *clone_ptr = clone_target;
    return std::unique_ptr<free_test>(clone_ptr);
}

