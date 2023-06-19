 #include <iostream>
using namespace std;
/*
1-Operator overload: Can add some new functionality to operators
2-Both global function and member function support operator overloading
*/

class Point {
	int m_x;
	int m_y;
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
    Point(const Point &point): m_x(point.m_x), m_y(point.m_y){}
    void display() {
		cout << "x = " << this->m_x << ", y = " << this->m_y << endl;
	}
    const Point operator+(const Point &point) const {
        return Point(m_x+point.m_x, m_y+point.m_y);
    }
    const Point operator-(const Point &point) const { 
        return Point(m_x-point.m_x, m_y-point.m_y);
    }

    Point &operator+=(const Point &point) { 
        /*
        Point &(reference), return *this(object)
        Point *, return this(address)
        & reference, reduced the generation of intermediate object.
        Member variable need to be modified, so there is no "const" 
            after operator+=
        */
        m_x += point.m_x;
        m_y += point.m_y;
        // Get what this pointer points to, which is the current
        // object, so return the object.
        return *this; 
    }

    bool operator==(const Point &point) const {
        // if ((m_x == point.m_x) && (m_y) == point.m_y){
        //     return 1;
        // } else {
        //     return 0;
        // } 
        return ((m_x == point.m_x) && (m_y) == point.m_y); 
    }

    bool operator!=(const Point &point) const {
        return ((m_x != point.m_x) || (m_y) != point.m_y);
    }
};

int main() {
    Point p1(10,20);
    Point p2(20,30);

    // pass the address of p1 to "this", "this" points to the p1
    // p1.operator+=(p2); 
    p1+=p2;
    p1.display();

    (p1+=p2) = Point(50,60);
    p1.display();

    // cout << (p1==p2) << endl;
    // cout << (p1!=p2) << endl;

	// getchar();
	return 0;
}
