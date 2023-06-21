#include <iostream>
using namespace std;
/*
2-Property of shared_ptr
    2.1-A shared_ptr makes a strong reference to an object
    2.2-Every object has a strong reference count, keeping 
        track of how many shared_ptr strong reference it has. 
    2.2.1-A strong reference count can be obtained with the 
        use_count function of shared_ptr
    2.2.2-When a new shared_ptr points an object, the object's 
        strong reference count is incremented.
    2.2.3-When a shared_ptr is destroy(for example, at the 
        end of a scope), the object's strong reference count 
        is decremented.
    2.2.4-An object is automatically destoryed when its strong 
        reference count reaches 0( when no shared_ptr points 
        to the object)
*/ 

class Person {
	int m_age;
public:
	Person() {
		cout << "Person()" << endl;
	}
	Person(int age) :m_age(age) {
		cout << "Person(int)" << endl;
	}
	~Person() {
		cout << "~Person()" << endl;
	}
	void run() {
		cout << "run() - " << m_age << endl;
	}
};

int main() {
    // 2.2
	{
        shared_ptr<Person> p4;
        {
            shared_ptr<Person> p1(new Person(10));
            cout << p1.use_count() << endl;

            shared_ptr<Person> p2(p1);
            cout << p1.use_count() << endl;
            
            shared_ptr<Person> p3 = p2;
            cout << p1.use_count() << endl;
            p4 = p3;
            cout << p1.use_count() << endl;
        }	
	}

	// getchar();
	return 0;
}