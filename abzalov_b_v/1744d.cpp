#include <iostream>
#include <cmath>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	for (int l = 0; l < t; ++l) {
		int n;
		std::cin >> n;
		int two_num = 0;
		int q = 0;
		int flag = 0;
		int dop_twonum = 0;
		int cop = 17;
		int m = 1;
		std::vector <int> a(18, 0);
 
		for (int i = 1; i < n + 1; ++i) {
			int num;
			std::cin >> num;
			while (num % 2 != 1) {
				num = num / 2;
				two_num += 1;
			}
			for (int j = 17; j > 0; --j) {
				cop = j;
				while (cop != 0) {
					m = m * 2;
					cop -= 1;
				}
				if (i % m == 0) {
					a[j] += 1;
					break;
				}
				m = 1;
			}
 
		}
		if (two_num >= n) {
			std::cout << 0 << std::endl;
		}
		else {
			dop_twonum = n - two_num;
			for (int k = 17; k > 0; --k) {
				while (a[k] != 0) {
					dop_twonum = dop_twonum - k;
					a[k] -= 1;
					q += 1;
					if (dop_twonum == 0) {
						flag = -1;
						break;
					}
				}
				if (flag == -1) {
					break;
				}
			}
			if (dop_twonum == 0) {
				std::cout << q << std::endl;
			}
			else {
				std::cout << -1 << std::endl;
			}
 
		}
	}
}
