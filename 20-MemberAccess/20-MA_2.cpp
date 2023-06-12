#include <iostream>
using namespace std;

// Use pointer can access private member variable.(unsafe!)
struct Person{
int m_age;
public:
    void setAge(int age){
        m_age = age;
    }
    int getAge(){
        return m_age;
    }

};

int main(){

    // The address of the variables may not correspond to the order in which
    // they are defined, it depends on the compiler.
    int a = 10,b = 11, c = 12;
    int *p_a = &a, *p_b = &b, *p_c = &c;
    // cout << p_a << ' ' << p_b << ' '<< p_c << ' ' << endl;

    Person person;
    person.setAge(10);
    cout << person.getAge() << endl;
    // Set pointer h point to the first 4 bytes of person，
    // the same as point to m_age in person.
    int* h = (int*) &person;
    *h = 20;
    cout << person.getAge() << endl;

    // getchar();
    return 0;
}