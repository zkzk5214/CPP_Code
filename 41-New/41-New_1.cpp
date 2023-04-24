#include <iostream>
using namespace std;
/* cpp 11
1-auto 
1.1-可以从初始化表达式中推断出变量的类型，大大简化编程工作 
1.2-属于编译器特性，不影响最终的机器码质量，不影响运行效率
2-decltype 
2.1-可以获取变量的类型
3-nullptr(空指针)
3.1-可以解决NULL的二义性问题
*/

void func(int v){
    cout << "func(int) - " << v << endl;
}

void func(int *v){
    cout << "func(int *) - " << v << endl;
}

int main(){

    // 1
    // auto a = 10;
    // auto str = "c++";

    // 2
    // decltype(a) b = 20;

    // 3
    // int *b = nullptr;
    // int *p = new int;
    // delete p;
    // p = nullptr;
    
    // 3.1
    // func(0);
    // func(NULL)
    // func(nullptr);
    // cout << (NULL == nullptr) << endl;

    // int array[] = {11,22,33,44,55};
    // for (int item:array){  // : equal to in
    //     cout << item << endl;
    // }

    int array[]{11,22,33,44,55};

    // getchar();
    return 0;
}

 