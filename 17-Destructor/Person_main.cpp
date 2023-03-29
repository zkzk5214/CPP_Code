#include <iostream>
#include "Person.h"
using namespace std;

// Terminal: clang++ Person_main.cpp Person.cpp -o Person_main
// 一起编译

int main(){
    Person person;
    person.setAge(10);

    cout << person.getAge() << endl;
    // getchar();
    return 0;
}