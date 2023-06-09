#include <iostream>
using namespace std;
// Invocation of constructor       

struct Person{
    int m_age;
    Person(){
        cout << "Person::Person()" << endl;
    }
    void run(){
        cout << "Person::run() - " << m_age << endl;
    }
};

int main(){
    // Malloc only request heap
    Person *p1 = (Person *) malloc(sizeof(Person));
    p1 -> m_age = 10;
    p1 -> run();
    free(p1); 

    Person *p2 = new Person;
    delete p2;

    // getchar();
    return 0;
}
