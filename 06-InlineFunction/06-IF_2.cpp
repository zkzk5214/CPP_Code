#include<iostream>
using namespace std;

/*
    1-Each call to the function involves memory to open up stack space and 
        reclaim stack space
    2-Once it becomes an inline function, there is no function call when
        the code is executed(so there is no opening and recycline, no 
        memory is allocated and reclaimed)
    3-Even some functions are decorated as inline are not necessarily 
        inlined by the compiler, such as recursive function.
Use When:
    1. <10 lines
    2. Function called frequently
*/ 

// 3
inline void run(){
    run();
}

int main(){
    // getchar();
    return 0;
}