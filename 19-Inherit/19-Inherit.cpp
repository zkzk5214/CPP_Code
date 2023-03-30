#include <iostream>
using namespace std;
// 继承,可以让子类拥有父类的所有成员(变量、函数)
// 基类(cpp没有),类似python的object

struct Person{  // superclass
    int m_age;
    void run(){
        cout << "Person::run()" << endl;
    } 
};
struct Student:Person{ // subclass 
    int m_score;
    void study(){}
};
struct Worker:Person{ // subclass 
    int m_score;
    void salary(){}
};


int main(){

    Student student;
    student.m_age = 20;
    student.run();

    // getchar();
    return 0;
}