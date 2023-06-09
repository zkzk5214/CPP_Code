#include <iostream>
// System-defined namespace, without this line, 
// would be written std::cout, std::endl instead of cout, endl
using namespace std; 

/* 
    1-namespace can be used to avoid naming collisions.
    2-namespace does not affect memory layout.
    3-If two namespaces have the same variables/functions, 
        calling them are ambiguous and need to be prefixed.
*/
namespace Test{
    int g_age;
    class Person{};
    void func(){}
}

int main(){
    // 1
    Test::g_age = 20;
    Test::Person *p = new Test::Person();
    Test::func();
    // 2
    using namespace Test;
    g_age = 20;
    Person *p1 = new Person();
    func();
    // 3
    using Test::g_age;
    g_age = 20;

    // getchar();
    return 0;
}