#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
	public:
		Empleado(string n, int e, long s);
		string obtNombre();
		int obtEdad();
		long obtSalario();
		int obtPlus();
		void estNombre(string);
		void estEdad (int);
		void estSalario(long);
		void estPlus(int);
		
	private:
		string nombre;
		int	edad;
		long salario;
		int	plus;
			
};

#endif
