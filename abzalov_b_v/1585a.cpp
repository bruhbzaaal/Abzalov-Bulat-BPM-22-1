#include <iostream>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int n;
		std::cin >> n;
		int w = 1;
		std::vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			std::cin >> a[i];
		}
		if (n == 1 && a[0] == 1) {
			w += 1;
		}
		else if (n == 1 && a[0] == 0) {
			w = w;
		}
		for (int i = 1; i < n; ++i) {
			if (a[0] == 1 && i == 1) {
				w += 1;
			}
			if (a[i] == 1 && a[i - 1] == 1) {
				w += 5;
			}
			else if (a[i] == 1 && a[i - 1] == 0) {
				w += 1;
			}
			else if (a[i] == 0 && a[i - 1] == 0) {
				w = -1;
				break;
			}
			
		}
		std::cout << w << std::endl;
	}
}
	
