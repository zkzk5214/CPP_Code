#include <iostream>
#include "Person.h"
using namespace std;

// 1-命名空间的嵌套
namespace AA{
    namespace BB{
        int g_age;
    }
}

// 2-有个默认的全局命名空间,我们创建的命名空间默认都嵌套在它里面
void func(){
    cout << "func()" << endl;
}

// 3-命名空间的合并
namespace CC{
    void func(){
        cout << "CC::func()"<<endl;
    }
} 
namespace CC{
    int m_word;
}
// 等价
// namespace CC{
//     int m_word;
//     void func(){
//         cout << "CC::func()"<<endl;
//     }
// } 


int main(){

    // AA::BB::g_age = 10;
    // using namespace AA::BB;
    // g_age = 20;
    // using AA::BB::g_age;
    // g_age = 30;

    // 2
    using namespace CC;
    CC::func(); // 等价 ::CC::func();
    ::func(); // 全局命名空间

    // getchar();
    return 0;
} 