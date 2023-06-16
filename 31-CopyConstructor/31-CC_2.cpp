#include <iostream>
using namespace std;
/*
Call the copy constructor of superclass 
*/
class Person {
	int m_age;
public:
	Person(int age = 0) :m_age(age) {}
	Person(const Person &person) :m_age(person.m_age) {}
};

class Student : public Person {
	int m_score;
public:
	Student(int age = 0, int score = 0) :Person(age), m_score(score) {}
	// The copy constructor of Student assigns only m_score if it does 
	// not call the copy constructor of the superclass(Person(age)).
	// Student(const Student &student) :m_score(student.m_score) {} 
    
	// Superclass pointer points to subclass object, and Person(student)  
	// calls the copy constructor of the superclass.
    Student(const Student &student) :Person(student), m_score(student.m_score) {} 
};

int main() {
	// By default, the constructor of subclass calls the non-parameter 
	// constructor of superclass. (call Person::Person)
	Student stu1(18, 100);

	// The default copy take place in this object(no need to write copy 
	// constructor) overwriting all bytes of the new object's data from 
	// all bytes of the object's memory.
	Student stu2(stu1);

	// getchar();
	return 0;
}