#include <iostream>
using namespace std;

/*
编译器默认的提供的拷贝是浅拷贝
浅拷贝（shallow copy）：指针类型的变量只会拷贝地址值
深拷贝（deep copy）：将指针指向的内容拷贝到新的存储空间
区别, 有没有产生新的存储空间
*/

class Car {
	int m_price;
	char *m_name; // 字符串
    void copy(const char *name = NULL){
        if (name == NULL) return;

        // 申请新的堆空间
        m_name = new char[strlen(name)+1]{}; // {}保证全部都是0,即保证最后一个也是0
        // 拷贝字符串数据到新的空间 
        strcpy(m_name, name);
    }
public:
	// const参数能接收 const和非const 实参
	Car(int price = 0, const char *name = NULL) :m_price(price) { 
        copy(name);
        // if (name == NULL) return;
        // // 申请新的堆空间
        // m_name = new char[strlen(name)+1]{}; // {}保证全部都是0,即保证最后一个也是0
        // // 拷贝字符串数据到新的空间 
        // strcpy(m_name, name);
    }

    // 深拷贝,需要构建一下拷贝构造函数
    Car(const Car &car) :m_price(car.m_price) { 
        copy(car.m_name);
        // if (car.m_name == NULL) return;
        // // 申请新的堆空间
        // m_name = new char[strlen(car.m_name)+1]{}; // {}保证全部都是0,即保证最后一个也是0
        // // 拷贝字符串数据到新的空间
        // strcpy(m_name, car.m_name);
    }

    ~Car(){
        if (m_name == NULL) return;
        delete[] m_name;
        m_name = NULL;
    }

	void display() {
		cout << "price is " << m_price << ", name is " << m_name << endl;
	}
};


int main() {

	// char name[] = {'b', 'm', 'w', '\0'}; // 打印截止至 '\0'
    // Car *car = new Car(100, name); // new 对象放在在栈空间
    // Car *car = new Car(100, "bmw"); // string " "
	// car -> display();

    Car car1(100,"bmw");
    Car car2 = car1;
    car2.display();

	// getchar();
	return 0;
}