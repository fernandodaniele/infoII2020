#include "futbolista.h"

Futbolista :: Futbolista (string n, string a, int c) : Persona (n,a)
{
	numero = c;
}

void Futbolista :: establecerNumero (int c)
{
	numero = c;		
}

int Futbolista :: obtenerNumero()
{
	return numero;
}
