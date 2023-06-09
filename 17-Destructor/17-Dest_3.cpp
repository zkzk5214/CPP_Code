#include <iostream>
using namespace std;

struct Car{
    int m_price;
    Car(){
        m_price = 0;
        cout << "Car::Car()"<<endl;
    }
    ~Car(){
        cout << "Car::~Car()"<<endl;
    }
};

struct Person{
private:
    // The pointer to Car is passively released. 
    // If not pointer, placed in stack.
    int m_age;
    Car *m_car; 
public:
    Person(){
        m_age = 0;
        // Object create my "new" is placed on the heap and 
        // need to be released manually.
        m_car = new Car(); 
        cout << "Person::Person()"<<endl;
    }
    ~Person(){
        // Heap allocated internally by the object need to 
        // release internally by the object
        delete m_car; // Actively release object memory for heap
        cout << "Person::~Person()"<<endl;
    }
};


int main(){
    // Object Memory can store in three different place
    // Data Segment: Global Variable
    // Stack: Local Variable inside the function
    // Heap: dynamic request memory(malloc,new, etc.)
    
    // p in the Stack, Person and Car in the Heap.
    Person *p = new Person();
    /*
        Stack                    Heap
    |- - - - - |    | - - - - - - - - - - - - - - - |
    | Pointer p|    | |- - - - - |  |- - - - - -|   |
    |          |    | |  Person  |  |    Car    |   |   
    |          |    | | (m_age)  |  | (m_price) |   | 
    |- - - - - |    | | (m_car)  |  |- - - - - -|   |
                    | |- - - - - |                  |
                    |- - - - - - - - - - - - - - - -|
    Pointer p point to Person, m_car point to m_price
    Pointer variable need not be in Stack  
    */

    // getchar();
    return 0;
}

