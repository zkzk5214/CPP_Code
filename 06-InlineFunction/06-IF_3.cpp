#include<iostream>
using namespace std;

/*
Inline Function and Macro
    1-Both can reduce the cost of function calls
    2-Inline function have syntax detection and function features that
        macro do not have

*/

// #define add(v) v + v // (1)
inline int add(int v){  // (2)
    return v + v;
}
// #define add(v1,v2) v1 + v2 // 宏替换

int main(){

    int a = 10;
    int c = add(++a); 
    // (1) c = ++a + ++a = 11 + 12 
    // (2) 11+11
    cout << c << endl;

    // getchar();
    return 0;
}