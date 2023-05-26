# include <iostream>
#include "05-math.h" // 3.3
#include "05-test.h" // 3.3
using namespace std;

/*
    3.1-When calling an API written in C using C++, we need to 
        modify the function prototype of this API with extern "C"
    3.2-We can also use extern "C" directly in C, so that these codes 
        can be called directly by c++ (05-math.h line19-21 and line26-28)
    3.3-The Third-Party Frameworks/Libraries may be open source 
        libraries written in C
*/ 

extern "C" void other(); // 3.1

int main(){
    cout << sum(10, 20) << endl;
    cout << delta(30, 20) << endl;
    // getchar();
    return 0;
}

// Mix compiling sequence
// clang++ -c 05-EC_3.cpp  
// clang -c 05-math.c 05-other.c
// clang++ 05-EC_3.o 05-math.o 05-other.o -o 05-EC_3
// ./05-EC_3

/*
    Compare #ifndef,#define,#endif with #pragma once
        C1-1)#ifndef、#define、#endif is supported by C/C++ standard 
                which is compatible to any version of complier.
            2)#pragma once can prevent the code of the entire from being 
                repeatedly included.(not supported by older compilers, 
                < GCC 3.4)
        C2-1)#ifndef、#define、#endif can also act on parts of the code 
                in .h file.
            2)#pragma once can only act to the entire header file.    
*/ 
