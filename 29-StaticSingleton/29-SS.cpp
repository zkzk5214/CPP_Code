#include <iostream>
using namespace std;

// 单例模式:设计模式中的一种,保证某个类永远只创建一个对象
// 1.构造函数\析构函数 私有化
// 2.定义一个私有的 static 成员变量指向唯一的那个单例对象
// 3.提供一个公共的访问单例对象的接口

class Rocket{
private:
    Rocket(){}; // 1-构造函数私有化
    ~Rocket(){}; // 1-析构函数私有化,防止 main 中删除指针(delete p1);
    static Rocket *ms_rocket; // 2-每一次访问 ms_rocket 是同一个变量
    // static Rocket ms_rocket; // (不建议)对象尽量放堆空间,以及内存的灵活使用
    void operator=(const Rocket &rocket){} // 赋值运算符私有化,使其不能赋值
    Rocket(const Rocket &rocket){} // 拷贝构造私有化,使其不能拷贝
public:
    static Rocket *sharedRocket(){ // 3-
        // 这里要考虑多线程安全,多线程同时访问可以会造成对象浪费
        if(ms_rocket == NULL){
            ms_rocket = new Rocket(); // 第一次调用为空,通过new去创建堆空间对象
        }
        // 第二次调用直接返回上一次对象的地址
        return ms_rocket;
        // return &ms_rocket;
    }
    static void deleteRocket(){ // 回收堆空间
        // 这里要考虑多线程安全
        if (ms_rocket != NULL){
            delete ms_rocket; // 指针堆空间回收,指针未清空,有值
            // delete &ms_rocket;
            ms_rocket = NULL; // 清空指针,否则会存在野指针
        }
    }
    void run(){
        cout << "run()" << endl;
    }
};

Rocket *Rocket::ms_rocket = NULL; // 静态成员变量初始化

int main(){

    Rocket *p1 = Rocket::sharedRocket();
    Rocket *p2 = Rocket::sharedRocket();
    Rocket *p3 = p1 -> sharedRocket(); 
    // *p1 = *p2; // 加入15行使得该操作不被允许
    // Rocket *p4 = new Rocket(*p2); // 拷贝构造,加入16行使得该操作不被允许

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    Rocket::deleteRocket();

    // getchar();
    return 0;
}