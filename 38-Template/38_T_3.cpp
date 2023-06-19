#include <iostream>
#include "swapValues.h"
using namespace std;
/*
4-Prototype and definition of templates that are separated into .h and .cpp
    cuase link errors.
    4.1-No calls, no function implementation is generated, that is, there is no
        function code in obj file.
    4.2-Linking the obj file in main.obj failed because the real function address 
        can not be found.
5-It's common to combine the prototype and definition of a template into a single
    .hpp file.
*/

int main(){
    int a = 10, b = 20;
    swapValues<int>(a,b);
    cout << a << " " << b << endl;;

    // getchar();
    return 0;
}

// clang++ 38_T_3.cpp swapValues.cpp -o 38_T_3