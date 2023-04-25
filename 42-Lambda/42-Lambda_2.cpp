#include <iostream>
using namespace std;

/*
Lambda表达式
完整结构: [capture list] (params list) mutable exception-> return type { function body } 
✓ capture list:捕获外部变量列表
✓ params list:形参列表，不能使用默认参数，不能省略参数名
✓ mutable:用来说用是否可以修改捕获的变量
✓ exception:异常设定
✓return type:返回值类型
✓function body:函数体
1-外部变量捕获
    1.1-值捕获
    1.2-隐式捕获
    1.3-地址捕获
2-mutable
*/

int main(){
    

    int a = 10, b = 20;
    // 1.1 值捕获
    // auto func = [a,b]{
    //     cout << a << endl;
    //     cout << b << endl;
    // };

    // 1.1 默认都是值捕获, a的存储空间无法修改
    // auto func = [a]{
    //     cout << a << endl;
    // };
    // a = 20;

    // 1.2 隐式捕获
    // auto func = [=]{
    //     cout << a << endl;
    //     cout << b << endl;
    // };

    // 1.3 地址捕获
    // auto func = [&a]{
    //     cout << a << endl;
    // };
    // a = 20;

    // 2 lambda 表达式中修改变量,使用地址捕获
    // auto func = [&a]{
    //     a++;
    // };

    auto func = [a]()mutable{ // mutable 相当于在内部定义了一个变量 a=10
        a++;
        cout << "lambda = " << a << endl;
    };
    
    func();
    cout << a << endl; // 10

    // getchar(); 
    return 0;
}