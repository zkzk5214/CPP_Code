
#include <iostream>
using namespace std;
// 构造函数(也叫构造器),在对象创建的时候自动调用,一般用于完成对象的初始化工作
// 特点: 1-函数名与类同名,无返回值(void都不能写),可以有参数,可以重载,可以有多个构造函数
//      2-一旦自定义了构造函数,必须用其中一个自定义的构造函数来初始化对象
// 注意: 3-通过malloc分配的对象不会调用构造函数
//      4-默认情况下,编译器会为每一个类生成空的无参的构造函数(这条在cpp为错误结论)
//      5-在某些特定饿情况下,编译器才会为类生成空的无参的构造函数

struct Person{
    int m_age;
    int m_money;

    Person(){
        m_age = 0;
        cout << "Person()" << endl; // 构造函数
    }
    // 1
    Person(int age){
        m_age = age;
        cout << "Person(int age)" << endl; // 函数名一样,参数不一样(重载)
    }
    // 1
    Person(int age, int money){
        m_age = age;
        m_money = money;
        cout << "Person(int age, int money)" << endl; // 函数名一样,参数不一样(重载)
    }

    void display(){
        cout << "age is " << m_age << ", money is "<< m_money << endl;
    }
};

struct Person_1 {
    int m_age;

    Person_1(){
        cout << "Person::Person()" << endl;
    }

    void run(){
        cout << "Person::run() - " << m_age << endl;
    }
};

// 4
struct Person_2{
    int m_age;
    // Person_2(){

    // }
};


int main(){

    // Person person(20);
    // person.display();

    // 2
    Person person1(10, 20);
    person1.display();
    // person.m_age = 0; // method 1

    // 3
    // Person_1 *p = (Person_1 *) malloc(sizeof(Person_1)); // malloc 只申请堆空间
    // p -> m_age = 10;
    // p -> run();
    // free(p); 

    Person_1 *p = new Person_1;
    delete p;

    // 4
    Person_2 person_2;
    person_2.m_age = 10;

    // getchar();
    return 0;
}