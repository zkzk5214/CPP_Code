#include <iostream>
using namespace std;

// Multiple inheritance constructor calls
class Student{
    int m_score;
public:
    Student(int score){
        this->m_score = score;
    }
};

class Worker{
    int m_salary;
public:
    Worker(int salary){
        this->m_salary = salary;
    }
};

class Undergraduate : public Student, public Worker{
public:
    Undergraduate(int score, int salary): 
        // When member variables are private，cannot use m_score(score)
        Student(score), 
        Worker(salary){} 
};


int main(int argc, char const *argv[]) {
    Undergraduate ug(100,2000); 

    return 0;
}
