#include<iostream>
using namespace std;
/*
1-The function signatures of the two functions are exactly the same, 
    but the parameter types/numbers/sequences are different.
2-The return type is independent of the overload
    (the function’s return value is not part of the signature).
3-When calling a function, the implicit type cast of the actual parameter may cause ambiguity.
    Which essence adopts name mangline/name decoration technology.
    C++ compiler will adapt and modify symbol names(such as function signatures) by default.
    overloading can generate multiple different function signatures, 
        and different compilers have different generation rules.
4-C does not support function overloading.    
    C++ support.
*/

int sum_(int, int); // Function prototype
int sum_(int, int, int);

void func(int, double);
void func(double, int);

int func(int);
double func();

void display(int);
void display(long);
void display(float);

int main() {
    // 1-1)
    cout << sum_(10, 20) << endl;
    cout << sum_(10, 20, 30) << endl;

    // 1-2
    func(10, 10.5);
    func(10.5 ,10);

    // 2 
    func(10);

    // 3
    display(10); // long l = 10; Implicit Cast ；long l = (long) 10; Explicit Cast
    display(10L);
    // display(10.0); // call to 'display' is ambiguous

    /*
    int: 4byte=32bit -2**31~2**31-1
    unsigned: 4byte=32bit 0~2**31-1
    long: 4byte=32bit -2**31~2**31-1
    short: 2byte=16bit -2**15~2**15-1
    int and long (The size may be different on different platforms, int>=16, long 32) 
    sizeof(int) <= sizeof(long)
    */ 
   
    // getchar(); 
    return 0;
}

// Debug mode: a lot of debugging information, the file is bloated
// Release mode: remove debugging informatoin, and the generated executable file is more streamlined and efficient


int sum_(int v1, int v2) {
    return v1 + v2;
}

int sum_(int v1, int v2, int v3){
    return v1 + v2 + v3;
}

void func(int v1, double v2){
    cout << "func(int v1, double v2)" << endl;
}

void func(double v1, int v2){
    cout << "func(double v1, int v2)" << endl;
}

// Ambiguity: their parameter lists aren’t different
// int func(){
//     return 0;
// }
// double func(){
//     return 0;
// }

// Avaliable
int func(int a){
    return 0;
}
double func(){
    return 0;
}

// display_int (example naming, not the actual naming of the compiler)(name decoration)
void display(int a){
    cout << "display(int) -" << a << endl;
}
// display_long
void display(long a){
    cout << "display(long) -" << a << endl;
}
// display_float
void display(float a){
    cout << "display(float) -" << a << endl;
}
