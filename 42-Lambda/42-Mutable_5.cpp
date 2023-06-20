
#include <iostream>
using namespace std;
/*
Lambda
    [capture list] (params list) mutable exception-> return type { function body } 
[capture list]    
    2-Mutable
        The mutable storage class specifier in 
    C++ (or use of mutable keyword in C++) 
        Sometimes there is requirement to modify 
    one or more data members of class / struct 
    through const function even though you don’t 
    want the function to update other members of 
    class / struct. This task can be easily 
    performed by using mutable keyword. 
*/

int main(){
    int a = 10;
    // mutable is equivalent to internally defining a variable a=10 
    auto func = [a]() mutable{
        cout <<  ++a << endl; // 11
    };
    func();
    cout << a << endl; // 10

    // getchar(); 
    return 0;
}