#include <iostream>
using namespace std;

// Privatize member variable, providing public function getter and setter 
// for the outside to access the private member variable.

struct Person{
private:
    int m_age;
public:
    void setAge(int age){
        if (age<=0) {
            this->m_age = 1;
        }   
        else{
            this->m_age = age;
        }
    }

    int getAge(){
        return this->m_age;
    }
};

int main(){
    Person person;
    person.setAge(-4);
    cout << person.getAge()<<endl;
    person.setAge(20);
    cout << person.getAge()<<endl;
    // getchar();
    return 0;
}