#include <iostream>
#include <string>

int main() {
	int t;
	std::cin >> t;
	for (int k = 0; k < t; ++k) {
		int n, m;
		std::cin >> n >> m;
		int x1 = 6, y1 = 10000000;
		int x0 = 0, y0 = 0;

		int flag = 1;
		int miny = 100000000, minx = 6;

		for (int j = 0; j < n; ++j) {
			std::string s;
			std::cin >> s;
			for (int i = 0; i < m; ++i) {
				if (s[i] == 'R' && i + j < minx + miny) {
					minx = i;
					miny = j;

				}
				if (s[i] == 'R' && i < x1) {
					x1 = i;
					y0 = j;
				}
				if (s[i] == 'R' && j < y1) {
					y1 = j;
					x0 = i;
				}
			}
			for (int i = 0; i < m; ++i) {
				if (s[i] == 'R' && x1 < minx && y0 > miny) {
					flag = 0;
					break;
				}
				if (s[i] == 'R' && x0 > minx && y1 < miny) {
					flag = 0;
					break;
				}
			}
		}
		
		if (flag == 0) {
			std::cout << "NO" << std::endl;
		}
		else if (flag == 1) {
			std::cout << "YES" << std::endl;
		}
	}
}
	
