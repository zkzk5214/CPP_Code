#pragma once

namespace AA{
    class Person{
    public:
        Person();
        ~Person();
    };
}

// 类不能重复定义
// 比如 在其他文件夹下有 namespace AA 下的一个类也叫 Person