#include <iostream>
using namespace std;

int main(){
    int *p = new int;
    *p = 10;
    // Reclaiming heap space(4 bytes), 
    // Reclaiming heap space memory: This heap space memory 
    // can be used again by others, and net int will not be cleared.
    delete p; 
    // p = NULL; // delete p will not do this

    int *p2 = new int;
    cout << *p2 << endl;

    // getchar();
    return 0;
}