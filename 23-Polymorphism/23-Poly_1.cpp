#include <iostream>
using namespace std;
/*
    1-Superclass pointer point to subclass is safe(inheritence must be public)
    2-Subclass pointer point to superclass object is unsafe.
*/

class Person{
public:
    int m_age;
};

class Student: public Person{
public:
    int m_score;
};

int main(){
    Student *p1 = new Student();
    // 1
    Person *p2 = new Student();
    p2 -> m_age = 10;

    // 2(unsafe)
    Student *p3 = (Student *) new Person();
    p3 -> m_age = 10;
    p3 -> m_score = 100;

    // getchar();
    return 0;
}
