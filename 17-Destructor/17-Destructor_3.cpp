#include <iostream>
using namespace std;

// class Person{
// private:
//     int m_age;
// public:
//     void setAge(int age){
//         m_age = age;
//     }

//     int getAge(){
//         return m_age;
//     }

//     Person(){
//         m_age = 0;
//     }
//     ~Person(){

//     }
// };

//  声明和实现分离
// .h(声明)
class Person_d{
private:
    int m_age;
public:
    void setAge(int age);
    int getAge();
    Person_d();
    ~Person_d();
};
// .cpp(实现)
// :: setAge函数属于person_d这个类, 紧挨着函数名
void Person_d::setAge(int age){
    m_age = age;
}
int Person_d::getAge(){
    return m_age;
}
Person_d::Person_d(){
    m_age = 0;
}
Person_d::~Person_d(){

}

int main(){

    // getchar();
    return 0;
}