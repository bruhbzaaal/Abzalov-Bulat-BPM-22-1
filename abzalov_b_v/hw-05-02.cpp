#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846264338327950288419716939937510
int main() {
	double a = 0.0;
	double b = 1.0;
	double bet = 0.05;
	double x = a;
	const double eps = 0.001;
	std::cout << " x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	double s = 0.0;
	double y;
	double s_i = 1.0;
	int i = 1;
	while (x <= b) {
		while (s_i > eps) {
			s_i = pow(x, i) * sin(i * (M_PI / 4));
			s = s + s_i;
			y = (x * sin(M_PI / 4)) / (1 - 2 * x * cos(M_PI / 4));
			i += 1;
			if (s_i == 0) {
				s_i = 1.0;
			}
			if (i == 1000) {
				break;
			}
		}
		std::cout << x << " " << "|" << " " << s << " " << "|" << " " << y << std::endl;
		x += bet;
		i = 1;
		s_i = 1.0;
		s = 0.0;
	}
}
