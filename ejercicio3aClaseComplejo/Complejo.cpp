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
Complejo &Complejo::establecerComplejo (double real, double imaginario)
{
	establecerReal(real);
	establecerImaginario(imaginario);
	return *this;
}

Complejo &Complejo::establecerReal (double real)
{
	p = real;
	return *this;
}

Complejo &Complejo::establecerImaginario (double imaginario)
{
	q = imaginario;
	return *this;
}

Complejo &Complejo::imprimirComplejo()
{
	cout<< p << " + ("<< q << "i)\n";
	return *this;
}

double Complejo::obtenerReal() const
{
	return p;
}

double Complejo::obtenerImaginario() const
{
	return q;
}

