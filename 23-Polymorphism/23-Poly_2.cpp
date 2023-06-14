#include <iostream>
using namespace std;

/*
    1-By default, the compiler will only call the function based on the pointer type.
        There is no polymorphism.
    2-Polymorphism is a very important property of OOB.
        2.1-The same operation on different objects can be compiled to different results,
            yielding different results.
        2.2-At runtime, the true object type can be identified and functions in the 
            corresponding subclass can be called.
    3-Polymorphism in C++ via "virtual function"(member function decorated by virtual)
        3.1-Whenever a function prototype is virtual in superclass, any function 
            overriden in the subclass automatically becomes virtual
            (subclass can omit the "virtual" keyword)
    4-Feature in polymorphism
        4.1-Subclass overrides Superclass member functions
        4.2-Superclass pointer to Subclass object
        4.3-Call the overriden member function from the Superclass
*/

struct Animal{
    virtual void speak(){
        cout << "Animal::speak()"<<endl;
    }
    virtual void run(){
        cout << "Animal::run()"<<endl;
    }
};

struct Cat:Animal{
    void speak(){
        cout << "Cat::speak()"<<endl;
    }
    void run(){
        cout << "Cat::run()"<<endl;
    }
};

// 4.2-Superclass pointer to Subclass object
void walking(Animal *p){
    p->speak();
    p->run();
}

int main(){
    walking(new Cat());

    // getchar();
    return 0;
}

