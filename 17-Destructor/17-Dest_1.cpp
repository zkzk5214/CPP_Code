#include <iostream>
using namespace std;
/*
Destructor 
    Automatically Invocation when an object is destoryed and 
        typcially used to clean up an object.
    Property:
        1-Destructor starts with ~, same name as class, no return value
            (no written void), cannot be overloaded, and there is one 
            and only one desturctor.
    Attention:
        2-If an object is allocated via "malloc", its destructor is 
            not called when "free". 
        3-Constructor and destructor need to be declared by "pulic"
            so that they can be access by the outside.

*/

class Person{
    int m_age;
public:
    Person(){
        cout << "Person::Person()"<<endl;
    }
    ~Person(){
        cout << "~Person()"<<endl;
    }
};

void test(){
    Person person;
}

int main(){
    cout << "Construct" << endl;
    
    // Scope 1 
    // Construct - Person::Person() - Destory - ~Person()
    // Person person;
    
    // Scope 2
    // Construct - Person::Person() - Destory - ~Person()
    // {Person person;}

    // Scope 3
    // Construct - Person::Person() - Destory - ~Person()
    // test();

    cout << "Destory" << endl;

    // getchar();
    return 0;
}