#ifndef MAIN_H
#define MAIN_H

//Definición del tipo de dato abstracto Complejo
class Complejo{
	public: 
		Complejo(); 									//Constructor
		Complejo sumaComplejo(Complejo a);
		Complejo restaComplejo(Complejo a);
		void establecerComplejo(double real, double imaginario);
		void imprimirComplejo();
		
	private:
		double p,q; //p parte real, q parte imaginaria	
};

#endif
