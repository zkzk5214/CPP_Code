 #include <iostream>
using namespace std;
/*
Unary operator overload
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
    const Point operator-() const {
        // first const: not allowed -p1 = Point(10,20);
        // last const: allowed -(-p1); 
        // Returns a temporary Point object 
        return Point(-m_x, -m_y); 
    }
    Point &operator++(){ // prefix++
        m_x++;
        m_y++;
        return *this;
    }
    const Point operator++(int){ // postfix++
        Point old(m_x,m_y); // temporary object  
        m_x++;
        m_y++;
        return old;
    }
};

int main() {
    /*
    int a = 10;
    1) ++a can be assigned a value
        int b = ++a + 5; // a+=1; int b = a+5; 
    2) a++ cannot be assigned a value
        int c = a++ + 5; // int c = 10(a)+5; a+=1; 
    */

    Point p1(10,20);
    Point p2(20,30);
    Point p3 = -(-p1);
    p3.display();

    Point p4 = p1++ + Point(30,40);
    p4.display();
    p1.display();

    ++p1 = Point(1,2);
    p1.display();

    // p1 ++ = Point(1,2); 2)

	// getchar(); 
	return 0;
}
