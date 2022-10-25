#include <iostream>
#include <string>
 
int main() {
	int t;
	std::cin >> t;
	for (int l = 0; l < t; ++l) {
	int n;
	int k;
	std::cin >> n >> k;
	std::string s;
	std::cin >> s;
	int sumB = 0;
	int total_B = 0;
	int sum = 0;
	int minW = k + 1;
	
	for (int i = 0; i < k; i += 1) {
		if (s[i] == 'B') {
			sumB += 1;
		}
	}
	total_B = sumB;
	for (int i = k; i < n; ++i) {
		if (s[i - k] == 'B') {
			sumB -= 1;
		}
		if (s[i] == 'B') {
			sumB += 1;
		}
		if (sumB > total_B) {
			total_B = sumB;
		}
	}
 
 
	std::cout << k - total_B << std::endl;
 
	} 
}
