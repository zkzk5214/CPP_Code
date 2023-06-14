#include <iostream>
using namespace std;

struct Animal{
    int m_age;
    void speak(){
        cout << "Animal::speak()"<<endl;
    }
    void run(){
        cout << "Animal::run()"<<endl;
    }
};

struct Cat:Animal{
    int m_life;
    virtual void speak(){
        cout << "Cat::speak()"<<endl;
    }
    virtual void run(){
        cout << "Cat::run()"<<endl;
    }
};

struct WhiteCat:Cat{
    int m_life;
    void speak(){
        cout << "WhiteCat::speak()"<<endl;
    }
    void run(){
        cout << "WhiteCat::run()"<<endl;
    }
};

int main(){
    // Member function in Animal is not virtual function
    Animal *wcat = new WhiteCat();
    wcat -> speak();
    wcat -> run();

    // The member functions of both Cat and WhiteCat are virtual.
    Cat *cat1 = new WhiteCat();
    cat1 -> speak();
    cat1 -> run();

    // getchar();
    return 0;
}
