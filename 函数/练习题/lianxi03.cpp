//
// Created by fuuny_lmz on 2022/4/8.
//52
#include "../../header/base.h"

struct box{
    std::string marker;
    float height;
    float width;
    float length;
    float volume;
};
void show_box(box);
void set_box(box *);
int main52(){
    box b;
    set_box(&b);
    show_box(b);
    return 0;
}
void show_box(box b){
    std::cout << "名称: " << b.marker << std::endl;
    std::cout << "长: " << b.length << std::endl;
    std::cout << "宽: " << b.width << std::endl;
    std::cout << "高: " << b.height << std::endl;
    std::cout << "体积: " << b.volume << std::endl;
}
void set_box(box * box_ptr){
    box_ptr -> marker = "test";
    box_ptr -> length = 10;
    box_ptr -> width = 10;
    box_ptr -> height = 10;
    box_ptr -> volume = 10;
}
