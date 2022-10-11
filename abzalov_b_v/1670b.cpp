#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803
 
int main() {
	int n, r;
	std::cin >> n >> r;
    std::cout.precision(8);
	std::cout << r * sin((M_PI) / n) / (1 - sin((M_PI) / n));
}
