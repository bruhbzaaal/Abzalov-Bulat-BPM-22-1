#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int n;
		std::cin >> n;
		std::vector <int> a(n);
		int coins = n;
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			if (a[i] == 1) {
				coins -= 1;
			}
			else {
				break;
			}
		}
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] == 1) {
				coins -= 1;
			}
			else {
				break;
			}
		}
		if (coins < 0) {
			std::cout << 0 << std::endl;
		}
		else {
			std::cout << coins + 1 << std::endl;
		}
	}
}		
	

