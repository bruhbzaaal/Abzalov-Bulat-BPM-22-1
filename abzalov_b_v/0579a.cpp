#include <iostream>
 
int main() {
	int x;
	std::cin >> x;
	int counter = 0;
	while (x != 0) {
		counter += x & 1;
		x >>= 1;
	}
	std::cout << counter;
}
