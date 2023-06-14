#include <iostream>
using namespace std;

class Animal{
public:
    virtual void speak(){ 
        cout << "Animal::speak()"<<endl;
    }
};

class Cat:public Animal{
public:
    virtual void speak(){
        Animal::speak();
        cout << "Cat::speak()"<<endl;
    }
};

int main(){
    // Call a member function prototype of Superclass
    Animal *cat = new Cat();
    cat->speak();

    // getchar();
    return 0;
}
