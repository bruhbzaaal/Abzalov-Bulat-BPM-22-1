#include <iostream>
#include <vector>
 
int main() {
	int n;
	int k;
	std::cin >> n >> k;
	std::vector<int> a(n);
	int ans = 101;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
		if (k % a[i] == 0 && k / a[i] < ans) {
			ans = k / a[i];
		}
	}
	std::cout << ans;
}
