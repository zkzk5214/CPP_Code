# include <iostream>
using namespace std;

/*
    2-If the function has both the prototype and the definition, 
        the prototype need to be modified by "extern C",  the 
        definition does not need to.
*/ 

// Prototype
extern "C" void func();

int main(){

    func();

    // getchar();
    return 0;

}

// Definition
void func(){
    cout << "func()" << endl;
}
