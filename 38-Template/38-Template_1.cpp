#include <iostream>
using namespace std;

/*
1-泛型，是一种将类型参数化以达到代码复用的技术，C++中使用模板来实现泛型
2-模板的使用格式如下
    tmplate<typename\class T>
    typename和class是等价的
3-模板没有被使用时,是不会被实例化出来的
*/

class Point{
    friend ostream &operator<<(ostream &, const Point &);
    int m_x;
    int m_y;
public:
    Point(int x,int y): m_x(x),m_y(y){}
    Point operator+(const Point &point){
        return Point(m_x + point.m_x, m_y + point.m_y);
    }
};

ostream &operator<<(ostream &cout, const Point &point){
    return cout << "(" << point.m_x << "," << point.m_y << ")";
}

// int add(int a, int b){
//     return a+b;
// }

// double add(double a, double b){
//     return a+b;
// }

// Point add(Point a,Point b){
//     return a+b;
// }

template <typename T> 
T add(T a, T b){
    return a+b;
}

// 不同参数类型
// template <typename T, typename A, typename B> B add(T a, A b){
//     // 参数a类型T, 参数b类型A, 返回值类型B
//     return a+b;
// }

int main(){

    // cout << add(10,20) << endl;
    // cout << add(1.5,21.6) << endl;
    // cout << add(Point(10,20),Point(20,30)) << endl;

    // 将类型当作参数传入
    // 编译器会根据你传入参数的不同来生成不同的函数
    cout << add<int>(10,20) << endl;
    cout << add<float>(1.5,21.6) << endl;
    cout << add<Point>(Point(10,20),Point(20,30)) << endl;

    cout << add(10,20) << endl;
    cout << add(1.5,21.6) << endl;
    cout << add(Point(10,20),Point(20,30)) << endl;


    // getchar();
    return 0;
}