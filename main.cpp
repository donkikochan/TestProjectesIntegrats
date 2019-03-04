#include "complex.h"
#include <iostream>

using namespace std;

Complex funcio2(Complex& c1)
{
	Complex c2 = c1.suma(c1) + c1.suma(c1);;
	
	c2.mostra();
	return c2;
}

void funcio1(const Complex& c1)
{
	Complex c2;
	c2.llegeix();
	Complex c3 = c1.suma(c2);
	c1 = funcio2(c1);
	c1.mostra();
}

int main()
{
	Complex a, b;

	funcio1(a);
	funcio2(b);
	return 0;
}
