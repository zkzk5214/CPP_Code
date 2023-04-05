#include <iostream>
using namespace std;


struct Dog{
    void speak(){
        cout << "Dog::speak()"<<endl;
    }
    void run(){
        cout << "Dog::run()"<<endl;
    }
};

struct Cat{
    void speak(){
        cout << "Cat::speak()"<<endl;
    }
    void run(){
        cout << "Cat::run()"<<endl;
    }
};

struct Pig{
    void speak(){
        cout << "Dog::speak()"<<endl;
    }
    void run(){
        cout << "Dog::run()"<<endl;
    }
};

void walking(Dog *p){
    p->speak();
    p->run();
}

void walking(Cat *p){
    p->speak();
    p->run();
}

int main(){

    walking(new Dog());
    walking(new Cat());


    // getchar();
    return 0;
}