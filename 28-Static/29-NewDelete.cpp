#include <iostream>
using namespace std;

int main(){

    int *p = new int;
    *p = 10;
    delete p; //回收堆空间(4个字节),回收堆空间内存:这块堆空间内存可以重新被别人使用,并不会将 new int 清零
    // p = NULL; // 8 行不会执行此操作

    int *p2 = new int;
    cout << *p2 << endl;

    // getchar();
    return 0;
}