#include <iostream>
#include <string>
 
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int n;
		char c;
		std::cin >> n >> c;
		std::string s;
		std::cin >> s;
		int sum = 0;
		int max = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == c) {
				for (int j = i; j < 2 * n; ++j) {
					j = j % n;
					sum += 1;
					if (s[j] == 'g') {
						break;
					}
				}
				if (sum > max) {
					max = sum;
				}
				sum = 0;
			}
		}
		std::cout << max - 1 << std::endl;
 
	}
}
