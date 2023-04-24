#include <iostream>
using namespace std;

/*
1-Lambda表达式
1.1-有点类似于JavaScript中的闭包、iOS中的Block，本质就是函数
1.2-完整结构: [capture list] (params list) mutable exception-> return type { function body } ✓capture list:捕获外部变量列表
✓params list:形参列表，不能使用默认参数，不能省略参数名
✓ mutable:用来说用是否可以修改捕获的变量
✓ exception:异常设定
✓return type:返回值类型
✓function body:函数体
1.3-有时可以省略部分结构
1.3.1-✓[capture list] (params list) -> return type {function body}
1.3.2-✓[capture list] (params list) {function body}
1.3.3-✓[capture list] {function body}
*/

int add(int v1, int v2){
    return v1 + v2;
}

int sub(int v1, int v2){
    return v1 - v2;
}

int multiple(int v1, int v2){
    return v1 * v2;
}

int divide(int v1, int v2){
    return v1 / v2;
}

int exec(int v1, int v2, int(*func)(int,int)){
    return func(v1, v2);
}

int main(){
    
    // 1.3.1
    // auto p = [] (int a, int b) -> int{
    //     return a+b;
    // };
    // cout << p(10,20) << endl;

    // 1.3.3
    // auto p = []{
    //     cout << "func() --" << endl;
    // };
    // p();

    // cout << exec(10,20,add) << endl;
    cout << exec(20, 10, [](int v1, int v2){
        return v1+v2;
    }) << endl;
    // cout << exec(10,20,sub) << endl;
    cout << exec(20, 10, [](int v1, int v2){
        return v1-v2;
    }) << endl;
    // cout << exec(10,20,multiple) << endl;
    cout << exec(20, 10, [](int v1, int v2){
        return v1*v2;
    }) << endl;
    // cout << exec(10,20,divide) << endl;
    cout << exec(20, 10, [](int v1, int v2){
        return v1/v2;
    }) << endl;

    


    // getchar();
    return 0;
}