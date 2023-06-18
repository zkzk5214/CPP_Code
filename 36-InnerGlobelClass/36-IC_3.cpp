#include <iostream>
using namespace std;
/*
Inner Class
	2.5-Function prototype can be inside the outter class, and function 
		definition can be outside the outter class.
*/

// 2.5
class Point{
    class Math;
};

class Point::Math{
    void test(){}
};


int main() {
	// getchar();
	return 0;
}
