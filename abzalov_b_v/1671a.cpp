#include <iostream>
#include <string>
 
int main() {
	int t;
	std::cin >> t;
	while (t != 0) {
		std::string c;
		std::cin >> c;
		int n;
		n = c.size();
		int a = 0;
		int b = 0;
		int flagg;
		flagg = 1;
		if (n == 1) {
			flagg = 0;
		}
		for (int i = 0; i < n; ++i) {
			if (c[i] == 'a') {
				if (b % 2 != 0) {
					if ((b - 3) % 2 != 0) {
						flagg = 0;
						break;
					}
					if (b == 1) {
						flagg = 0;
						break;
					}
				}
				b = 0;
				a += 1;
			}
			else if (c[i] != 'a') {
				if (a % 2 != 0) {
					if ((a - 3) % 2 != 0) {
						flagg = 0;
						break;
					}
					if (a == 1) {
						flagg = 0;
						break;
					}
				}
				a = 0;
				b += 1;
 
			}
			
		} 
		if (a == 1 || b == 1) {
		    flagg = 0;
		}
		if (flagg == 1) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
		t -= 1;
	}
 
}
