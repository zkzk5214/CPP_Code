#include <iostream>
using namespace std;
/*
Lambda:
1-The essence is a function.
2-Syntax for Lambda:
    [capture list] (params list) mutable exception-> return type { function body }
    ✓ capture list: captures the list of external variables
    ✓ params list: prarmeters list, cannot use default 
        parameters, cannot omit parameter names
    ✓ mutable: whether can modify the captured variable
    ✓ exception ✓ return type ✓ function body
Generally, the return-type in lambda expressions is 
    evaluated by the compiler itself and we don’t need 
    to specify it explicitly. Also the -> return-type 
    part can be ignored.  However, in some complex cases 
    e.g. conditional statements, the compiler can’t 
    determine the return type and explicit specification 
    is required. 
3-Sometimes it is possible to omit part of the structure:
    3.1-✓[capture list] (params list) -> return type {function body}
    3.2-✓[capture list] (params list) {function body}
    3.3-✓[capture list] {function body}
*/

int main(){
    // 3.1
    int (*p1)(int, int) = [] (int v1, int v2) -> int {
        return v1 + v2;
    };
    cout << p1(10, 20) << endl;

    // 3.2
    auto p2 = [](int v1, int v2){
        return v1+v2;
    };
    cout << p2(10, 20) << endl;

    auto p3 = [](int v1, int v2){return v1-v2;}(20,10);
    cout << p3 << endl;

    auto p4 = []{cout << "test" << endl;};
    p4();

    // getchar();
    return 0;
}