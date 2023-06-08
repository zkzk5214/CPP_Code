#include <iostream>
using namespace std;
/*
A typical memory representation of a C program consists of the 
    following sections.

    1-Text Segment(Code Segment)
        Contains executable instructions. Usually, Text segment is 
    sharable and hence only a single copy exists as well as its 
    read-only.

    2-Data Segment
        Exist durning the entire run of the program.
        Divided into two parts
    2.1-Initialized Data Segment
        Contains Global and static variables that are initialized. 
    Its not a read-only segment and hence the values can be modified.
    2.2-Uninitialized Data Segment
        This is usually called BSS(Block Started by Symbol) segment.
        Data in this segment are initialized by the kernel to 0 before 
    the program starts execution. This comes after the initialized Data 
    segment in memory.
        For instance, a variable declared static int i; would be contained 
    in the BSS segment. 

    4-Heap
        Here dynamic memory allocation takes place.
        Need to take the initiative to allocate and release. 
        In order to have the freedom to control the life cycle and size 
    of memory durning the entire running process of the program, the 
    heap is often used

    5-Stack(LIFO)
        Temporary variables are stored in this area. The virtual pointer 
    is also stored here.
        Stack Frame: A set of values pushed for one function call is 
    called Stack Frame.
        Automatically allocate and release.
        Each time a function is called, it is allocated a contiguous chunk
    of stack space, and released automatically when the function is 
    deconstruction.
*/

int main(){
    // getchar();
    return 0;
}