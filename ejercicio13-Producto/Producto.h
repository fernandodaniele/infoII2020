#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto {
	public:
		Producto();
		Producto(string n, int p);
		long calcular(int);
		void estNombre(string);
		void estPrecio(long);
		string obtNombre();
		long obtPrecio();
	protected:
		long precio;
	private:
		string nombre;	
};

#endif
