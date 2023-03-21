#include <iostream>
using namespace std;

// const 引用的特点
// 4-当常引用指向了不同类型的数据时,会产生临时变量,即引用指向的并不是初始化时的那个变量

int main(){

    // 4-1 
    // int age = 10;
    // const int &rAge = age;
    // age = 30; // &rAge 指针指向 age,当 age 修改后, 指向了最新的 age
   
    // 4-2
    int age = 10;
    const double &rAge = age;
    age = 30; 
    cout << "age is "<< age << endl;
    // &rAge 指针依旧是10, 相当于:
    // int temp = age; 
    // const long &rAge = temp;
    cout << "rAge is "<< rAge << endl;

    return 0;
}