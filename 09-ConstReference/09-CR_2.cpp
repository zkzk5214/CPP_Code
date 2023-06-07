#include <iostream>
using namespace std;

/*
Property of Const Reference
    1-Can point to temporary data(Constant, Expression, Function return value, etc.)
    2-Can point to different types of data
    3-When used as function argument(this rule also applies to Const Pointer)
        3.1-Accepts both const and non-const arguments(non-const reference can only 
            accept non-const arguments)
        3.2-Can be overloaded with non-const reference
*/ 

int func(){return 8;}

// Const Reference
int sum(const int &v1, const int &v2){
    cout << "sum(const int &v1, const int &v2)" << endl;
    return v1 + v2;
}

// Non-Const Reference
int sum_(int &v1, int &v2){ 
    return v1 + v2;
}

// 3.2
// Non-Const Reference. If remove &, the function cannot be overloaded 
int sum(int &v1, int &v2){ 
    cout << "sum(int &v1, int &v2)" << endl;
    return v1 + v2;
}

int main(){
    int age = 10;
    // 1: point to temporary data
    int &ref1 = age;
    const int &ref2 = 30;
    // 1: Expression
    int a = 1;
    int b = 2;
    const int &ref3 = a+b;
    // 1: Function return value
    const int &ref4 = func(); 
    // 2
    const double &ref5 = age;
    // 3.1
    int c = 10, d = 20; // Non-const Argument
    const int e = 10, f = 20;
    sum(c,d);
    sum(e,f);       // const argument
    sum(10, 20);    // const constant
    sum_(c,d);      // non-const reference can only accept non-const arguments
    
    return 0;
}