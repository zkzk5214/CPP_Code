#include <iostream>
using namespace std;

class Person {
private:
	int m_age;
	int m_height;
	// void operator=(const Person &person) {} // 变成private函数之后则外面不能赋值

public:
	Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
	Person &operator=(const Person &person) {
		m_age = person.m_age; // 将age赋值,height保留
		return *this;
	}
	void display() {
		cout << m_age << ", " << m_height << endl;
	}
};

int main() {
	Person p1(10, 180);
	Person p2(11, 175);
    
    // p1 = p2;
    (p1=p2)=Person(50,20); 
    
    p1.display();
	
	// getchar();
	return 0;
}
