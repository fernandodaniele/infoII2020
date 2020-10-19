#include "Empleado.h"

Empleado::Empleado(string n, int e, long s)
{
	estNombre(n);
	estEdad(e);
	estSalario(s);
	plus = 5000;
}
string Empleado::obtNombre()
{
	return nombre;
}
int Empleado::obtEdad()
{
	return edad;
}
long Empleado::obtSalario()
{
	return (salario+plus);
}
int Empleado::obtPlus()
{
	return plus;
}
void Empleado::estNombre(string n)
{
	nombre = n;
}
void Empleado::estEdad (int e)
{
	edad = e;
}
void Empleado::estSalario(long s)
{
	salario = s;
}
void Empleado::estPlus(int p)
{
	plus = p; 
}
