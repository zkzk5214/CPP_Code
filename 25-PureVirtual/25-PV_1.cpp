#include <iostream>
using namespace std;
/*
    1-Pure Virtual Function: Virtual function without body and initialize to 0,
        used to define interface specifications. 
    2-Abstract Class
        2.1-Classes with pure virtual functions, cannot be instantiated(cannot create object)
        2.2-Abstract class can also contain impure virtual functions and member variables.
        2.3-If Superclass is abstract and Subclass does not completely override a pure virtual
            function, it is still abstract.
*/
struct Animal{
    // Pure Virtual Function
    virtual void speak() = 0;
    virtual void run(){} // 2.2
};

struct Cat:Animal{
    void speak(){
        std::cout << "Cat::speak()" << '\n';
    }
    void run(){
        std::cout << "Cat::run()" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Animal *anim = new Cat();
    anim->speak();

    // getchar();
    return 0;
}
