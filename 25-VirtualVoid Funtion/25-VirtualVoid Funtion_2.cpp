#include <iostream>
using namespace std;

struct Animal{
    int m_age;  // 2-2
    virtual void speak() = 0;
    virtual void run() = 0;
};

struct Dog:Animal{ // 2-3抽象类
    void run(){
        std::cout << "Dog::run()" << '\n';
    }
};

struct Hashiqi:Dog{
    void speak(){
        std::cout << "Hashiqi::speak()" << '\n';
    }
};

int main(int argc, char const *argv[]) {

    Hashiqi h; // 不是抽象类

    // getchar();
    return 0;
}
