
#include <iostream>
using namespace std;

int main(){
    
    //1-泛型Lambda表达式
    auto func = [](auto v1, auto v2){ return v1+v2;};
    cout << func(10,20.5)<< endl;

    //2-对捕获的变量进行初始化
    int a;
    auto func1 = [a = 10](){
        cout << a << endl;
    };
    func1();
    cout << a << endl;


    // getchar();
    return 0;
}