#include <iostream>
using namespace std;

// 1-默认情况下,编译器只会根据指针类型调用对应的函数,不存在多态
// 2-多态是面对对象非常重要的特性
// 同一操作作用于不同的对象,可以有不同的解释,产生不同的执行结果
// 在运行时,可以识别出真正的对象类型,调用对应子类中的函数
// 3-C++中的多态通过virtual function来实现(被virtual修饰的成员函数)
// 只要在父类中声明为虚函数,子类中重写的函数也自动变成虚函数(也就是说子类可以省略virtual关键字)
// 4-多态的要素
// 子类重写父类的成员函数
// 父类指针指向子类对象
// 利用父类指针调用重写的成员函数

struct Animal{
    virtual void speak(){ // 2-虚函数 
        cout << "Animal::speak()"<<endl;
    }
    virtual void run(){
        cout << "Animal::run()"<<endl;
    }
};

struct Dog:Animal{
    void speak(){
        // override
        cout << "Dog::speak()"<<endl;
    }
    void run(){
        cout << "Dog::run()"<<endl;
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

struct Pig:Animal{
    void speak(){
        cout << "Pig::speak()"<<endl;
    }
    void run(){
        cout << "Pig::run()"<<endl;
    }
};

void walking(Animal *p){
    p->speak();
    p->run();
}

int main(){

    walking(new Dog());
    walking(new Cat());
    walking(new Pig());


    // getchar();
    return 0;
}

// void walking(Dog *p){
//     p->speak();
//     p->run();
// }

// void walking(Cat *p){
//     p->speak();
//     p->run();
// }