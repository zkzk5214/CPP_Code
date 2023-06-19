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
    2.2 dynamic_cast
        2.2.1 一般用于多态类型的转换,有运行时安全检测
    2.3 reinterpret_cast
        2.3.1 属于比较底层的强制转换,没有任何类型检查和格式转换,仅仅是简单的二进制数据拷贝
        2.3.2 可以交叉转换
        2.3.3 可以将指针和整数互相转换
    2.4 const_cast
        2.4.1 一般用于去除const属性,将const转换成非const
    2.5 使用格式:xx_cast<type>(expression)
*/

class Person{
    int m_age;
    virtual void run(){}
};

class Student:public Person{
    int m_score;
};

class Car{
    int m_age;
    int m_price;
    int m_height;
};

void test_const(){
    const Person *p1 = new Person();
    Person *p2 = const_cast<Person*>(p1);
    Person *p3 = (Person *) p1; // 等价于上一句 
}

void test_dynamic(){
    Person *p1 = new Person();
    Person *p2 = new Student();
    cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

    // Student * 可以访问 m_score 和 m_age(8个字节), Person对象中只有 m_age(4个字节), 但是指针可以访问8个字节
    Student *stu1 = dynamic_cast<Student *> (p1); // 此操作不安全
    Student *stu2 = dynamic_cast<Student *> (p2); // 此操作安全
    Student *stu3 = (Student *) p1; // 等价于上一句,但不会进行安全检测
    // cout << "stu1 = " << stu1 << endl;
	// cout << "stu2 = " << stu2 << endl;
    // cout << "stu3 = " << stu3 << endl;

    Car *c1 = (Car *) p1;
    Car *c2 = dynamic_cast<Car *>(p2);
    cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
}

void test_static(){
     int a = 10;    
    // double d = static_cast<double>(a);
    double d = a; // 等价于上一句 

    Person *p1 = new Person();
    // const Person *p2 = static_cast<const Person *>(p1);
    const Person *p2 = p1; // 等价于上一句 
}


int main(){
    // x86 二进制 0000 1010 0000 0000 0000 0000 0000 0000
    // 十六进制 0A 00 00 00
    int a = 10;
    
    // 隐式转换
    // double d = a;
    // double d2 = double(a);
    
    /*
    8.25 -> 1000.01 -> 1.00001*(2**3) 3:指数,00001:尾数, 内存中存储的是指数,尾数和符号
    */

	// 00 00 00 00 00 00 24 40
	// double d = a; // 不是简单的将二进制数据进行拷贝
	// 0A 00 00 00 cc cc cc cc
	double d = reinterpret_cast<double&>(a);
	// cout << "a = " << a << endl;
	// cout << "d = " << d << endl;
	
	// int *p = reinterpret_cast<int *>(0x100);
    // int *p = (int *) 0x100; // 等价于上一句
	// int a = reinterpret_cast<int>(p);
    // int a = (int) p;



    // getchar();
    return 0;
}