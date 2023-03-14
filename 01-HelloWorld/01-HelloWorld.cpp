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
    cout << "Hello, world!!!" << endl; // 终端输出换行 

    // endl - 换行
    // 1)
    // cout << "Hello, world" << "\n"; // "\n" 可代替 endl
    // 2) 
    // cout << "Hello" << endl;
    // cout << "World" ;
    // 3)
    // cout << "Hello" << endl << "World" ;
    
    getchar(); // 等待键盘输入（如果敲回车就会读取键盘输入,vscode中不太好用，Terminal中尝试）
    return 0;
}

// 折叠展开 command+option+[ or ]