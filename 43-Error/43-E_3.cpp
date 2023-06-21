#include <iostream>

// Standard exception

int main() {
	try{
		int size = 999999;
		for (size_t i = 0;i<size;i++){
			int *p = new int[size];
		}
	} catch (std::bad_alloc exception){
		std::cout << exception.what() << std::endl;
	}

	std::cout << "running..." << std::endl;


	// getchar();
	return 0;
}