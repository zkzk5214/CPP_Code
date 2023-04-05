#include <iostream>
using namespace std;

// 虚函数的实现原理是虚表, 这个虚表里面存储着最终需要调用的虚函数地址,这个虚表也叫虚函数表
struct Animal{
    int m_age;
    
    virtual void speak(){ // 2-虚函数 
        cout << "Animal::speak()"<<endl;
    }
    virtual void run(){
        cout << "Animal::run()"<<endl;
    }
};

struct Cat:Animal{
    int m_life;
    void speak(){
        cout << "Cat::speak()"<<endl;
    }
    void run(){
        cout << "Cat::run()"<<endl;
    }
};

int main(){

    // cout << sizeof(Cat) << endl; // 16(8+ virtual8) x64

    Animal *cat = new Cat(); // () 默认初始化为0 (m_life=0)
    cat -> m_age = 20;
    cat -> speak();
    cat -> run();


    // getchar();
    return 0;
}
