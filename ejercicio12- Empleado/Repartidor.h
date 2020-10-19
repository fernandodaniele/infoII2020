#ifndef REPARTIDOR_H
#define REPARTIDOR_H

#include "Empleado.h"

class Repartidor : public Empleado{
	public:
		Repartidor(string n, int e, long s, int z);
		int obtZona();
		void estZona(int);
	private:
		int zona;
};

#endif
