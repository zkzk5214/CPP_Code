#include<iostream>
using namespace std;

/*
    1-Function prototype/Function Definition decorated by inline 
        make this function become an inline function. 
    2-It is recommended that both Function prototype/Function Definition 
        decorated by inline.
    3-The compiler expands the function call directly into function body 
        code.(Inline expansion)
    4-It can reduce the cost of function calls, but increase the code size.
Attention:
    1-It is better to no more than 10 lines of code in inline function.
*/

inline void func(){
    cout << "func()" << endl;
}

inline int sum(int v1, int v2){
    return v1+v2;
}

int main(){
    func();
    int c = sum(10,20); // ==> int c = 10+20

    // getchar();
    return 0;
}

