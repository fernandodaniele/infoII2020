#include <iostream>
#include "Complejo.h"

using std::cout;
using std::endl;

int main(){
	Complejo n1,n2,n3;
	n1.establecerComplejo(7,11);
	cout << "El primer numero es: ";
	n1.imprimirComplejo();
	n2.establecerComplejo(4,5);
	cout << "El segundo numero es: ";
	n2.imprimirComplejo();
	cout << "La suma es: ";
	n3 = n1.sumaComplejo(n2);
	n3.imprimirComplejo();
	n3 = n1.restaComplejo(n2);
	cout << "La resta es: ";
	n3.imprimirComplejo();
}
