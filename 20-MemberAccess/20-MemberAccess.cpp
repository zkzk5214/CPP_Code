#include <iostream>
using namespace std;
// 1-成员访问权限、继承方式有3种
// public: 公共的,任何地方都可以访问(struct 默认)
// protected:子类内部、当前类内部可以访问
// private: 私有的,只有当前类内部可以访问(class 默认)

// 2-子类内部访问父类成员的权限,是以下2项中权限最小的那个
// 成员变量本身的权限
// 上一级父类的继承方式

// 3-开发中使用最多的继承方式是public,这样能保留父类原来的成员访问权限

// 4-访问权限不影响对象的内存布局
 
// 1
// struct Person{
// protected:
//     int m_age;
//     void run(){

//     }
// };

// struct Student:Person{ // 子类
//     void study(){
//         m_age = 10;
//     }
// };

struct Person{
private:
    int m_age;
public:
    void setAge(int age){
        m_age = age;
    }
    int getAge(){
        return m_age;
    }

};

// 2
struct Student:private Person{ // 以 private 的方式继承父类,相当于下面写 private: int m_age;
    //  一般以 public 的方式继承父类

    // 4-可以间接调用,即 将成员变量拿过来,只是访问权限的区别而已,内存依旧占用
    // 继承即把把父类所有的成员变量都拿过来
    void work(){
        setAge(10);
        getAge();
    }
};

struct GoodStudent:Student{
    void work(){
    // m_age = 10; // 如果 Student:private Person 或者 Person 下 private 皆不可访问
    }
};

int main(){
    Person person;
    // m_age = 10;

    // getchar();
    return 0;
}