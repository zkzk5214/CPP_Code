#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	Person &operator=(const Person &person) {
        // 重载赋值运算符
		m_age = person.m_age;
	}
};

class Student : public Person {
public:
	int m_score;
	Student &operator=(const Student &student) { // 返回引用,使得返回值又能再次被赋值
        // 重载赋值运算符
		Person::operator=(student); // 调用父类的赋值运算符
		m_score = student.m_score;
	}
};

int main() {
	Student stu1;
	stu1.m_age = 20;
	stu1.m_score = 100;

	Student stu2;

	stu2 = stu1;

	getchar();
	return 0;
}