#include <iostream>
using namespace std;

// 1-父类指针可以指向子类对象,是安全的,开发中经常用到(继承方式必须是public)
// 2-子类指针指向父类对象是不安全的
class Person{
public:
    int m_age;
};

class Student: public Person{ // public继承 才可满足 1
    int m_score;
};

int main(){

    // Student *p = new Student(); // new 开辟一段新的空间(在堆上)

    // 1
    Person *p = new Student();

    // 2
    // Student *p = (Student *) new Person();

    // getchar();
    return 0;
}