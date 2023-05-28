#include<iostream>
using namespace std;

int main(){

    // Expression: some expresions in c++ can be assigned.
    int b = 1;
    int d = 2;

    // ( b = d ) = 4; // b=4, d=2
    ( b > d ? b : d) = 4; // b=4 if b>d else d=4
    
    cout << "b = " << b << endl;
    cout << "d = " << d << endl;

    // getchar();
    return 0;
}