#include <iostream>
using namespace std;
// 堆空间的申请释放
// malloc free
// 申请堆空间成功后,会返回那一段内存空间的地址
// 申请和释放必须是1对1的关系,不然可能会存在内存泄露

void test(){
    // 向操作系统申请4个字节的堆空间 (int * 强制转换)
    // 堆空间: 假设地址值0x999,4个字节, 10
    // 栈空间: 假设地址值0x111,4个字节, p=0x999
    // 栈空间的指针变量p指向堆空间的4个字节(X86 4字节, X64 8字节)
    // 函数调用完毕,栈空间回收,指针变量消失,堆空间还在

    // int * p = (int *) malloc(4); 
    // *p = 10; // 直接将10赋值给4个字节 (int *)
    
    char *p = (char *) malloc(4);
    // *p = 10; // 将10赋值给*p的第一个地址,一个字节(char *)
    // *(p+1) = 11;
    // *(p+2) = 12;
    // *(p+3) = 13;
    p[0] = 10; // 等价
    p[1] = 11;
    p[2] = 12;
    p[3] = 13;

    free(p); // 释放堆空间. melloc和free一一对应,全部释放
}

// new delete
// new [] delete []
void test2(){
    // int *p = new int; //new 向堆空间申请内存(4个字节)
    // *p = 10;

    // char *p = new char;
    // *p = 10; // 一个字节
    // delete p; // new 对应 delete
    char *p = new char[4]; // char *p = (char *) malloc(4); char 类型的数组

    delete[] p; // 释放全部连续4个字节的空间
}

int main(){

    int * p = (int *) malloc(4); // 向操作系统申请4个字节的堆空间
    *p = 10;


    // getchar();
    return 0;
}