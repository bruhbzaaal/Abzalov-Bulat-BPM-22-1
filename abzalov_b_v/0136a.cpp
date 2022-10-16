#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector <int> a(n+1);
	for (int i = 1; i <= n; ++i) {
		int m;
		std::cin >> m;
		a[m] = i;
	}
	for (int j = 1; j <= n; ++j) {
		std::cout << a[j] << " ";
	}
	
}
