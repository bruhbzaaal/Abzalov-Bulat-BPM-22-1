#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846264338327950288419716939937510
int main() {
	double a = 0.0;
	double b = 1.0;
	double bet = 0.05;
	double x = a;
	const double eps = 0.001;
//	std::cout << " x" << " " << "|" << " " << "s(x)" << " " << "|" << " " << "f(x)" << std::endl;
	double s = 0.0;
	double y;
	double s_i = 1.0;
	int i = 1;
	double pres = 1.0;
	while (x <= b) {
		s_i = pow(x, i) * sin(i * M_PI / 4);
		pres = s;
		s = s + s_i;
		y = (x * sin(M_PI / 4)) / (1 - 2 * x * cos(M_PI / 4));
		std::cout << x << " " << "|" << " " << s << " " << "|" << " " << y << std::endl;
		x += bet;
		if (i != 1 && abs(s_i) <= eps) {
			break;
		} 
		i += 1;
	}
}
