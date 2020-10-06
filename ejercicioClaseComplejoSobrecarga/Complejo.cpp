#include <iostream>
#include <cmath>
#include "Complejo.h"

using std::cout;
using std::endl;

Complejo::Complejo ()
{
	p = 0;
	q = 0;
}

Complejo::Complejo (double real, double imaginario)
{
	p = real;
	q = imaginario;
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

const Complejo &Complejo::operator+(Complejo &c) {
double real= p + c.p;
double imaginario = q + c.q;
return Complejo(real, imaginario);
}

const Complejo &Complejo::operator-(Complejo &c) {
	double real= p - c.p;
	double imaginario = q - c.q;
	return Complejo(real, imaginario);
}

const Complejo &Complejo::operator*(Complejo &c) {
//	(a + b*i) * (c + d*i) = a*c + a*d*i + b*i*c + b*i*d*i = (a*c -b*d) + (a*d+b*c) i
	double real= (p*c.p - q*c.q);
	double imaginario = (p*c.q+ q*c.p);  
	return Complejo(real, imaginario);
}
//n1 += n2;
const Complejo &Complejo::operator+=(Complejo &c) {
p += c.p;
q += c.q;
return *this;
}

const Complejo &Complejo::operator-=(Complejo &c) {
p -= c.p;
q -= c.q;
return *this;
}

const Complejo &Complejo::operator*=(Complejo &c) {
p *= c.p;
q *= c.q; //VERRRRRRR
return *this;
}
// n1 == n2 ???
bool Complejo::operator==(const Complejo &c) const
{
	if((p==c.p)&&(q==c.q)){   // ambos tienen que ser verdadero
		return true;
	}
	else{
		return false;
	}
}

//compara el módulo de cada número complejo
bool Complejo::operator>(const Complejo &c) const
{
	double a = sqrt(pow(p,2)+pow(q,2));
	double b = sqrt(pow(c.p,2)+pow(c.q,2));
	if(a>b){
		return true;
	}
	else{
		return false;
	}
}

bool Complejo::operator<(const Complejo &c) const
{
	double a = sqrt(pow(p,2)+pow(q,2));
	double b = sqrt(pow(c.p,2)+pow(c.q,2));
	if(a<b){
		return true;
	}
	else{
		return false;
	}
}

