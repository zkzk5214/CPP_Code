# include <iostream> 
using namespace std;

// 1- In C++, use 'cout<< ... <<endl' or "\n" to implement a new line in the terminal.
// But there is a small difference between the two. When using 'endl', the buffer will be refreshed, 
// so that the things in the stack will also be refreshed, however, "\n" will not cause refresh, 
// it will only output newline, and the data in the stack will not change.
// 2- In addition to doing '\n', 'endl' also calls the 'flush' function to refresh the buffer and write
// the data in the buffer to a file or screen. In consideration of operating efficiency, it's recommended
// to use '\n' 
// 3- cout *lt;< endl; In addition to inserting '\n' into the output stream, it can also flush the output stream
// 4- One of the factors affecting the inefficiency of program execution is the use of many ‘endl’.

int main(){
    // cout - (“see out”) object to display messages on the computer’s screen.
    // endl - (“end-line”) to instruct cout to start a new line.
    cout << "Please type a number:" << endl;
    
    int age;
    cin >> age;  // Assign keyboard entry to cin
    cout << "age is " << age << endl;

    // getchar(); 
    return 0;
}
