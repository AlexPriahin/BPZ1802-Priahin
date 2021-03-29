#include "Complex.h"
#include<iostream>
#include<cmath>
#include<math.h>

double Complex::R() const
{
	return this->r;
}

double Complex::Phi() const
{
	return this->phi;
}

Complex::Complex(double r, double phi)
	:r(r), phi(phi) {}

Complex::Complex()
	: r(0), phi(1) {}

Complex::Complex(double digit) 
	: r(digit), phi(1) {}

Complex Complex::operator*(const Complex& rhs)
{
	return Complex(this->R() * rhs.Re() - this->Phi() * rhs.Im(), this->R() * rhs.Im() + this->Phi() * rhs.Re());
}

Complex Complex::operator+(const Complex& rhs)
{
	    return Complex(this->Re() + rhs.R(), this->Im() + rhs.Phi());
}                  

Complex Complex::operator/(const Complex& rhs)
{
	return Complex(this->R() / rhs.R(), rhs.Phi() -this->Phi());
}


Complex Complex::operator-(const Complex& rhs)
{
	return Complex(this->Re() - rhs.Re(), this->Im() - rhs.Im());
}

Complex tg(const Complex& z)
{
	return Complex(sin(2 * z.Re()) / (cos(2 * z.Re()) + cosh(2 * z.Im())),
                   sinh(2 * z.Im()) / (cos(2 * z.Re()) + cosh(2 *z.Im())));
}

ostream& operator<<(ostream& stream, const Complex& z)
{
	if ((z.Phi() >= 0))
	{
		stream << z.R() << "+" << z.Phi() << "*i"<<endl;
	}
	else
	{
		stream << z.R() <<z.Phi() << "*i" << endl;
	}
	return stream;
}


Complex y(const Complex& z)
{
	return (Complex(2, 0) + tg(z)*z);
}
