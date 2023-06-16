#include <iostream>
using namespace std;

/*
1-The compiler provides a shallow copy by default.
    1.1-Copies the values of all member variables from one 
        object to another.
    1.2-If a member variable is a pointer, only the address 
        stored in the pointer is copied, not the memory that 
        the pointer point to.
    1.3-This can cause problems with heap space being free 
        multiple times.
2-If you need to implement a deep copy, you need a custom copy constructor
    2.1-Copies the memory pointed to by a member variable of the pointer 
        type into the new memory space.
*/
 
class Car {
	int m_price;
	char *m_name;
    void copyName(const char *name = NULL){
        if (name == NULL) return;

        // Request new heap space
        // {} eusures that all are 0, the last is also 0.(Not compatible with c++17)
        this->m_name = new char[strlen(name) + 1]{}; 
        // Copy the string to the new space
        strcpy(this->m_name, name);
        /*
        The C strcpy() function copies the content of a string to another. 
        The content of the destination string will be replaced with that 
        of the source string by the strcpy() function. 
        */
    }
public:
    // Const accepts both const/non-const arguments
	Car(int price = 0, const char *name = NULL) :m_price(price) { 
        copyName(name);
        // if (name == NULL) return;
        // m_name = new char[strlen(name)+1]{}; 
        // strcpy(m_name, name);
    }

    // Deep copy, need to build a copy constructor.
    Car(const Car &car) :m_price(car.m_price) { 
        copyName(car.m_name);
        // if (car.m_name == NULL) return;
        // m_name = new char[strlen(car.m_name)+1]{};
        // strcpy(m_name, car.m_name);
    }

    ~Car(){
        if (this->m_name != NULL) {
            delete[] this-> m_name;
        }
    }

	void display() {
		cout << "price is " << this->m_price << ", name is " << this->m_name << endl;
	}
};


int main() {

	char name[] = {'b', 'm', 'w', '\0'}; // print up to '\0'
    Car *car1 = new Car(100, name); // new Car object put in the stack space
    Car *car2 = new Car(200, "bmw"); // string " "
	car1 -> display();

    Car car3(300, "bmw");
    Car car4 = car3;
    car4.display();

	// getchar();
	return 0;
}