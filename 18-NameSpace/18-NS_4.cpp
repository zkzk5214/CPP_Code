#include <iostream>
// #include "Person.h"
using namespace std;

// There is a default global namespace, and any
//      namespaces we create are nested within it by default.
void func(){
    cout << "func()" << endl;
}

// Merging of namespaces
namespace CC{
    void func(){
        cout << "CC::func()"<<endl;
    }
} 
namespace CC{
    int m_word;
}
/*
Equal to
namespace CC{
    int m_word;
    void func(){cout << "CC::func()"<<endl;}
} 
*/  

int main(){
    using namespace CC;
    CC::func(); // ::CC::func();
    ::func(); // Global namespace

    // getchar();
    return 0;
} 