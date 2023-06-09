#include "Person.h"

// Function Definition(.cpp)
Person::Person(){
    m_age = 0;
}

// :: setAge belongs to the class Person
void Person::setAge(int age){
    this->m_age = age;
}

int Person::getAge(){
    return m_age;
}

Person::~Person(){
}