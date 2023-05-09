#include <iostream>
using namespace std;

// 4-Function Overload and Default Arguments may  cause conflicts and ambiguities
// (it is recommended to use default arguments)
void display(int a, int b=20){
    cout << "a is " << a << endl;
}

void display(int a){
    cout << "a is " << a << endl;
}

int main(){

    // 4)
    // display(10); // error!

    // getchar();
    return 0;
}