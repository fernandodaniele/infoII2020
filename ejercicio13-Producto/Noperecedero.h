#ifndef NOPERECEDERO_H
#define NOPERECEDERO_H

#include <string>
#include "Producto.h"

using namespace std;

class NoPerecedero : public Producto {
	public:
		NoPerecedero();
		NoPerecedero(string n, float p);
		void estTipo(int);
		int obtTipo();
	private:
		int tipo;
};

#endif
