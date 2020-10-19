#include <iostream>
#include "Empleado.h"
#include "Repartidor.h"
#include "Comercial.h"

using std::cout;
using std::endl;

int main(){
	Repartidor a("Pedro",30,50000,1);
	Repartidor b("Rosa",22,50000,3);
	Comercial c("Juan",25,50000,24999);
	Comercial d("Marta",33,50000,25001);
	
	cout << "El salario de " << a.obtNombre() << " es ";
	cout << a.obtSalario() <<endl;
	cout << "El salario de " << b.obtNombre() << " es ";
	cout << b.obtSalario() <<endl;
	cout << "El salario de " << c.obtNombre() << " es ";
	cout << c.obtSalario() <<endl;
	cout << "El salario de " << d.obtNombre() << " es ";
	cout << d.obtSalario() <<endl;
	
	return 0;
}
