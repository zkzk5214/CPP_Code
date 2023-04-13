#include <iostream>
using namespace std;

class Person {
public:
	int m_age;
	Person(int age = 0) :m_age(age) {}
	// Person(const Person &person) :m_age(person.m_age) {}
};

class Student : public Person {
public:
	int m_score;
	Student(int age = 0, int score = 0) :Person(age), m_score(score) {}
    // Student的拷贝构造函数如果没有调用父类的拷贝构造函数,就只给m_score赋值
	// Student(const Student &student) :m_score(student.m_score) {} 
    
    // Student(const Student &student) :Person(student), m_score(student.m_score) {} 
    // 父类指针指向子类对象, Person(student)调用父类的拷贝构造函数
};



int main() {
    // 默认都是会拷贝的(不需要写拷贝构造函数),将对象内存中的所有字节数据覆盖新对象的所有字节数据
	Student stu1(18, 100);
	Student stu2(stu1);

	cout << stu2.m_age << endl; 
	cout << stu2.m_score << endl;	

	// 子类的构造函数默认会调用父类无参的构造函数 即 call Person::Person
	// 所以假如 14行没有调用父类的拷贝构造函数Person(age),则 stu2.m_age等于父类无参构造函数中的age=0

	// getchar();
	return 0;
}