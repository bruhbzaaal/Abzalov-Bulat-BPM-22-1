#include <iostream>
#include <cmath>

int main() {
	double a = 0.0;
	double b = 1.0;
	double bet = 0.1;
	double x = a;
	const double eps = 0.0001;
	std::cout << " x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	double s = 0.0;
	double y = 0.0;
	double s_i = 1.0;
	int i = 0;
	int fact = 1; // для вычисления факториала в знаменателе
	while (x <= b) {
		while (abs(s_i) > eps) {
			if (i != 0) {
				for (int j = 1; j <= i; ++j) {
					fact = fact * j;
				}
			}
			s_i = pow(2 * x, i) / fact;
			s = s + s_i;
			y = exp(2 * x);
			i += 1;
			fact = 1;
		}
		std::cout << x << " " << "|" << " " << s << " " << "|" << " " << y << std::endl;
		x += bet;
		s_i = 1.0;
		s = 0.0;
		i = 0;
	}

}
