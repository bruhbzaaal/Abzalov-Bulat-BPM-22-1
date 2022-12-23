#include <iostream>
#include <cmath>

int main() {
	double x;
	double y;
	int a = 0;
	while (std::cin >> x >> y) {
		if (x * x + y * y <= 4 && 2 - x * x >= y) {
			a += 1;
		}
	}
	std::cout << a;
}  
