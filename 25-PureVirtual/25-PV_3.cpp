#include <iostream>
using namespace std;
/*
    2-Abstract Class
        2.1-Classes with pure virtual functions, cannot be instantiated(cannot create object)
        2.2-Abstract class can also contain impure virtual functions and member variables.
        2.3-If Superclass is abstract and Subclass does not completely override a pure virtual
            function, it is still abstract.
*/
struct Animal{
    int m_age;  // 2.2
    virtual void speak() = 0;
    virtual void run() = 0;
};

struct Dog:Animal{ // 2.3
    void run(){
        std::cout << "Dog::run()" << '\n';
    }
};

struct Husky:Dog{
    void speak(){
        std::cout << "Husky::speak()" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Husky h; // Not abstract class

    // getchar();
    return 0;
}
