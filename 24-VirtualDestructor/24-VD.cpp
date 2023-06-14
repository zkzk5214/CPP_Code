#include <iostream>
using namespace std;
/* 
    1-Destructor should be declared virtual if there is a superclass 
        pointer to the subclass object(virtual destructor)
    2-The destructor of the subclass is only called when the superclass 
        is delete, ensuring integrity of the destruction.
    3-When the superclass destructor is virtual, the subclass destructor 
        becomes virtual as well.
*/

class Animal{
public:
    virtual void run(){
        cout << "Animal::run()"<<endl;
    }
    Animal(){
        cout << "Animal::Animal()" << endl;
    }
    virtual ~Animal(){ // 1
        cout << "Animal::~Animal()" << endl;
    }
};

class Cat: public Animal{
public:
    void run(){
        cout << "Cat::run()"<<endl;
    }
    Cat(){
        cout << "Cat::Cat()" << endl;
    }
    ~Cat(){
        cout << "Cat::~Cat()" << endl;
    }
};

int main(){
    // Superclass pointer to the Subclass object
    Animal *cat = new Cat(); 
    cat -> run();
    // After adding the virtual destructor, 
    // look at the type on the right to determine the object to delete
    delete cat; 

    // getchar();
    return 0;
}
