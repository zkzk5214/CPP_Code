/*
 * hello.cpp
 * This program prints a welcome message
 * to the user.
*/

# include <iostream>  // <> 先去系统目录中找头文件，如果没有在到当前目录下找。
using namespace std;
// 真正的开发过程中， 尽量避免使用 using namespace std; 等直接引入整个命名空间，否则会因为命名空间污染导致很多不必要的问题， 
// 比如自己写的某个函数，名称正好和 std 中的一样， 编译器会不知道使用哪一个， 引起编译报错， 建议使用:
// std::count <<"Hello, world" << std::endl;

int main(){
    // cout - 输出
    // endl - 换行
    cout << "Please type a number:" << endl;
    int age;
    cin >> age;  // 将键盘的输入赋值给 cin
    cout << "age is " << age << endl;
    getchar(); // 等待键盘输入（如果敲回车就会读取键盘输入,vscode中不太好用，Terminal中尝试）
    return 0;
}

// 1、在 C++ 中，终端输出换行时，用 cout<< ... <<endl 与 "\n" 都可以，这是初级的认识。
// 但二者有小小的区别，用 endl 时会刷新缓冲区，使得栈中的东西刷新一次，但用 "\n" 不会刷新，它只会换行，盏内数据没有变化。
// 但一般情况，二者的这点区别是很小的，在大的程序中可能会用到。建议用 endl 来换行。
// 2、endl 除了写 '\n' 进外，还调用 flush 函数，刷新缓冲区，把缓冲区里的数据写入文件或屏幕.考虑效率就用 '\n'。
// 3、cout *lt;< endl; 除了往输出流中插入一个 '\n' 还有刷新输出流的作用。
// 过多的 endl 是影响程序执行效率低下的因素之一

// 折叠展开 command+option+[ or ]