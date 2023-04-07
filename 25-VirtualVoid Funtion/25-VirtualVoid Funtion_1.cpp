#include <iostream>
using namespace std;

// 1-纯虚函数：没有函数体且初始化为0的虚函数，用来定义接口规范
// 2-抽象类(Abstract Class)
// 2-1含有纯虚函数的类，不可以实例化(不可以创建对象)
// 2-2抽象类也可以包含非纯虚函数、成员变量
// 2-3如果父类是抽象类，子类没有完全重写纯虚函数，那么这个子类依然是抽象类
struct Animal{
    int m_age;  // 2-2
    virtual void speak() = 0;
    virtual void run(){ // 2-2
    }
};

struct Cat:Animal{
    void speak(){
        std::cout << "Cat::speak()" << '\n';
    }
    void run(){
        std::cout << "Cat::run()" << '\n';
    }
};

struct Animal1{ // 2-3抽象类
    virtual void speak() = 0;
    virtual void run() = 0;
};

struct Dog:Animal1{ // 2-3抽象类
    void run(){
        std::cout << "Dog::run()" << '\n';
    }
};

struct Hashiqi:Dog{
    void speak(){
        std::cout << "Hashiqi::speak()" << '\n';
    }
    void run(){
        std::cout << "Hashiqi::run()" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    Animal *anim = new Cat();

    // Animal1 anim; // 2-1 不能创建对象
    // Dog dog; // 2-3 不能创建对象

    // getchar();
    return 0;
}
