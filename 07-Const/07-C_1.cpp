#include <iostream>
using namespace std;

// Struct
struct Date {
    int year;
    int month;
    int day;
};


int main(){
    /*
    1-const means constant, and variables decorated by it cannot be modified
    class/struct(pointer) decorated by it, its members cannot be modified
    */

    const int age = 10;
    
    // Struct 
    Date d = {2011, 2, 5};
    Date d2 = {2013, 4, 8};
    d = d2;
    d.year = 2015;

    // The address of d assign to the pointer p, which points to 
    //  the struct d
    Date *p = &d; 
    // If the pointer to the struct to access the member of the struct,
    //  use ->
    p -> year = 2015; 
    // *p Takes the value of the struct d pointed to by the pointer
    (*p).month = 5;
    // d2 assign to d
    *p = d2;
    // Accesses the members in struct use .
    cout << d.year << endl;

    // getchar();
    return 0;
}