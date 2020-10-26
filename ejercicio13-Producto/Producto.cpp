#include "Producto.h"

Producto::Producto()
{
	estNombre("");
	estPrecio(0);
}
Producto::Producto(string n, int p)
{
	estNombre(n);
	estPrecio(p);
}
long Producto::calcular(int cantidad)
{
	return (cantidad*precio);
}
void Producto::estNombre(string n)
{
	nombre = n;	
}
void Producto::estPrecio(long p)
{
	precio = p;
}
string Producto::obtNombre()
{
	return nombre;
}
long Producto::obtPrecio()
{
	return precio;
}
