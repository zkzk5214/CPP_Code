# include <iostream>
#include "05-math.h"
#include "05-test.h"
using namespace std;

/*
    3.1-When calling an API written in C using C++, we need to 
        modify the function prototype of this API with extern "C"
    3.2-We can also use extern "C" directly in C, so that these codes 
        can be called directly by c++ (05-math.h)
    3.3-The Third-Party Frameworks/Libraries may be open source 
        libraries written in C
*/ 

extern "C" void other();

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