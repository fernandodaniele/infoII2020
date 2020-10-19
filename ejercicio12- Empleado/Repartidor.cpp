#include "Repartidor.h"

Repartidor::Repartidor(string n, int e, long s, int z):Empleado (n,e,s)
{
	estZona (z);
	if((e<25)&&(z==3))
	{
		estPlus (5000);
	}
	else
	{
		estPlus(0);
	}
}
int Repartidor::obtZona()
{
	return zona;
}
void Repartidor::estZona(int z)
{
	zona = z;
}
