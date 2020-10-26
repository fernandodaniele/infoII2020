#ifndef PERECEDERO_H
#define PERECEDERO_H

#include "Producto.h"
#include <string>

using namespace std;

class Perecedero : public Producto {
	public:
		Perecedero();
		Perecedero(string n, int p);
		long calcular(int cantidad);
		void estDiasCaducar(int);
		int obtDiasCaducar();
	private:
		int diasCaducar;
};

#endif
