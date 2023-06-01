#include <iostream>
using namespace std;

/*
    8-One of the values of reference: safer than pointer, and the function 
        return value can be assigned
*/ 

// 8.1-Passing values, no exchange between variable a and b
// void swap(int v1, int v2){
//     int tmp = v1;
//     v1 = v2;
//     v2 = tmp;
// }

// 8.2-Pointer
void swap(int *v1, int *v2){  
    // int *v1 = &a, int *v2 = &b
    // Pointer can access the storage space of the outer parameters 
    //      through *v1,*v2 to modify the value of these variables.
    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}

// 8.3-Reference
void swap(int &v1, int &v2){  
    // int &v1 = a, int &v2 = b
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}


int main(){

    // 8
    // Pointer can change the point at will, possibly point to inappropriate place,
    //      and assign unexpected value.
    // Be sure to specify the variable when defining the reference and that 
    //      the variable is of the same type
    int a=10 , b = 20;
    swap(&a,&b);    // Pointer
    swap(a,b);      // Reference
    cout << "a = " << a << ", b = " << b << endl;

    // Other variables can also be called by swap function.
    // New variables are created every time the function is called, i.e. v1 and v2
    // are new for each call, and the memory is new as well.
    int c = 2, d = 3;
    swap(c,d); 
    cout << "c = " << c << ", d = " << d << endl;
    
    // getchar();
    return 0;
}