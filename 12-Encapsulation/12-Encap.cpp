#include <iostream>
using namespace std;

// 成员变量私有化,提供公共的getter和setter给外界去访问成员变量

struct Person{
private:
    int m_age;
public:
    void setAge(int age){
        if (age<=0) {
            m_age = 1;
        }   
        else{
            m_age = age;
        }
    }

    int getAge(){
        return m_age;
    }
};

int main(){

    Person person;
    person.setAge(-4);
    cout << person.getAge()<<endl;

    // getchar();
    return 0;
}