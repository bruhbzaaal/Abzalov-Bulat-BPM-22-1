#include <iostream>
#include <string>
 
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int x1, y1;
		int x2, y2;
		int x3, y3;
		int x4, y4;
		int n;
		int prov = 1;
		std::cin >> n;
		for (int j = 0; j < n; ++j) {
			std::string s;
			std::cin >> s;
			for (int i = 0; i < n; ++i) {
				if (s[i] == '*' && prov == 1) {
					x1 = i;
					y1 = j;
					prov = 0;
				}
				else if (s[i] == '*' && prov == 0) {
					x2 = i;
					y2 = j;
				}
			}
		}
		if (y1 == y2 && y1 < n-1) {
			x3 = x1;
			x4 = x2;
			y3 = y1 + 1;
			y4 = y2 + 1;
		}
		else if (y1 == y2 && y1 == n - 1) {
			x3 = x1;
			x4 = x2;
			y3 = y1 - 1;
			y4 = y4 - 1;
		}
		else if (x1 == x2 && x1 < n - 1) {
			x3 = x1 + 1;
			x4 = x2 + 1;
			y3 = y1;
			y4 = y2;
		}
		else if (x1 == x2 && x1 == n - 1) {
			x3 = x1 - 1;
			x4 = x2 - 1;
			y3 = y1;
			y4 = y2;
		}
		else {
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
		}
		for (int j = 0; j < n; ++j) {
			for (int i = 0; i < n; ++i) {
				if (j == y1 && i == x1) {
					std::cout << '*';
				}
				else if (j == y2 && i == x2) {
					std::cout << '*';
				}
				else if (j == y3 && i == x3) {
					std::cout << '*';
				}
				else if (j == y4 && i == x4) {
					std::cout << '*';
				}
				else {
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
		
	}
}
