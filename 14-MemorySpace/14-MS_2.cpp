#include <iostream>
using namespace std;
/*
    Heap:
        1-In order to have the freedom to control the life cycle and 
    size of memory durning the entire running process of the program, 
    the heap is often used
        2-Heap Allocate/Deallocate
            malloc / free
            new / delete
            new [] / delete []
    Attention:
        3-After the Heap is successfully allocated, the address 
    of that memory space is returned.
        4-Allocate and Deallocate must be a one-to-one relationship, 
    otherwise there may be cause memory leaks.
*/

void test1(){
/*
    1.Request 4 bytes of Heap for the OS(Operation System)(cast: int *)
    2.Heap: suppose address is 0x999, 4 bytes, 10
    3.Stack: suppose adress is 0x111, 4 bytes, p=0x999
    4.Pointer p in Stack point to this 4 bytes(X86 4 bytes, X64 8 bytes) in Heap
    5.After function call, Stack is Deallocated, pointer variable disappears, 
        but Heap remains.
*/
    char *p = (char *) malloc(4);
    // Assign 10 to the first address of *p, 1 byte(char *)
    *p = 10;        // p[0] = 10;
    *(p+1) = 11;    // p[1] = 11;
    *(p+2) = 12;    // p[2] = 12;
    *(p+3) = 13;    // p[3] = 13;
    // Deallocate Heap. melloc and free one-to-one
    free(p);
}

void test2(){
    int *p = new int;   // new request 4 bytes of Heap 
    *p = 10;            // one byte
    delete p;           // new and delete one-to-one
}

void test3(){
    // char arry
    char *p = new char[4]; // char *p = (char *) malloc(4);
    delete[] p;         // All four consecutive bytes are Deallocated
}

int main(){
    test1();
    test2();
    test3();
    // getchar();
    return 0;
}