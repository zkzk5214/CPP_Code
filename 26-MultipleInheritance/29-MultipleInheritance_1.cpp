#include <iostream>
using namespace std;

// C++允许一个类可以有多个父类（不建议使用，会增加程序设计复杂度）
struct Student{
    int m_score;
    // Student(int score):m_score(score){}
    void study(){
        std::cout << "Student::study() - score = " << m_score << '\n';
    }
};

struct Worker{
    int m_salary;
    // Worker(int salary):m_salary(salary){}
    void work(){
        std::cout << "Worker::work() - m_salary = " << m_salary << '\n';
    }
};

struct Undergraduate : public Student, public Worker{ // 可以写public, private
    int m_grade;
    // Undergraduate(int score, int salary, int grade):m_grade(grade), 
    //     Student(score), // class创建类，成员变量为private时，不可以直接m_score(score)
    //     Worker(salary){} // 多继承体系下的构造函数的调用
    void play(){
        std::cout << "Undergraduate::play() - grade" << m_grade << '\n';
    }
};


int main(int argc, char const *argv[]) {
    Undergraduate ug; // 12bytes= 4(Undergraduate)+4(Worker)+4(Student)
    // 由于先继承 Student 内存地址排在前 worker在后

    ug.m_score = 100;
    ug.m_salary = 2000;
    ug.m_grade = 4;
    ug.study();
    ug.work();
    ug.play();

    return 0;
}
