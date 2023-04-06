#include <iostream>
using namespace std;

// 1-存在父类指针指向子类对象的时候 ,应该将析构函数声明为虚函数(虚析构函数)
// delete父类指针时,才会调用子类的析构函数,保证析构的完整性
// 父类析构函数为虚函数,子类析构函数也会变成虚函数
struct Animal{
    int m_age;
    void speak(){ // 2-虚函数 
        cout << "Animal::speak()"<<endl;
    }
    void run(){
        cout << "Animal::run()"<<endl;
    }
    Animal(){
        cout << "Animal::Animal()" << endl;
    }
    // 1
    virtual ~Animal(){ 
        cout << "Animal::~Animal()" << endl;
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
    Cat(){
        cout << "Cat::Cat()" << endl;
    }
    ~Cat(){
        cout << "Cat::~Cat()" << endl;
    }
};


int main(){
    
    Animal *cat = new Cat(); // 加了虚析构函数之后 看右边的类型决定最后 delete 的对象
    cat -> speak();
    cat -> run();
    delete cat;
    // getchar();
    return 0;
}
