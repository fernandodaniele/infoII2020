#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H

#include "persona.h"

class Futbolista : public Persona{
	public:
		Futbolista (string n, string a, int c);
		void establecerNumero (int c);
		int obtenerNumero();
		
	private:
		int numero;		
};
#endif
