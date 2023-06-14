#include <iostream>
using namespace std;

/*
Constructor, primarily used to initialize objects when it is created, 
that is, to set default value to object member variable.
Always used with the "new" operator in object creation.
*/
struct Person{
    int m_age;
    int m_height;   
    Person():Person(0,0){}
    /*
    Person(){Person(0,0);} (X) 
    A temporary Person object is initialized and not assigned any value to 
        object outside("this->m_age, this->m_height")
    */ 
    Person(int age,int height){
        m_age = age;
        m_height = height;}

    void run(){
        this -> m_age = 1;}
};

int main(){
    Person person;
    person.run();
    cout << person.m_age << endl;
    cout << person.m_height << endl;

    // getchar();
    return 0;
}