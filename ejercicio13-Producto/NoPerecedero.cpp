#include "Noperecedero.h"

NoPerecedero::NoPerecedero():Producto()
{
}

NoPerecedero::NoPerecedero(string n, float p):Producto(n,p)
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
