#include <iostream>
using namespace std; // 系统定义好的命名空间, cout, endl等, 如果不加这句则写为 std::cout, std::endl

// 命名空间可以用来避免命名冲突
// 命名空间不影响内存布局
// 如果两个namespace里有相同的变量/函数等, 调用其会产生二义性, 需要前面加前缀

namespace AA{
    int g_age;

    void func(){

    }

    class Person{
    int m_age;
    int money;
    };
}


// class Person{
//     int m_height;
// };

int main(){
    // Person person; // 调用全局的 Person

    // AA::Person person; // 调用里面的 Person
    // AA::g_age = 10;
    // AA::func();

    using namespace AA;
    g_age = 10;
    func();
    Person person;

    using AA::g_age;
    g_age = 20;

    cout << sizeof(person) << endl; 
    // getchar();
    return 0;
}