#include <iostream>
using namespace std;
/*
https://www.geeksforgeeks.org/casting-operators-in-cpp/
1-C-style type cast
    1.1 (type)expression
    1.2 type(expression)
2-Casting operators are used for type casting in C++. 
    They are used to convert one data type to another. 
    C++ supports four types of casts:
        static_cast
        dynamic_cast
        const_cast
        reinterpret_cast
    2.1-Static_cast
        2.1.1-The static_cast operator is the most commonly 
            used casting operator in C++. It performs 
            compile-time type conversion and is mainly used 
            for explicit conversions that are considered 
            safe by the compiler. 
        2.1.2-Compared with dynamic_cast, it lacks runtime 
            security detection.
        2.1.3-The static_cast can be used to convert between 
            related types, such as numeric types or pointers 
            in the same inheritance hierarchy.
        2.1.4-Commonly used for primitive data type conversion, 
            non-const to const.
        
        Syntax of static_cast
            static_cast <new_type> (expression);
*/
class Person{
public:
    int m_age;
};

int main(){
    // x86 Binary: 0000 1010 0000 0000 0000 0000 0000 0000
    // Hexadecimal: 0A 00 00 00
    int a = 10;
    
    // Implicit conversion
    // double d = a;
    // double d = double(a);

    // Static Cast
    double d = static_cast<double>(a);
    // cout << typeid(a).name() << endl;
    // cout << typeid(d).name() << endl;
    // i denotes integer and d denotes double

    Person *p1 = new Person();
    p1->m_age = 10;
    const Person *p2 = static_cast<const Person *>(p1); // p1
    // p2->m_age = 10; const

    // getchar();
    return 0;
}

/*
8.25 -> 1000.01 -> 1.00001*(2**3) 
3:Exponent
00001:Mantissa
The memory stores the exponent, mantissa and sign.
*/
