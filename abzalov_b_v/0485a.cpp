#include <iostream>
#include <vector>
 
int main() {
	int a;
	int m;
	int flag = 0;
	int x = 0;
	int q = 0;
	int n = 0;
	std::cin >> a >> m;
	std::vector <int> c;
	if (a % m == 0) {
		std::cout << "Yes" << std::endl;
	}
	
	else {
		q = a;
		while (flag == 0) {
			q = q + q % m;
			n = c.size();
			for (int i = 0; i < n; ++i) {
				if (q % m == c[i]) {
					flag = 1;
					break;
				}
			}
			if (q % m == 0) {
				flag = -1;
				break;
			}
			c.push_back(q % m);
		}
		if (flag == 1) {
			std::cout << "No";
		}
		else {
			std::cout << "Yes";
		}
	}
}
