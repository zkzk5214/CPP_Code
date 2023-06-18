#include <iostream>
using namespace std;
/*
1-A class defined inside a function, called a global class
2-Properties of global class
	2.1-Scope is limited to the function within which it is located.
	2.2-All of its member must be defined inside the class, 
		static member variables are not allowed
	2.3-Member function cannot directly access global variable 
		of a function(except static variable)
*/

int m_age1 = 0;

void test(){
	static int s_age2 = 0;
	int age3 = 0;

	class Point{
		int m_x;
		int m_y;
	public:
		static void display(){
			m_age1 = 10;
			s_age2 = 20;	// 2.3
			// age3 = 30;  	(X) 2.3
		}
	};

	Point::display();
}

int main() {
	// getchar();
	return 0;
}
