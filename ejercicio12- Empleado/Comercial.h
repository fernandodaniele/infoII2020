#ifndef COMERCIAL_H
#define COMERCIAL_H

#include "Empleado.h"

class Comercial : public Empleado{
	public:
		Comercial(string n, int e, long s, double c);
		double obtComision();
		void estComision(double);
	private:
		double comision;
};

#endif
