#include <iostream>
#include "Complejo.h"

using std::cout;
using std::endl;

int main(){
	Complejo n1,n2,n3;
	n1.establecerComplejo(1,2);
	cout << "El primer numero es: ";
	n1.imprimirComplejo();
	n2.establecerComplejo(3,1);
	cout << "El segundo numero es: ";
	n2.imprimirComplejo();
	cout << "La suma es: ";
	n3 = n1.sumaComplejo(n2);
	n3.imprimirComplejo();
	n3 = n1 + n2;
	cout << "La suma con sobrecarga es: ";
	n3.imprimirComplejo();
	n3 = n1.restaComplejo(n2);
	cout << "La resta es: ";
	n3.imprimirComplejo();
	n3 = n1 - n2;
	cout << "La resta con sobrecarga es: ";
	n3.imprimirComplejo();
	n3 = n1 * n2;
	cout << "La multiplicación es: ";
	n3.imprimirComplejo();
	if(n1==n2){
		cout << "Los numeros complejos son iguales" << endl;
	}
	else{
		cout << "Los numeros complejos son distintos" << endl;
	}
		if(n1>n2){
		cout << "El modulo de n1 es mayor al de n2" << endl;
	}
	else{
		cout << "El modulo de n2 es mayor al de n1" << endl;
	}
}
