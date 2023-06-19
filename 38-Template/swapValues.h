#pragma once

// Header put function prototype
int add(int a, int b);

double add(double a, double b);

template<typename T> void swapValues(T &v1, T &v2);

template <typename T> 
void swapValues(T &v1, T &v2){
    T temp = v1;
    v1 = v2;
    v2 = temp;
}