#include <iostream>
using namespace std;

struct Person{
    int m_age;
    int m_height;
    
    // 构造函数，是一种特殊的方法。 
    // 主要用来在创建对象时初始化对象， 即为对象成员变量赋初始值，
    // 总与new运算符一起使用在创建对象的语句中
    Person(){  // euqual to 9-10
        m_age = 0;
        m_height = 0;
        // Person(0,0); // (X) 初始化的是一个临时的 Person对象,并没有赋值给 this->m_age,m_height(即外面的对象): Person person; person.m_age=0; person.m_height=0; 
        
    }

    Person(int age,int height){
        m_age = age;
        m_height = height;
    }

    void run(){
        this -> m_age = 1;
    }
};

int main(){

    Person person;
    person.run();
    cout << person.m_age << endl;
    cout << person.m_height << endl;
    // getchar();
    return 0;
}