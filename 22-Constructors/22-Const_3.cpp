#include <iostream>
using namespace std;

struct Person{
    Person(){ // 构造函数
        cout << "Person::Person()"<<endl;
    }
    ~Person(){ // 析构函数
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