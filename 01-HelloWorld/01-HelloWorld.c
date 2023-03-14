// #include 是C语言的预处理指令之一，所谓预处理，就是在编译之前做的处理，预处理指令一般以 # 开头

// #include 指令后面会跟着一个文件名，预处理器发现 #include 指令后，就会根据文件名去查找文件，并把这个文件的内容包含到当前文件中。
// 被包含文件中的文本将替换源文件中的 #include 指令，就像你把被包含文件中的全部内容拷贝到这个 #include 指令所在的位置一样

// 如果被包含的文件拓展名为.h，我们称之为"头文件"(Header File)，头文件可以用来声明函数("函数"就是面向对象中的"方法"),
// 要想使用这些函数，就必须先用 #include 指令包含函数所在的头文件

// #include 指令不仅仅限于.h头文件，可以包含任何编译器能识别的C/C++代码文件，包括.c,.hpp,.cpp等，甚至.txt,.abc等等都可以

// #include <stdio.h>

// int main(int argc, const char * argv[])
// {
 
//     // insert code here...
//     printf("Hello, World!\n");
//     return 0;
// }

# include <stdio.h>
// #include 的功能就是将文件内容完全拷贝到 #include 指令所在的位置
# include "01-HelloWorld.txt"  // 如果是系统自带的文件，最好用 < >；如果是开发人员自己创建的文件，最好用 ""
