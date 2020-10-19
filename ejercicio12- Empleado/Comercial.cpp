#include "Comercial.h"

Comercial::Comercial(string n, int e, long s, double c):Empleado (n,e,s)
{
	estComision(c);
	if((e>30)&&(c>25000))
	{
		estPlus (5000);
	}
	else
	{
		estPlus(0);
	}
}
double Comercial::obtComision()
{
	return comision;
}
void Comercial::estComision(double c)
{
	comision = c;
}
