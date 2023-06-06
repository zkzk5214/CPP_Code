#include <iostream>
using namespace std;

/*
    3-Reference is equivalent to alias of a variable(basic data type,
        enumeration, struct, class, pointer, array, etc., can all have
        reference)
    7-No reference to reference, pointer to reference and list reference.
*/

struct Date{
    int year;
    int month;
    int day;
};

int main(){
    // 3-Reference to Struct
    Date d = {2011, 1, 5};
    Date &ref_s = d;
    ref_s.year = 2014;
    // cout << d.year << endl;

    // 3-Reference to pointer
    int age = 10, height = 30;
    int* p = &age;
    // ref_p refers to the pointer p
    // ref_p is the address of age, *ref_p = 10 
    int* &ref_p = p; 
    *ref_p = 30;        // *p = 30 
    ref_p = &height;    // ref_p modify the direction to height

    // 3-Reference to array
    int array[] = {1,2,3};
    int (&ref_a1)[3] = array;
    // cout << *ref << endl; // cout the first element of ref
    array[0] = 10;
    int* ref_a2;
    int* arr[3] = {ref_a2,ref_a2,ref_a2}; // Three int* store in the array
    int(*arr2)[3]; // A pointer to an array 

    // 7-No reference to reference
    int &ref_rr = age;      // ref_rr = 30
    // int &&ref_rr2 = age; (X)
    // rvalue references(can refer only to temporary objects)[c++11]
    int && ref_rr2 = 10;    
    
    // 7-No pointer to reference
    // int &*ref_pr = &ref_rr; (X) equal to &*ref_pr = age;
    int* ref_pr = &ref_rr;

    // 7-No list reference
    // int &arr[4]; (X)

    // getchar();
    return 0;
}