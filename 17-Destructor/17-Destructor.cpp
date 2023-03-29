#include <iostream>
using namespace std;

// 析构函数(也叫析构器),在对象销毁的时候自动调用,一般用于完成对象的清理工作
// 特点:
//  1-函数名以~开头,与类同名,无返回值(void都不能写),无参,不可以重载,有且只有一个析构函数
// 注意:
//  2-通过malloc分配的对象free的时候不会调用析构函数
//  3-构造函数、析构函数要声明为public,才能被外界正常使用

// struct Person{
//     int m_age;
//     // 新的Person对象诞生的象征
//     Person(){
//         cout << "Person::Person()"<<endl;
//     }
//     // 一个Person对象销毁的象征
//     ~Person(){
//         cout << "~Person()"<<endl;
//     }
// };

// 3
class Person{
    int m_age;
public:
    // 新的Person对象诞生的象征
    Person(){
        cout << "Person::Person()"<<endl;
    }
    // 一个Person对象销毁的象征
    ~Person(){
        cout << "~Person()"<<endl;
    }
};

void test(){
    Person person;
}

int main(){
    cout << 1 << endl;
    // 1
    // Person person;
    // 作用域
    // {
    //     Person person;
    // }
    // test();
    
    // 2
    // Person *p = (Person *) malloc(sizeof(Person));
    // free(p);
    // 2
    Person *p = new Person;
    delete p;

    // 堆空间的地址
    cout << p << endl;
    // 栈空间的地址
    cout << &p << endl;

    cout << 2 << endl;
    // getchar();
    return 0;
}