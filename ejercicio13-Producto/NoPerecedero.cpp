#include "Noperecedero.h"

NoPerecedero::NoPerecedero():Producto()
{
}

NoPerecedero::NoPerecedero(string n, int p):Producto(n,p)
{
}
void NoPerecedero::estTipo(int t)
{
	tipo = t;
}
int NoPerecedero::obtTipo()
{
	return tipo;
}
