/*
 * hello.cpp
 * This program prints a welcome message
 * to the user.
*/

// <> first go to the system directory to find the Header File, if not, then go to the current directory to find it.
# include <iostream>
// In the real development, try to aviod using the instruction like 'using namespace std:' that directly introduce
// the entire namespace, otherwise it will cause unnecessary problems due to namespace pollution. For example, if u 
// write a function with the same name as the one in 'std', the compiler will not know which function to use, which
// will cause a compilation error. It is recommended to use: 'std::count <<"Hello, world" << std::endl;'
using namespace std;

int main(){
    cout << "Hello, world!!!" << endl; // Terminal output newline

    // endl: End-of-line
    // 1)
    cout << "Hello, world" << "\n"; // "\n" can replace endl
    // 2) 
    cout << "Hello" << endl;
    cout << "World" ;
    // 3)
    cout << "Hello" << endl << "World" ;
    
    // Wait for keyboard input(if u press Enter, it reads keyboard entry, 
    // it's not available in vscode, try it in Terminal)
    // getchar(); 
    return 0;
}

// Fold Expand in vscode command+option+[ or ]