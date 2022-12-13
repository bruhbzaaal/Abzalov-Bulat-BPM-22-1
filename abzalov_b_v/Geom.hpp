#include <iosfwd>
#include <cmath>


struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

std::ostream& operator<<(
	std::ostream& ostrm,
	const Rdec2D& p
	);

Rdec2D operator+=(Rdec2D& lhs, const Rdec2D& rhs);


Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator-=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator*=(Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D operator*=(Rdec2D& lhs, double a);

Rdec2D operator*(const Rdec2D& lhs, double a);

Rdec2D operator/=(Rdec2D& lhs, double a);

Rdec2D operator/(const Rdec2D& lhs, double a);

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs);

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs);

Rdec2D dot(const Rdec2D& lhs, const Rdec2D& rhs);

double norm(const Rdec2D& lhs);