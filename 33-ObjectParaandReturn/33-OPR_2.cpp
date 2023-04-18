#include <iostream>
using namespace std;

/* 匿名对象(临时对象)
匿名对象:没有变量名,没有被指针指向的对象,用完后马上调用析构
*/ 


class Car {
public:
	Car() {
		cout << "Car() - " << this << endl;
	}

	Car(const Car &car) {
		cout << "Car(const Car &) - " << this << endl;
	}

	~Car() {
		cout << "~Car() - " << this << endl;
	}

	void run() {
		cout << "run()" << endl;
	}
};

void test1(Car car) {}

Car test2(){
    return Car();
}


int main() {

    // cout << 1 << endl;
	// Car().run();

    // test1(Car());
    
    Car car2;
    car2 = test2();


    // cout << 2 << endl;


	// getchar();
	return 0;
}