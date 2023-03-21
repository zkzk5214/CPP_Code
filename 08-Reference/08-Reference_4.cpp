#include <iostream>
using namespace std;


int main(){

    // 数组名arr其实是数组的地址,也是数组首元素的地址
    // 数组名arr可以看作是指向数组首元素的指针(int*)
    int arr[] = {1,2,3}; // arr里存储的是首元素的地址值,可以理解为arr是指向首元素的指针

    // *arr; == 1
    // *(arr+1) == 2
    // *(arr+2) == 3 == arr[2]

    // int (&ref)[3] = arr;
    // int *&ref = arr; // (X) 数组名的地址值是个常量
    int * const &ref = arr; // 常引用才能引用常量

    return 0;
}