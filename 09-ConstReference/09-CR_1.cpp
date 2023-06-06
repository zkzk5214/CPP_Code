#include <iostream>
using namespace std;

/*
    1-Reference can be decorated with const so that it cannot be used 
        to change data, which is called a const reference.
    2-const must be written to the left of & to be considered a const 
        reference.
*/ 

// Requirement: Access only
void test(const int* p){
    // *p = 30; (X)  No modification allowed
}

int main(){

    int age = 10;
    int height = 20;
    // const reference. the same as: int const &ref = age;
    const int &ref = age; // ref = 10
    const int* p = &age; // pointer， *p = 10
    // ref = 30; # No modification allowed

    // 'const' qualifier may not be applied to a reference
    // int & const ref = age; (X) 
    // initial value of reference to non-const must be an lvalue
    int & ref1 = age;
    // int & ref1 = 10; (X)

    // ref2 cannot be redirected, cannot change the variable it points to 
    // indirectly through ref2
    int const &ref2 = age; 

    // pointer p1 cannot be redirected, but can be used to indrectly 
    // change the variable it points to
    int* const p1 = &age; 
    // p1 = &height; (X)
    * p1 = 30;

    // pointer p2 can be redirected, but cannot be used to indrectly 
    // change the variable it points to
    int const* p2 = &age; 
    p2 = &height;
    // *p2 = 30; (X)

    // a value of type "int" cannot be used to 
    // initialize an entity of type "int *const"
    // int* const ref4 = age; (X)

    return 0;
}