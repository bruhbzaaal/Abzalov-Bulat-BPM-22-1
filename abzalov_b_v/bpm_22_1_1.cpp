#include <iostream>
#include <cmath>

int main() {
	double x = 0.0;
	double eps = 0.0001;
	double del_x = 0.05;
	double s = 0.0; 
	double del_s = 10.0;
	int i = 1;

	std::cout << "x\t" << "s\t" << std::endl;

	while (x <= 1) {
		x += del_x;
		while (abs(del_s) > eps) {
			del_s = pow(-1, (i + 1)) * pow(x, (2 * i + 1))/(4*pow(i, 2) - 1);
			s += del_s;
			i += 1;
		}
		i = 1;
		del_s = 1;
		std::cout << x << '\t' << s << '\t' << std::endl;
		s = 0;
	}
} 
