
#include <iostream>
using namespace std;
/*
可以进行初始化的if、switch语句
*/
int main(){
    
    int a = 10;
    if (a>10){
    }   else {
    }

    // 变量a的作用域是它所在的if语句,以及其后面的if-else语句
    if (int a = 10; a>10){
    } else if (int b = 20; a>5 && b>10){
        b = 2,  a = 2;
    } else if (0){
        b = 3, a = 3;  
    }  else {
        b = 4, a = 4;
    }

    // 变量a的作用域是它所在switch语句
    switch (int a = 10; a){
    case 1:
        break;
    case 5:
        break;
    case 10:
        break;
    default:
        break;
    }

    // getchar();
    return 0;
}