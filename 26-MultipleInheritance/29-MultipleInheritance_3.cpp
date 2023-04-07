#include <iostream>
using namespace std;

class Student{
public:
    int m_age;
    void eat(){
        std::cout << "Student::eat()" << '\n';
    }
};

class Worker{
public:
    int m_age;
    void eat(){
        std::cout << "Worker::eat()" << '\n';
    }
};


class Undergraduate : public Student, public Worker{
public:
    int m_age; // 此语法不报错
    void eat(){
        std::cout << "Undergraduate::eat()" << '\n';
    }
};


int main(int argc, char const *argv[]) {
    Undergraduate ug; // 12bytes, 有3个 m_age
    ug.eat(); // 调用的是 Undergradu 的 eat
    ug.Student::eat(); // 指明调用父类 Student 的 eat
    ug.Worker::eat(); // 指明调用父类 Worker 的 eat
    ug.Undergraduate::eat();

    // 不报错，不建议
    ug.Student::m_age = 11;
    ug.Worker::m_age = 12;
    ug.Undergraduate::m_age = 13;

    return 0;
}
