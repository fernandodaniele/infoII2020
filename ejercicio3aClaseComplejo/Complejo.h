#ifndef MAIN_H
#define MAIN_H

//Definición del tipo de dato abstracto Complejo
class Complejo{
	public: 
		Complejo(); 									//Constructor
		Complejo sumaComplejo(Complejo a);
		Complejo restaComplejo(Complejo a);
		Complejo &establecerComplejo(double real, double imaginario);
		Complejo &establecerReal(double real);
		Complejo &establecerImaginario(double imaginario);
		Complejo &imprimirComplejo ();
		double obtenerReal() const;
		double obtenerImaginario() const;
		
	private:
		double p,q; //p parte real, q parte imaginaria	
};

#endif
