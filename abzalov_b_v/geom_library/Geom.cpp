#include "Geom.hpp"
#include <iostream>

std::ostream& operator<<(
	std::ostream& ostrm,
	const Rdec2D& p
	) {
	return ostrm << '(' << p.x << ',' << p.y << ')';
}

std::ostream& operator<<(std::ostream& out, const Rpol2D& point) {
	out << "(" << point.r << "," << point.phi << ")" << "\n";
	return out;
}

Rdec2D ToDec(Rpol2D vector) {
	double x = std::cos(vector.phi) * vector.r;
	double y = std::sin(vector.phi) * vector.r;
	Rdec2D new_vector{ x, y };
	return new_vector;
}

Rpol2D ToPol(Rdec2D vector) {
	double r = std::sqrt(vector.x * vector.x + vector.y * vector.y);
	double phi = std::asin(vector.y / r);
	Rpol2D new_vector{ r, phi };
	return new_vector;
}

Rdec2D operator+=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;

	return lhs;
}


Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res += rhs;
	return res;
}

Rdec2D operator-=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res -= rhs;
	return res;
}

Rdec2D operator*=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x *= rhs.x;
	lhs.y *= rhs.y;
	return lhs;
}

Rdec2D operator*=(Rdec2D& lhs, double a) {
	lhs.x *= a;
	lhs.y *= a;
	Rdec2D res = lhs;
	return res;
}

Rdec2D operator*(const Rdec2D& lhs, double a) {
	Rdec2D res = lhs;
	res *= a;
	return res;
}

Rdec2D operator/=(Rdec2D& lhs, double a) {
	lhs.x /= a;
	lhs.y /= a;
	Rdec2D res = lhs;
	return res;
}

Rdec2D operator/(const Rdec2D& lhs, double a) {
	Rdec2D res = lhs;
	res /= a;
	return res;
}

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs) {
	if (abs(lhs.x - rhs.x) <= 0.0001 && abs(lhs.y - rhs.y) <= 0.0001) {
		return false;
	}
	else {
		return true;
	}
}

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs) {
	if (abs(lhs.x - rhs.x) <= 0.0001 && abs(lhs.y - rhs.y) <= 0.0001) {
		return true;
	}
	else {
		return false;
	}
}

Rdec2D dot(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res *= rhs;
	return res;
}

double norm(const Rdec2D& lhs) {
	Rdec2D cop = lhs;
	cop.x *= cop.x;
	cop.y *= cop.y;
	double res = sqrt(cop.x + cop.y);
	return res;
}
