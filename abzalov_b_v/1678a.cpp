#include <iostream>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int n, sum = 0;
		std::cin >> n;
		std::vector <int> a(n);
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
			if (a[i] == 0) {
				sum += 1;
			}
		}
		int flag = 2;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (j != i && a[i] == a[j]) {
					flag = 1;
				}
			}
 
		}
		if (sum != 0) {
			std::cout << n - sum << std::endl;
		}
		else if (flag == 1) {
			std::cout << n << std::endl;
		}
		else {
			std::cout << n + 1 << std::endl;
		}
	}
	}
		
