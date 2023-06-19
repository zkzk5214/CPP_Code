#include <iostream>
using namespace std;
/*
1-C语言风格的类型转换符 
    1.1 (type)expression
    1.2 type(expression)
2-C++中有4个类型转换符 
    2.1 static_cast
        2.1.1 对比dynamic_cast,缺乏运行时安全检测
        2.1.2 不能交叉转换(不是同一继承体系的,无法转换 )
        2.1.3 常用于基本数据类型的转换、非const转换成const
    2.5 使用格式:xx_cast<type>(expression)
*/

class Person{
public:
    int m_age;
};

int main(){
    // x86 二进制 0000 1010 0000 0000 0000 0000 0000 0000
    // 十六进制 0A 00 00 00
    int a = 10;
    
    // 隐式转换
    // double d = a;
    // double d2 = double(a);
    
    const Person *p1 = new Person();
    // p1->m_age = 10;

     // Person *p2 = (Person *) p1; 
    Person *p2 = const_cast<Person*>(p1);
    p2->m_age = 10;
    
    /*
    8.25 -> 1000.01 -> 1.00001*(2**3) 3:指数,00001:尾数, 内存中存储的是指数,尾数和符号
    */

    // getchar();
    return 0;
}