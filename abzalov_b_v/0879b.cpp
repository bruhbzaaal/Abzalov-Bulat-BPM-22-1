#include <iostream>
#include <queue>

int main() {
	int n;
	long long k;
	int max_pow = 0;
	int pow = 0;
	int flag = 1;
	std::cin >> n >> k;
	int k_cop = k;
	if (k >= n) {
		for (int i = 0; i < n; ++i) {
			std::cin >> pow;
			if (pow >= max_pow) {
				max_pow = pow;
			}
		}
		std::cout << max_pow;
	}
	else {
		std::queue <int> q;
		for (int i = 0; i < n; ++i) {
			std::cin >> pow;
			q.push(pow);
		}
		max_pow = q.front();
		q.pop();
		while (flag != 0) {
			if (q.front() > max_pow) {
				k_cop = k;
				k_cop -= 1;
				q.push(max_pow);
				max_pow = q.front();
				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
				k_cop -= 1;
				if (k_cop == 0) {
					flag = 0;
					std::cout << max_pow;
				}
			}

		}
	}
}
