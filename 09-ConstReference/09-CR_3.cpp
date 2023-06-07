#include <iostream>
using namespace std;
/*
Property of Const Reference
    4-Temporary variable is created when a const reference refers to a different type of 
        data, meanning that the reference refers to a variable other than the one that was 
        initialized
*/

int main(){

    int age1 = 10;
    const int &rAge1 = age1;
    // pointer &rAge points to age, and when age is modified, it points to the latest age.
    age1 = 30;
    cout << "age1 is "<< age1 << endl;
    cout << "rAge1 is "<< rAge1 << endl;

    int age2 = 10;
    const double &rAge2 = age2;
    age2 = 30; 
    cout << "age2 is "<< age2 << endl;
    cout << "rAge2 is "<< rAge2 << endl;
    // &rAge2 still 10, equal to:
    // int temp = age; 
    // const double &rAge2 = temp;

    return 0;
}
