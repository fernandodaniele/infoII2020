#include <iostream>
#include "rectangulo.h"
#include "cuadrado.h"

using std::cout;
using std::endl;

int main ()
{
	Cuadrado uno(2,4,4); //(x,y,largo)
	Cuadrado dos(1,4,5);
	cout << "El area del cuadrado uno es " << uno.area() << "\n";
	cout << "El area del cuadrado dos es " << dos.area() << "\n";
	cout << "El perimetro del cuadrado dos es " << dos.perimetro() << "\n";
	if(uno.estaDentroDe(dos))
	{
		cout << "El cuadrado uno esta dentro del cuadrado dos\n";
	 } 
	else
	{
		cout << "El cuadrado uno no esta dentro del cuadrado dos\n";
	}
		if(dos.estaDentroDe(uno))
	{
		cout << "El cuadrado dos esta dentro del cuadrado uno\n";
	 } 
	else
	{
		cout << "El cuadrado dos no esta dentro del cuadrado uno\n";
	}
	
	cout << "El area de la interseccion es " << uno.areaInterseccionCon(dos) << "\n";	
}

