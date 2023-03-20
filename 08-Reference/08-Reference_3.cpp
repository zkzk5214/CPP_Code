#include <iostream>
using namespace std;

struct Date{
    int year;
    int month;
    int day;
};

// 10- 引用相当于是变量的别名(基本数据类型、枚举、结构体、类、指针、数组等,都可以有引用)
// 11-不存在引用的引用、指向引用的指针、引用数组

int main(){
    // 10-结构体的引用
    Date d = {2011, 1, 5};
    Date &ref = d;
    ref.year = 2014;

    cout << d.year << endl;

    // 10-指针的引用
    // int age = 10;
    // int *p = &age;
    // int *&ref = p; // 指针的引用 ref引用了指针变量p
    // *ref = 30; // *p = 30
    // int height = 30;
    // ref = &height; // 指针变量修改了指向

    // 10-数组的引用
    // int array[] = {1,2,3};
    // int (&ref)[3] = array;
    // array[0] = 10;
    // int *p;
    // int *arr[3] = {p,p,p}; // 指针数组,数组里面可以存放3个 int*
    // int(*arr2)[3]; // 用于指向数组的指针

    // 11-不存在引用的引用
    // int age = 10;
    // int &ref = age;
    // int &&ref2 = age;

    // 11-不存在指向引用的指针
    // int &*ref2 = &ref; (X) equal to &*ref2 = age;
    // int *ref2 = &ref;

    // 11-不存在引用数组
    // int &arr[4]; (X)


    // getchar();
    return 0;
}