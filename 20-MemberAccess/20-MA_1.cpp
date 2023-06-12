#include <iostream>
using namespace std;
/*
    1-There are three ways to inherit a member.
        public: accessible from anywhere.(struct Default)
        protected: accessible from within subclass, within the current class.
        private: accessible only within the current class.(class Default)
    2-The internal access a subclass has to a member of its superclass is the least of two:
        2.1-Permission for the member variable itself
        2.2-Inheritence from the superclass  
    3-The most commonly used form of inheritance in development is public, which preserves
        access to the members of the superclass. 
    4-The access permission do not affect the memory layout of objects.
*/
 
struct Person{
public:
    int m_age;
    void setAge(int age){
        m_age = age;
    }
    int getAge(){
        return m_age;
    }

};

struct Student:private Person{ 
    // Inherit the Superclass in private. Generally inherit in public. 

    // Can allocate indirectly by member function.
    // Inheritence is taking over all the member variables from the superclass,
    // but with different access permissions and still occupied memory.
    void work(){
        setAge(10);
        getAge();
    }
};

struct GoodStudent:Student{
    void work(){
        // member "Person::m_age" is inaccessible
        // m_age = 10;
    }
};

int main(){
    GoodStudent gs;
    // member "Person::m_age" is inaccessible
    // gs.m_age = 10;

    // getchar();
    return 0;
}