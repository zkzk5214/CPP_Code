#include <iostream>
using namespace std;

/*
A virtual function is implemented as a virtual table, which stores the address
of the virtual function that will eventually be called.
*/ 

class Animal{
public:
    int m_age;
    virtual void speak(){
        cout << "Animal::speak()"<<endl;
    }
    virtual void run(){
        cout << "Animal::run()"<<endl;
    }
};

class Cat:public Animal{
public:
    int m_life;
    void speak(){
        cout << "Cat::speak()"<<endl;
    }
    void run(){
        cout << "Cat::run()"<<endl;
    }
};

class WhiteCat:public Cat{
    int m_life;
    void speak(){
        cout << "WhiteCat::speak()"<<endl;
    }
    void run(){
        cout << "WhiteCat::run()"<<endl;
    }
};

int main(){
    cout << sizeof(Cat) << endl; // 16(8+ virtual8) x64

    Animal *cat = new Cat();// m_life=0
    cat -> m_age = 20;
    cat->speak();
    cat->run();
    delete cat;

    Animal *anim = new Animal();
    anim -> speak();
    anim -> run();
    delete anim;

    Animal *wcat = new WhiteCat();
    wcat -> speak();
    wcat -> run();
    delete wcat;

    // getchar();
    return 0;
}