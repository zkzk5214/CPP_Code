#pragma once

/*
一般将模板的声明和实现统一放到一个.hpp文件中
*/
template <typename T> 
T add(T a, T b){
    return a+b;
}

// 函数模版
template <class T> 
void swapValues(T &v1, T &v2){
    T temp = v1;
    v1 = v2;
    v2 = temp;
}
