#include <iostream>
using namespace std;
/*
Lambda
    [capture list] (params list) mutable exception-> return type { function body } 
[capture list]    
    1-Capturing external variables
        1.1-Value capture
        1.2-Implicit capture
        1.3-Address capture
    2-Mutable
*/

int main(){
    // 1.1-Value capture
    int a1 = 10, b1 = 20;
    auto func1 = [a1,b1]{
        cout << a1 << endl;
        cout << b1 << endl;
    };
    a1 = 11, b1 = 22;
    func1();

    // 1.2-Implicit capture(Value capture)
    int a2 = 10, b2 = 20;
    auto func2 = [=]{
        cout << a2 << endl;
        cout << b2 << endl;
    };
    a2 = 11, b2 = 22;
    func2();

    // 1.3-a is value capture, else is address capture
    int a3 = 10, b3 = 20;
    auto func3 = [&, a3]{
        cout << a3 << endl;
        cout << b3 << endl;
    };
    a3 = 11, b3 = 22;
    func3();

    // 1.4-a is address capture, b is value capture
    int a4 = 10, b4 = 20;
    auto func4 = [&a4, b4]{
        cout << a4 << endl;
        cout << b4 << endl;
    };
    a4 = 11, b4 = 22;
    func4();

    // 1.5 Implicit capture(implicit capture)
    int a5 = 10, b5 = 20;
    auto func5 = [&]{
        cout << a5 << endl;
        cout << b5 << endl;
    };
    a5 = 11, b5 = 22;
    func5();

    // 1.6 a is address capture, else is value capture
    int a6 = 10, b6 = 20;
    auto func6 = [=, &a]{
        cout << a6 << endl;
        cout << b6 << endl;
    };
    a6 = 11, b6 = 22;
    func6();

    // getchar(); 
    return 0;
}