#pragma once

/*
It is common to combine the prototype and definition 
    of a template into a single .h file.
*/
template <typename T> 
T add(T a, T b){
    return a+b;
}

// function template
template <class T> 
void swapValues(T &v1, T &v2){
    T temp = v1;
    v1 = v2;
    v2 = temp;
}
