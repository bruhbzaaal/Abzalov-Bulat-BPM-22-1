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
		std::string s2;
		s2 = s + s;
		int sum = 0;
		int step = 0;
		int max = 0;
		int i = 0;
		while (i < n) {
			if (s[i] == c) {
				for (int j = i; j < 2 * n; ++j) {
					if (s2[j] == 'g') {
						break;
					}
					sum += 1;
					if (sum > max) {
						max = sum;
					}
					step = sum;
				}
				sum = 0;
			}
			if (step == 0) {
				i += 1;
			}
			else {
				i += step;
				step = 0;
			}
		}
		std::cout << max << std::endl; 
 
	} 
}
