#include <iostream>
#include "Producto.h"
#include "Perecedero.h"
#include "NoPerecedero.h"

using std::cout;
using std::endl;

int main()
{
	Producto a[3];
	Perecedero b[3];
	NoPerecedero c[3];
	
	a[0].estNombre("Silla");
	a[0].estPrecio(1000);
	a[1].estNombre("Mesa");
	a[1].estPrecio(1000);
	a[2].estNombre("Mantel");
	a[2].estPrecio(1000);
	b[0].estNombre("Jamon");
	b[0].estPrecio(1000);
	b[0].estDiasCaducar(1);
	b[1].estNombre("Crema");
	b[1].estPrecio(1000);
	b[1].estDiasCaducar(2);
	b[2].estNombre("Queso");
	b[2].estPrecio(1000);
	b[2].estDiasCaducar(3);
	c[0].estNombre("Arroz");
	c[0].estPrecio(1000);
	c[1].estNombre("Polenta");
	c[1].estPrecio(1000);
	c[2].estNombre("Fideos");
	c[2].estPrecio(1000);
	
	for (int i = 0; i<3; i++)
	{
		cout << "El precio de " << i+1 << " " << a[i].obtNombre() << " es ";
		cout << a[i].calcular(i+1) << endl;
		
		cout << "El precio de " << i+1 << " " << b[i].obtNombre() << " es ";
		cout << b[i].calcular(i+1) << endl;
		
		cout << "El precio de " << i+1 << " " << c[i].obtNombre() << " es ";
		cout << c[i].calcular(i+1) << endl;
	}
	
	return 0;
}
