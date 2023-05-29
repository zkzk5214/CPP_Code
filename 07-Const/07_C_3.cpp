#include <iostream>
using namespace std;

int main(){

    // 2- const decorate the variable to its right.
    int age = 10;
    int height = 30;
    // *p1 is declared as const which means *p1 is constant, but p1 is not.
    //  so p1 can be assigned, *p cannot be assigned, p-> also cannot.
    const int *p1 = &age; 
    int const *p2 = &age; 

    // p3 is declared as const which means p3 is constant, but *p3 is not.
    //  so *p3 can be assigned, p3 cannot be assigned.
    int * const p3 = &age; 

    // The first const decorate *p4 and the second const decorate p4.
    // Both *p4 and p4 are constants.
    const int * const p4 = &age; 
    int const * const p5 = &age;

    *p3 = 20;
    // p3 = &height; // is unavailable

    // getchar();
    return 0;
}