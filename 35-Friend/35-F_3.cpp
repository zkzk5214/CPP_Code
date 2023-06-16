#include <iostream>
using namespace std;
/*
Usage of Anonymous Objects in Operator Overloading
When we have created two anonymous objects. These 
    objects don’t contribute much their only function 
    is to perform the operation and transfer the result 
    into a normal object. If we want to refer to the 
    objects after the implementation of the statement, 
    then in such cases we can create the normal object 
    but, when we are not referring to the object anymore 
    in that case it is better to use anonymous objects.
*/
class Complex {
	int real, img;

public:
	// Default constructor
	Complex() {}

	// Parameterised Constructor
	Complex(int r, int i)
	{
		real = r;
		img = i;
	}

	// getter
	int getReal() { return real; }

	// getter
	int getImg() { return img; }

	// Operator overloading function
	Complex operator+(Complex c)
	{
		Complex temp;
		temp.real = this->real + c.real;
		temp.img = this->img + c.img;
		return temp;
	}
};

// Driver Function
int main()
{
	Complex c3;
	c3 = Complex({ 2, 3 }) + Complex({ 5, 6 });

	cout << c3.getReal() << "+" << c3.getImg() << "i"
		<< endl;

	return 0;
}
