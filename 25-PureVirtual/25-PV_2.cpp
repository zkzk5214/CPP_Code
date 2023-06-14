#include <iostream>
using namespace std;
/*
    2-Abstract Class
        2.1-Classes with pure virtual functions, cannot be instantiated(cannot create object)
        2.2-Abstract class can also contain impure virtual functions and member variables.
        2.3-If Superclass is abstract and Subclass does not completely override a pure virtual
            function, it is still abstract.
*/
struct Animal1{
    // pure virtual function
    virtual void speak() = 0;
    virtual void run() = 0;
};

struct Dog:Animal1{
    void run(){
        std::cout << "Dog::run()" << '\n';
    }
};

struct Husky:Dog{
    void speak(){
        std::cout << "Husky::speak()" << '\n';
    }
    void run(){
        std::cout << "Husky::run()" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    // Animal anim; // Error: Cannot instantiate an abstract class
    
    // If we do not override the pure virtual function in the derived class, 
    //  then the derived class also becomes an abstract class.
    // Dog dog; 

    Husky hsq;
    hsq.run();
    hsq.speak();

    // getchar();
    return 0;
}
