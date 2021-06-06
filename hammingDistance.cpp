#include <iostream>

int main(){

	int x = 1, y=4;
	std::cout << __builtin_popcount(x^y);
	return __builtin_popcount(x^y);

}



