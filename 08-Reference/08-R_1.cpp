#include <iostream>
using namespace std;

// 1-在c语言中,使用指针可以间接获取、修改某个变量的值
// 2-在c++中,使用引用可以起到跟指针类似的功能
// 引用相当于是变量的别名(基本数据类型、枚举、结构体、类、指针、数组等,都可以有引用)
// 3-对引用做计算,就是对引用所指向的变量做计算
// 4-在定义的时候就必须初始化,一旦指向了某个变量,就不可以再改变,从一而终(指针可以)
// 5-可以利用引用初始化另一个引用,相当于某个变量的多个别名
// 6-不存在引用的引用、指向引用的指针、引用数组

/*
    1-In C/C++, pointer can indirectly access/modify the value of a variable
    2-In C++, the use of reference can perform similar abilities to pointer
Attention:
    3-Reference is equivalent to alias of a variable(basic data type,
        enumeration, struct, class, pointer, array, etc., can all have
        reference)
    4-To assign a value for reference is to assign a value for the variable
        that the reference points to.
    5-Must initialize when it is defined, and once it points to a variable,
        it can no longer to redefinition.(pointer can)
    6-Can initialize another reference with a reference, which is equivalent 
        to anther alias for a variable.
    7-No reference to reference, pointer to reference and list reference.
*/

int abc = 20; // Reference can point to global variable.

int main(){

    int age = 10;
    // 1)
    int *p = &age;
    *p = 20;

    // 2)
    // Define a reference to age, determine the direction the reference
    // points to. refAge is an alias for age, thus ref is age
    int &ref = age;  
    ref = 20;

    // 4)
    ref += 30;
    int height = 20;
    cout << age << endl;

    // 5)
    // int &ref = height;
    
    // This operation assign a value to ref rather than modify the 
    // direction in which the reference is pointing. If ref=10, the value 
    // of height is still 20.
    ref = height; 
     
    // 6)
    int &ref1 = ref;
    int &ref2 = ref1; // both are alias of age
    ref += 10;
    ref1 += 10;
    ref2 += 10;
    cout << age << endl;
 
    // getchar();
    return 0;
}
