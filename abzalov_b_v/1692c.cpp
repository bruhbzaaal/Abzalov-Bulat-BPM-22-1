#include <iostream>
#include <string>
 
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int x1 = 10, y1 = 10;
		int flag = 1;
		for (int j = 1; j < 9; ++j) {
			std::string s;
			std::cin >> s;
			for (int i = 0; i < 6; ++i) {
				if (s[i] == '#' && s[i + 2] == '#' && x1 == 10 && y1 == 10) {
					y1 = j;
					x1 = i;
					break;
				}
			}
		}
		std::cout << y1 + 1 << " " << x1 + 2 << std::endl;
	}
}
