#include <iostream>
using namespace std;
/*
2-Templates are used in following format:
    template<typename\class T>
        typename and class are equivalent
3-A template is not instantiated, when it is not being used
*/

class Point{
    int m_x;
    int m_y;
    friend ostream &operator<<(ostream &, const Point &);
public:
    Point(int x,int y): m_x(x),m_y(y){}
    Point operator+(const Point &point){
        return Point(m_x + point.m_x, m_y + point.m_y);
    }
};

ostream &operator<<(ostream &cout, const Point &point){
    return cout << "(" << point.m_x << "," << point.m_y << ")";
}

/*
int add(int a, int b){return a+b;}
double add(double a, double b){return a+b;}
Point add(Point a,Point b){return a+b;}
*/
template <typename T> 
T add(T a, T b){
    return a+b;
}

/* 
Multi-argument template, different types
template <typename T1, typename T2, typename B> 
B add(T1 a, T2 b){
// argument a is of type T1, argument b is of type T2, 
//      and return is of type B
    return a+b;
}
*/
template<typename T1, typename T2>
void display(const T1 &v1, const T2 &v2){
    cout << v1 << ", " << v2 << endl;
}
int main(){
    // By passing a typename as an argument, the compiler 
    // will generate different functions depending on the 
    // argument you pass.
    cout << add<int>(10,20) << endl;
    cout << add<float>(1.5,21.6) << endl;
    cout << add<Point>(Point(10,20),Point(20,30)) << endl;

    display<int,float>(20, 1.7);
    display<Point, Point>(Point(10,20), Point(20,30));

    // getchar();
    return 0;
}