cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 14)
add_executable(test main.cpp struct.cpp header/base.h newAndDelete.cpp vector.cpp Candy.cpp 循环&关系表达式/express.cpp 循环&关系表达式/bigstep.cpp 循环&关系表达式/forstring.cpp 循环&关系表达式/plus_one.cpp)
