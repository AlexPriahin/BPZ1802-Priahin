#pragma once
#include "iostream"
#include<cmath>
using namespace std;

class Complex
{
private:
	double r;//������
	double phi;//��������

public:
	double R() const;
	double Phi() const;
	double Re() const
	{
		return r * cos(phi);
	}
	double Im() const
	{
		return r * sin(phi);
	}
	Complex();
	Complex(double digit);
	Complex(double r, double phi);
	friend Complex tg(const Complex& z);
	Complex operator+(const Complex& rhs);
	Complex operator*(const Complex& rhs);
	Complex operator-(const Complex& rhs);
	Complex operator/(const Complex& rhs);
	friend ostream& operator<<(ostream & stream, const Complex& z);
};

Complex y(const Complex& z);

