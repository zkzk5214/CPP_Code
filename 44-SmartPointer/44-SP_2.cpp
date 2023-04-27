#include <iostream>
using namespace std;
/*
1-shared_ptr的设计理念 
1.1-多个shared_ptr可以指向同一个对象，当最后一个shared_ptr在作用域范围内结束时，对象才会被自动释放
1.2-可以通过一个已存在的智能指针初始化一个新的智能指针
2-shared_ptr的原理
2.1一个shared_ptr会对一个对象产生强引用(strong reference)
2.2-每个对象都有个与之对应的强引用计数，记录着当前对象被多少个shared_ptr强引用着
    2.2.1-可以通过shared_ptr的use_count函数获得强引用计数
    2.2.2-当有一个新的shared_ptr指向对象时，对象的强引用计数就会+1
    2.2.3-当有一个shared_ptr销毁时(比如作用域结束)，对象的强引用计数就会-1
    2.2.4-当一个对象的强引用计数为0时(没有任何shared_ptr指向对象时)，对象就会自动销毁(析构)
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

    // 1.1
    // cout << 1 << endl;
	// {
    //     shared_ptr<Person> p4;
    //     {
    //         shared_ptr<Person> p1(new Person(10));
    //         shared_ptr<Person> p2 = p1;
    //         shared_ptr<Person> p3 = p2;
    //         p4 = p3;
    //     }
	// 	cout << 2 << endl;
	// }
    // cout << 3 << endl;

    // 2.2
	{
        shared_ptr<Person> p4;
        {
            shared_ptr<Person> p1(new Person(10));
            cout << p1.use_count() << endl;

            shared_ptr<Person> p2 = p1;
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