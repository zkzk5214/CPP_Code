#include <iostream>
using namespace std;

/*
    1-In C/C++, pointer can indirectly access/modify the value of a variable
    2-In C++, the use of reference can perform similar abilities to pointer
Attention:
    3-Reference is equivalent to alias of a variable(basic data type,
        enumeration, struct, class, pointer, array, etc., can all have
        reference)
    4-To assign a value for reference is to assign a value for the variable
        that the reference points to.
    5-Must initialize when it is defined, and once it points to a variable,
        it can no longer to redefinition.(pointer can)
    6-Can initialize another reference with a reference, which is equivalent 
        to anther alias for a variable.
    7-No reference to reference, pointer to reference and list reference.
*/

int abc = 20; // Reference can point to global variable.

int main(){

    int age = 10;
    // 1)
    int *p = &age;
    *p = 20;

    // 2)
    // Define a reference to age, determine the direction the reference
    // points to. refAge is an alias for age, thus ref is age
    int &ref = age;  
    ref = 20;

    // 4)
    ref += 30;
    int height = 20;
    cout << age << endl;

    // 5)
    // int &ref = height;
    
    // This operation assign a value to ref rather than modify the 
    // direction in which the reference is pointing. If ref=10, the value 
    // of height is still 20.
    ref = height; 
     
    // 6)
    int &ref1 = ref;
    int &ref2 = ref1; // both are alias of age
    ref += 10;
    ref1 += 10;
    ref2 += 10;
    cout << age << endl;
 
    // getchar();
    return 0;
}
