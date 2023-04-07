#include <iostream>
using namespace std;

class Student{
public:
    virtual void study(){
        std::cout << "Student::study()" << '\n';
    }
};

class Worker{
public:
    virtual void work(){
        std::cout << "Worker::work()" << '\n';
    }
};

class Undergraduate : public Student, public Worker{
public:
    void study(){
        std::cout << "Undergraduate::study()" << '\n';
    }
    void work(){
        std::cout << "Undergraduate::work()" << '\n';
    }
    void play(){
        std::cout << "Undergraduate::play()"  << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Undergraduate ug;
    // 会产生两张虚表(8bytes)
    // 一张表放 Student 相关的虚函数地址(Undergraduate 的 study)
    // 另一张表放 Worker 相关的虚函数地址(Undergraduate 的 work)
    // 如果子函数没有重写，虚函数地址为 Student 的 study 和 Worker 的 work

    return 0;
}
