#include <iostream>
using namespace std;

// Functions Overhide

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
    int m_age; // No gramma errors 
    void eat(){
        std::cout << "Undergraduate::eat()" << '\n';
    }
};


int main(int argc, char const *argv[]) {
    Undergraduate ug;           // 12bytes, have three m_age
    ug.eat();                   // Undergraduate::eat
    ug.Student::eat();          // Student::eat
    ug.Worker::eat();           // Worker::eat
    ug.Undergraduate::eat();    // Undergraduate::eat

    // No Warning, Not Recommended
    // ug.Student::m_age = 11;
    // ug.Worker::m_age = 12;
    // ug.Undergraduate::m_age = 13;

    return 0;
}
