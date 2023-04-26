#include <iostream>
using namespace std;
/*
1-编程过程中的常见错误类型 
    1-1-语法错误
    1.2-逻辑错误
    1.3-异常
2-异常
    2.1-异常是一种在程序运行过程中可能会发生的错误(比如内存不够) 
    2.2-异常没有被处理，会导致程序终止
    2.3-throw异常后，会在当前函数中查找匹配的catch，找不到就终止当前函数代码，去上一层函数中查找。
        如果最终都找不到匹配的catch，整个程序就会终止
    2.4-异常的抛出声明
        为了增强可读性和方便团队协作，如果函数内部可能会抛出异常，建议函数声明一下异常类型
*/

int divide(int v1, int v2){
        if (v2 == 0) throw "can not divided by zero"; // 一旦抛出异常,后面代码都不会执行
        return v1/v2;
}

// 2.4
// void func1 (){} // 抛出任何可能的异常
// void func2() throw(){} // 不抛出任何异常
// void func3() throw(int, double){} // 只抛出int、double类型的异常

int main(){
   
   // 2.3
    try {
        int a = 10, b = 0, c = divide(a,b);
    }    catch (const char *exception){
        cout << exception << endl;
    }
        cout << "runing..." << endl;

    /*
    try {
        // 被检测的代码
    } catch (异常类型[变量名]) {
        // 异常处理代码
    } catch (异常类型[变量名]) {
        // 异常处理代码
    } ...
    */
   
    // getchar();
    return 0;
}