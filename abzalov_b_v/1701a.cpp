
#include <iostream>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int x1, x2, y1, y2;
		std::cin >> x1 >> y1;
		std::cin >> x2 >> y2;
		if (x1 + x2 + y1 + y2 == 0) {
			std::cout << 0 << std::endl;
		}
		else if (x1 + x2 + y1 + y2 == 4) {
			std::cout << 2 << std::endl;
		}
		else {
			std::cout << 1 << std::endl;
		}
	}
	}
