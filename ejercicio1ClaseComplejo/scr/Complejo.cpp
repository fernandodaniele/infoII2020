#include <iostream>
#include "Complejo.h"

using std::cout;
using std::endl;

Complejo::Complejo ()
{
	p = 0;
	q = 0;
}

Complejo Complejo::sumaComplejo(Complejo a)
{	
	Complejo c;
	c.p = p + a.p;
	c.q = q + a.q; 
	return (c);
}
Complejo Complejo::restaComplejo(Complejo a)
{	
	Complejo c;
	c.p = p - a.p;
	c.q = q - a.q; 
	return (c);
}
void Complejo::establecerComplejo (double real, double imaginario)
{
	p = real;
	q = imaginario;
}
void Complejo::imprimirComplejo()
{
	cout<< p << " + ("<< q << "i)\n";
}

