#include "Perecedero.h"

Perecedero::Perecedero():Producto()
{
}
Perecedero::Perecedero(string n, int p):Producto(n,p)
{
}
long Perecedero::calcular(int cantidad)
{
	long precioTotal = cantidad * precio;
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
