#include <iostream>
using namespace std;

// 3-The value of the Default Argument can be a constant,
//      a globel symbol(global variable, function)

// a local variable is defined inside a function and is not accessible outside the function.
// a global variable is defined outside all functions and is accessible to all functions in its scope.
int age = 20;
int sum(int v1=5, int v2=age);

void test(){
    cout << "test()" << endl;
}

void test(int a){
    cout << "test(int) - " << a << endl;
}

void func(int v1, void(*p)(int)=test){
    p(v1); // test(v1)
}

int main(){

    test();

    // Function Pointer in C++
    // The function pointer is used to point functions, similarly, the pointers are used to point variables. 
    // It is utilized to save a function’s address. 
    // The function pointer is either used to call the function or it can be sent as an argument to another function.
    // return_type (*FuncPtr) (parameter type, ...);

    // void(*p)() is the function pointer, indicating a pointer variable point to the function,
    //      and the return type is void type
    // 1) void(*p)(); 2) p = test;
    // have no parameter as input and call function test()
    void(*p1)() = test; 

    // have one int type parameter as input and call function test(int)
    void(*p2)(int) = test;


    // The value of the Default Argument are constant and function
    // void test(int)
    func(20,test);
    func(30);

    // getchar();
    return 0;
}

/*
Extra:
1:void *p()
    void *p()是一个指针型函数，它的函数名为p,范围了一个指针，因为是void,这个指针没有定义类型，所以返回的是一个通用型指针。
    void *p() is a function pointer, name is p, beacuse of void type, it return a general-purpose pointer
    which means this pointer refer to the pointer that have no data type associated with it.
2:void pointers(void *ptr)
    The void pointers refer to the pointers that have no data type associated with them. 
    void pointer indicates that the pointer is basically empty- and thus, 
    it is capable of holding any data type address in the program. 
    Then, these void pointers that have addresses, can be further typecast into other data types very easily.
3:Why use a Void Pointer in C?
    the address that is assigned to any pointer must have the same data type as we have specified 
    in the declaration of the pointer. For instance, when we are declaring the float pointer, 
    this float pointer won’t be able to point to an int variable or any other variable. 
    In simpler words, it will only be able to point to the float type variable. 
    We thus use a pointer to void to overcome this very problem.
    The pointer to void can be used in generic functions in C b
    ecause it is capable of pointing to any data type. 
    One can assign the void pointer with any data type’s address, 
    and then assign the void pointer to any pointer without even performing some sort of explicit typecasting. 
    So, it reduces complications in a code.
*/