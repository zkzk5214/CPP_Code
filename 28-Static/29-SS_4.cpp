#include <iostream>
using namespace std;
/*
    1-A singleton class is a special type of class in object-oriented programming 
        which can have only one object or instance at a time. In other words, 
        we can instantiate only one instance of the singleton class. The new 
        variable also points to the initial instance created if we attempt to 
        instantiate the Singleton class after the first time. This is implemented 
        by using the core concepts of object-oriented programming namely access 
        modifiers, constructors & static methods.  
    2-Steps to Implement Singleton Class in C++:
        2.1-Make all the constructors of the class private.
        2.2-Delete the copy constructor of the class.
        2.3-Make a private static pointer that can point to the same class object 
            (singleton class).
        2.4-Make a public static method that returns the pointer to the same class 
            object (singleton class).
*/

class Rocket{
private:
    // Constructor privatization
    Rocket(){}; 
    /* 
    Destructor privatization, preventing the pointer 
        from being deleted from main.
    */     
    ~Rocket(){}; 
    static Rocket *ms_rocket; // Every access to ms_rocket is the same variable
    /* 
    static Rocket ms_rocket; 
    (Not recommended) The object should have as mush heap space as possible 
        and the memory should be used flexibly.
    */
    // The assignment operator is privatized so that it cannot be assigned.
    void operator=(const Rocket &rocket){} 
    // Copy constructor are privatized so that they cannot be copied.
    Rocket(const Rocket &rocket){} 
public:
    static Rocket *sharedRocket(){
        // Multi-thread safety should be considered here.
        // Multi-thread access at the same time can cause object waste.
        if(ms_rocket == NULL){
            // The first call is empty, and "new" is used to 
            // create the heap space object.
            ms_rocket = new Rocket();
        }
        // The second call directly returns the address of the last object.
        return ms_rocket;
    }
    static void deleteRocket(){ // Reclaimed heap space
        // Multi-thread safety should be considered here.
        if (ms_rocket != NULL){
            // Reclaimed pointer heap space, the pointer is not cleared, 
            // and there is a value.
            delete ms_rocket; 
            // Clean the pointer, otherwise, Wild Pointers exist.
            ms_rocket = NULL; 
        }
    }
    void run(){
        cout << "run()" << endl;
    }
};

// Initialization Static Member Variable.
Rocket *Rocket::ms_rocket = NULL;

int main(){
    Rocket *p1 = Rocket::sharedRocket();
    Rocket *p2 = Rocket::sharedRocket();
    Rocket *p3 = p1 -> sharedRocket(); 
    // The address of the object
    cout << p1 << endl; 
    cout << p2 << endl;
    cout << p3 << endl;

    Rocket::deleteRocket();

    // getchar();
    return 0;
}