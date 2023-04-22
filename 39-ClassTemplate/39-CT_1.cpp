#include <iostream>
using namespace std;

class Array{
    int *m_data; // 用于指向首元素
    int m_size; // 元素个数
    int m_capacity; // 容量
public:
    Array(int capacity = 0){
        // if (capacity <= 0 ){
        //     m_capacity = 10;
        // } else {
        //     m_capacity = capacity;
        // }
        m_capacity = (capacity > 0) ? capacity :10;
        m_data = new int[m_capacity];  //申请堆空间
    }
    ~Array(){
        if (m_data == NULL) return;
        delete[] m_data;
    }
    void add(int value){
        if (m_size == m_capacity){
            /*
            扩容
            1.申请一块更大的存储空间
            2.将旧空间的数拷贝到新空间
            3.释放旧空间
            */
           cout << "OOC" << endl;
           return;
        }
        // m_size对应下一个空出来的索引
        m_data[m_size++] = value;
        
    }

    int get(int index){
        if (index < 0 || index >= m_size) {
            //报错:抛异常
            throw "Array subscript overstep the boundary";
        }
        return m_data[index];
    }

    int size(){
        return m_size;
    }

    int operator[](int index){
        return get(index);
    }

};

int main(){

    // int *data = new int[10]; // data指针指向右边存储空间的第一个字节

    Array array(3);
    array.add(10);
    array.add(20);
    array.add(30);
    array.add(40);
    array.add(50);
    cout << array.get(0) << endl;
    cout << array[1] << endl;
    cout << array.size() << endl;

    // getchar();
    return 0;
}