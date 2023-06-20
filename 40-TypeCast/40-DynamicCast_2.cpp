#include <iostream>
using namespace std;
/*
https://www.geeksforgeeks.org/casting-operators-in-cpp/
2.2 Dynamic_cast
    2.2.1-The dynamic_cast operator is mainly used to 
        perform downcasting (converting a pointer/reference 
        of a base class to a derived class). 
    2.2.2-It ensures type safety by performing a runtime 
        check to verify the validity of the conversion.
    2.2.3-If the conversion is not possible, dynamic_cast 
        returns a null pointer (for pointer conversions) 
        or throws a bad_cast exception (for reference 
        conversions).
    Syntax of dynamic_cast
        dynamic_cast <new_type> (expression);
*/

// Base Class
class Animal {
public:
	virtual void speak() const
	{
		cout << "Animal speaks." << endl;
	}
};

// Derived Class
class Dog : public Animal {
public:
	void speak() const override
    /* override
    It will make the compiler check the base class 
    to see if there is a virtual function with this 
    exact signature. And if there is not, the compiler
    will show an error. 
    */ 
	{
		cout << "Dog barks." << endl;
	}
};

// Derived Class
class Cat : public Animal {
public:
	void speak() const override
	{
		cout << "Cat meows." << endl;
	}
};

int main()
{
	// base class pointer to derived class object
	Animal* animalPtr = new Dog();

	// downcasting
	Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);
    // animalPtr->speak();

	// checking if the typecasting is successfull
	if (dogPtr) {
		dogPtr->speak();
	}
	else {
		cout << "Failed to cast to Dog." << endl;
	}

	// typecasting to other dervied class
	Cat* catPtr = dynamic_cast<Cat*>(animalPtr);

	if (catPtr) {
		catPtr->speak();
	}
	else {
		cout << "Failed to cast to Cat." << endl;
	}

	delete animalPtr;
	return 0;
}
/*
Explanation: 
    The first line of output is printed because the ‘animalPtr’ 
    of the ‘Animal’ type is successfully cast to the ‘Dog’ type 
    and speak() function of the Dog class is invoked but the 
    casting of the ‘Animal’ type to ‘Cat’ type is failed because 
    ‘animalPtr’ points to a ‘Dog’ object thus, the dynamic cast 
    fails because the typecasting is not safe.
*/