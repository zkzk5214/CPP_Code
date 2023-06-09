#include <iostream>
using namespace std;

struct Car{
    int m_price;
};

struct Person{
private:
    // The pointer to Car is passively released. 
    // If not pointer, placed in stack.
    int m_age;
    Car m_car; 
};


int main(){
    // Memory leak: the memory need to release but is not

    // Object Memory can store in three different place
    // Data Segment: Global Variable
    // Stack: Local Variable inside the function
    // Heap: dynamic request memory(malloc,new, etc.)
    
    // Person store and Car both store in the Stack.
    // Automacially allocate and release internal member variables.
    Person p0;

    // p in the Stack, Person and Car in the Heap.
    Person *p = new Person();
    /*
          Stack                 Heap
    |- - - - - - - -|     |- - - - - - -|
    |  Person p     |     |     Car     | 
    |  (m_age)      |     |  (m_price)  |   
    |  (m_car)      |     |- - - - - - -|
    |- - - - - - - -|
    m_car point to m_price
    Stack is release passively, but heap is still alive, which cause a memory leak
    */ 

    // getchar();
    return 0;
}



// 用delete先主动回收堆空间,再被动回收栈空间

// Case 2
//     栈空间                  堆空间
// |- - - - - |    | - - - - - - - - - - - - - - - |
// | 指针变量p |    | |- - - - - |  |- - - - - -|   |
// |          |    | | Person对象|  |  Car 对象 |   |   
// |          |    | | (m_age)  |  | (m_price) |   | 
// |- - - - - |    | | (m_car)  |  |- - - - - -|   |
//                 | |- - - - - |                  |
//                 |- - - - - - - - - - - - - - - -|
// 指针变量p指向person对象, m_car 指向 m_price
// 指针变量不一定在栈空间