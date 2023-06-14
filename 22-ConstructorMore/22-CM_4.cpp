#include <iostream>
using namespace std;

// Execution order of constructors and destructors
struct Person{
    Person(){ // Constructor
        cout << "Person::Person()"<<endl;
    }
    ~Person(){ // Destructor
        cout << "Person::~Person()"<<endl;
    }
};

struct Student:Person{
    Student(){
        // call Person::Person
        cout << "Student::Student()"<<endl;
    }
    ~Student(){
        cout << "Student::~Student()"<<endl;
        // call Person::~Person
    }
};

int main(){
    {
        Student student;
    }

    // getchar();
    return 0;
}