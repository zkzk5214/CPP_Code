#include <iostream>
using namespace std;

// 2-If the function has both a function prototype and a definition of function, 
// the default arguments can only be placed in function prototype

// Function Prototype(if not function prototype, 
// definition of function cannot be placed after main function)
int sum(int v1=5, int v2=6); 

int main(){
    cout << sum() << endl;
    cout << sum(10) << endl;
    cout << sum(10, 20) << endl;

    // getchar();
    return 0;
 }


// Definition of function sum.
int sum(int v1, int v2){
    return v1+v2;
}