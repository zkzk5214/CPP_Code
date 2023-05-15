# include <iostream>
using namespace std;

// 1-The code modified by "extern C" will be compiled in the way of C.
//  1.1-Functions with the same name are not allowed in C, because the function names are the same at compile, unlike C++,
//      which adds parameter types and return types as the compiled name of the function to achieve function overload.

// 1.1
// extern "C" void func(){
//     cout << "func()" << endl;
// }
// extern "C" void func(int age){
//     cout << "func(int age)" << age << endl;
// }

// 1.2(equal to 1.1)
// extern "C"{
//     void func(){
//     cout << "func()" << endl;
//     }
//     void func(int age){
//         cout << "func(int age)" << age << endl;
//     }
// }

int main(){
    // getchar();
    return 0;
}
