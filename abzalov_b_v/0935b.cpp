#include <iostream>
#include <string>
 
int main() {
	int n;
	std::string s;
	std::cin >> n;
	std::cin >> s;
	int x = 0, y = 0;
	int mon = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'U') {
			y += 1;
		}
		else if (s[i] == 'R') {
			x += 1;
		}
		if (x == y && s[i] == s[i+1] && i != n-1) {
			mon += 1;
		}
	}
	std::cout << mon;
}
	
