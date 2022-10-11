
#include <iostream>
#include <string> 
 
int main() {
	int t;
	std::cin >> t;
	for (int l = 0; l < t; ++l) {
		int n, k;
		std::cin >> n >> k;
		std::string s;
		std::cin >> s;
		int v = 0, z = 0; // v - количество единиц, z - нулей
		int flag = 1;
		for (int i = 0; i < n; ++i) {
			if (s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k]) {
				flag = 0;
				break;
			}
			if (s[i] != '?') {
				s[i % k] = s[i];
			}
		}
		for (int i = 0; i < k; ++i) {
			if (s[i] == '1') {
				v += 1;
			}
			if (s[i] == '0') {
				z += 1;
			}
		}
 
		if (flag == 1 && v <= k/2 && z <= k/2) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
}
