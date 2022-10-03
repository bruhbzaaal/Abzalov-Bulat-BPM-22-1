#include <iostream>
#include <cmath>

int main() {
	double a = -1.0;
	double b = 1.0;
	double bet = 0.1;
	double x = a;
	const double eps = 0.001;
//	std::cout << " x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	double s = 0.0;
	double y;
	double s_i = 1.0;
	int i = 0;
	int fact = 1; // для вычисления факториала в знаменателе
	while (abs(s_i) > eps && x <= b) {
		if (i != 0) {
			for (int j = 1; j <= i * 2; ++j) {
				fact = fact * j;
			}
		}
		s_i = (pow(-1, i) * pow(x, 2 * i)) / fact;
		y = cos(x);
		s = s + s_i;
		std::cout << " " << x << " " << "|" << " " << s << " " << "|" << " " << y << std::endl;
		x = x + bet;
		i += 1;
	}
}
