#include<iostream>
using namespace std;

// 兼职中心:
// 1.保姆:扫地,做饭
// 2.老师:踢足球,打棒球
// 应聘的角色:
// 1.学生
// 2.上班族
// 3...

class JobHousekeeper{
public:
    virtual void clean() = 0;
    virtual void cook() = 0;
};

class JobTeacher{
public:
    virtual void playFootball() = 0;
    virtual void playBaseball() = 0;
};

class Student: public JobHousekeeper, public JobTeacher {
    int m_score;
public:
    void clear(){}
    void cook(){}
    void playFootball(){}
    void playBaseball(){}
};

class Worker: public JobHousekeeper, public JobTeacher{
    int m_salary;
public:
    void clear(){}
    void cook(){}
    void playFootball(){}
    void playBaseball(){}
};

int main(){


    return 0;
}
