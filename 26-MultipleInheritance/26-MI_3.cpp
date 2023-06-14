#include <iostream>
using namespace std;

// Multiple Inheritance - Virtual Function
// If a subcalss inherits from multiple superclass that have virtual functions,
//  the subcalss will have multiple virtual table for its objects.

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
    /*
    Generate two virtual tables(8bytes)
    One for virtual function address related to Students. (study for Undergraduate)
    Anther for virtual function address associated with Worker. (work for Undergraduate)
    Virtual function addresses are Student's study and Worker's work,
        if subclasses are not overrideen. 
    */

    return 0;
}
