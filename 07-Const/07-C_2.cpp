#include <iostream>
using namespace std;

// Struct
struct Student {
    int age;
};


int main(){
   
    Student stu1 = {10};
    Student stu2 = {20};

    const Student *pStu1 = &stu1;
    /*
    This const key word ensures that the value of the member variable
        cannot be changed, but the address pointed to by the pointer 
        can be changed.
    */ 
    // *pStu1 = stu2;
    // (*pStu1).age = 30;
    // pStu1 -> age = 30;
    pStu1 = &stu2;

    /*
    This const key word ensures that the value of the member variable
        can be changed, but the address pointed to by the pointer 
        can not be changed .
    */ 
    Student * const pStu2 = &stu2;
    *pStu2 = stu1;
    (*pStu2).age = 30;
    pStu2->age = 30;
    // pStu2 = &stu1;

    // getchar();
    return 0;
}