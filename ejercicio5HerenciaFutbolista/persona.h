#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
	public:
		Persona (string n, string a);
		string obtenerNombre ();
		string obtenerApellido ();
		void establecerNombre (string n);
		void establecerApellido (string a);
	
	protected:
		string nombre;
		string apellido;
};

#endif
