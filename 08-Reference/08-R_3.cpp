#include <iostream>
using namespace std;

// 9-Reference is essentially a pointer, but the compiler has weakened it,
//       so reference is a weakened pointer.
// A reference occupies the same memory space as a pointer
// x86: 32bit ; x64: 64bit

struct StudentOne{int age;};

struct StudentTwo{int &age;};

int main(){

    int age = 10;
    int *p = &age; // *p is an alias of age
    *p = 30;
    // cout << sizeof(age) << endl; // The typical size of int is 4 bytes 
    // cout << sizeof(p) << endl; // sizeof(address p) is 8 bytes in x64

    int &ref = age; // ref is an alias of age
    ref = 40;
    // cout << sizeof(ref) << endl; // equal to sizeof(age): 4 bytes
    // cout << sizeof(&age) << endl; // address 8 bytes

    StudentOne stu;
    // Struct occupies 4 bytes and contains one member variable age
    cout << sizeof(StudentOne) << endl; 
    // Struct occupies 8 bytes and contains one reference variable(pointer)
    cout << sizeof(StudentTwo) << endl; 

    // getchar();
    return 0;
}