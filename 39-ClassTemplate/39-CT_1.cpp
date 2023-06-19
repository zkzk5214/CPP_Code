#include <iostream>
using namespace std;

/*Class without template*/
class List{
    int m_size;
    int m_capacity; 
    int *m_data; // Used to point to the head element
public:
    List(int capacity = 0){
        // if (capacity <= 0 ){
        //     m_capacity = 10;
        // } else {
        //     m_capacity = capacity;
        // }
        m_capacity = (capacity > 0) ? capacity :10;
        m_data = new int[m_capacity];  //Request heap space
    }
    ~List(){
        if (m_data == NULL) return;
        delete[] m_data;
    }
    void add(int value){
        if (m_size == m_capacity){
            /*
            Expansion of capacity
            1.Request a larger storage space
            2.Copy the data from the old space into the new space
            3.Release old space
            */
           cout << "OOC" << endl;
           return;
        }
        // m_size++: The next empty index
        m_data[m_size++] = value;
        
    }

    int get(int index){
        if (index < 0 || index >= m_size) {
            // Throw an exception
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
    // The data pointer points to the first byte 
    //      of the storage space on the right.  
    // int *data = new int[10]; 
    
    List array(3);
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