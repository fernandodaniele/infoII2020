#include "Producto.h"

Producto::Producto()
{
	estNombre("");
	estPrecio(0);
}
Producto::Producto(string n, float p)
{
	estNombre(n);
	estPrecio(p);
}
float Producto::calcular(int cantidad)
{
	return (cantidad*precio);
}
void Producto::estNombre(string n)
{
	nombre = n;	
}
void Producto::estPrecio(float p)
{
	precio = p;
}
string Producto::obtNombre()
{
	return nombre;
}
float Producto::obtPrecio()
{
	return precio;
}
