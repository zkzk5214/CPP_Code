#include <iostream>

int main(){
    int array1[] = {11,22,33,44,55};
    for (auto item:array1){
        std::cout << item << std::endl;
    }

    int array2[]{11,22,33,44,55};
    std::cout << *array2 << std::endl;

    return 0;
};