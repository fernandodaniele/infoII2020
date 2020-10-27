#include "Perecedero.h"

Perecedero::Perecedero():Producto()
{
}
Perecedero::Perecedero(string n, float p):Producto(n,p)
{
}
float Perecedero::calcular(int cantidad)
{
	float precioTotal = cantidad * precio;
	switch(diasCaducar)
	{
		case 1:
			precioTotal = precioTotal / 4;
			break;
		case 2:
			precioTotal = precioTotal / 3;
			break;
		case 3:
			precioTotal = precioTotal / 2;
			break;
		default:
			break;
	}
	return precioTotal;
}
void Perecedero::estDiasCaducar(int d)
{
	diasCaducar = d;
}
int Perecedero::obtDiasCaducar()
{
	return diasCaducar;
}
