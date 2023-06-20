#include <iostream>
using namespace std;
/*
Lambda:
2-Syntax for Lambda:
    [capture list] (params list) mutable exception-> return type { function body }
3-Sometimes it is possible to omit part of the structure:
    3.2-✓[capture list] (params list) {function body}
*/

int add(int v1, int v2){
    return v1 + v2;
}

int sub(int v1, int v2){
    return v1 - v2;
}

int multiple(int v1, int v2){
    return v1 * v2;
}

int divide(int v1, int v2){
    return v1 / v2;
}

int exec(int v1, int v2, int(*func)(int,int)){
    if (func==nullptr) return 0;
    return func(v1, v2);
}

int main(){
    // cout << exec(10,20,add) << endl;
    cout << exec(20, 10, [](int v1, int v2){return v1+v2;}) << endl;

    // cout << exec(10,20,sub) << endl;
    cout << exec(20, 10, [](int v1, int v2){return v1-v2;}) << endl;
    
    // cout << exec(10,20,multiple) << endl;
    cout << exec(20, 10, [](int v1, int v2){return v1*v2;}) << endl;
    
    // cout << exec(10,20,divide) << endl;
    cout << exec(20, 10, [](int v1, int v2){return v1/v2;}) << endl;

    // getchar();
    return 0;
}