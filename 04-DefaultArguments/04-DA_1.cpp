#include <iostream>
using namespace std;

// 1-Default Arguments can only be in right-to-left order
int sum(int v1=5, int v2=6){
    return v1+v2;
}
// int sum(int v1=10, int v2){ // is not allowed
//     return v1+v2;
// }

int main(){
    cout << sum() << endl;
    cout << sum(10) << endl;
    cout << sum(10, 20) << endl;

    // getchar();
    return 0;
 }