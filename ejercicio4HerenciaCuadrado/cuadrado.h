#include "rectangulo.h"

#ifndef CUADRADO_H //directivas de preprocesador para evitar
#define CUADRADO_H // inclusiones múltiples del archivo de encabezado

class Cuadrado : public Rectangulo {
	public:
		Cuadrado(unsigned int posX, unsigned int posY, unsigned int largo);
};

#endif
