#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
	int n;
	std::cin >> n;
	std::vector <int> a(n);
	int k = 1;
	int s = 0;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	std::sort(a.begin(), a.end());
	for (int i = 0; i < n; ++i) {
		if (k <= a[i]) {
			s += 1;
			k += 1;
		}
	}
	std::cout << s;
}
