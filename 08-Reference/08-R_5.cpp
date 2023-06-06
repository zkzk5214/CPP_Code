#include <iostream>
using namespace std;


int main(){

    /* 
    The array name arr is actually the address of the array, which is also 
        the address of the first element in the array.
    arr can be thought of as a pointer to the first element of the array (int*).
    */
    int arr[] = {1,2,3}; // arr stores the address of the first element
    cout << *arr << endl;       // arr[0]
    cout << *(arr+1) << endl;   // arr[1]
    cout << *(arr+2) << endl;   // arr[2]

    // Reference to Array
    // data_type (&name)[size] = array;
    int (&ref)[3] = arr; // ref: address of arr
    // Const Reference are the only way to refer constant variable
    // int* &ref = arr; // (X) the address of arr is a constant and cannot be modified
    int* const &ref_c = arr; 

    return 0;
}