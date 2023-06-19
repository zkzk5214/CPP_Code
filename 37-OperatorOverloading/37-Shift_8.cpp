#include <iostream>
using namespace std;
/*
The left shift and right shift operator.
Overload member functions are preferred, and overload global 
    function are preferred if they cannot meet the requirements.
*/
class Point {
    int m_x;
	int m_y;
    friend ostream &operator<<(ostream &, const Point &);
    friend istream &operator>>(istream &cin, Point &point);
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
    Point(const Point &point): m_x(point.m_x), m_y(point.m_y){}
	void display() {
		cout << "x = " << this->m_x << ", y = " << this->m_y << endl;
	}
};

// output stream -> ostream
ostream &operator<<(ostream &cout, const Point &point){
// The left side of systems-supplied << cannot be a const,
//      so global function do not take const as the first argument.
    cout << "x = " << point.m_x << ", y = " << point.m_y << endl;
    return cout;
}

// input stream -> istream
istream &operator>>(istream &cin, Point &point) {
// change the passed arguments by keyboard input so Point cannot 
//      be const.
	cin >> point.m_x;
	cin >> point.m_y;
	return cin;
}

int main() {
    Point p1(10,20);
    Point p2(20,30);

    // cout << p1 return cout after printing 
    cout << p1 << p2 << endl; 
    
    // cin >> p1 >> p2;

    p1.display();
    p2.display();

	// getchar(); 
	return 0;
}