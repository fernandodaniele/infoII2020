#ifndef MAIN_H
#define MAIN_H

//Definición del tipo de dato abstracto Complejo
class Complejo{
	public: 
		Complejo(); 									//Constructor
		Complejo(double, double); //parte real y parte imaginaria
		Complejo sumaComplejo(Complejo a);
		Complejo restaComplejo(Complejo a);
		void establecerComplejo(double real, double imaginario);
		void imprimirComplejo();
		
		const Complejo &operator+(Complejo &c);
		const Complejo &operator-(Complejo &c); 
		const Complejo &operator*(Complejo &c);
		const Complejo &operator+=(Complejo &c);
		const Complejo &operator-=(Complejo &c); 
		const Complejo &operator*=(Complejo &c);
		bool operator==(const Complejo &c) const;
		bool operator>(const Complejo &c) const;
		bool operator<(const Complejo &c) const;   

	private:
		double p,q; //p parte real, q parte imaginaria	
};

#endif
