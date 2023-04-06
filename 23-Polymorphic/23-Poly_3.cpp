#include <iostream>
using namespace std;

// 虚函数的实现原理是虚表, 这个虚表里面存储着最终需要调用的虚函数地址,这个虚表也叫虚函数表
struct Animal{
    int m_age;
    
    void speak(){ // 2-虚函数 
        cout << "Animal::speak()"<<endl;
    }
    void run(){
        cout << "Animal::run()"<<endl;
    }
};

struct AnimalPlus{
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
    virtual void speak(){
        cout << "Cat::speak()"<<endl;
    }
    virtual void run(){
        cout << "Cat::run()"<<endl;
    }
};

struct CatPlus:AnimalPlus{
    int m_life;
    void speak(){
        AnimalPlus::speak();
        cout << "Cat::speak()"<<endl;
    }
    void run(){
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
    // Animal类里面不是虚函数
    Animal *wcat = new WhiteCat();
    wcat -> speak();
    wcat -> run();
    // 从Cat开始往后的函数才是虚函数,只有用到Cat和WhiteCat类才会生成虚表
    Cat *cat1 = new WhiteCat();
    cat1 -> speak();
    cat1 -> run();

    CatPlus *catplus = new CatPlus();
    catplus -> speak();
    catplus -> run();

    // getchar();
    return 0;
}
