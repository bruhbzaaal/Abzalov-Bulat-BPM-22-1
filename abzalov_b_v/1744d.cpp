#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t;
	for (int l = 0; l < t; ++l) {
		int n;
		std::cin >> n;
		int two_num;
		int q = 0;
		for (int i = 1; i < n+1; ++i) {
			int num;
			std::cin >> num;
			while (num % 2 != 1) {
				num = num / 2;
				two_num += 1;
			}
		}
		if (two_num >= n) {
			std::cout << 0 << std::endl;
		}
		else {
			for (int j = n; j > 0; --j) {
				(int) log2(n)
			}
		}



	} 
}
