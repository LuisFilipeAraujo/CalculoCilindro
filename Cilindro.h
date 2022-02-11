#include <iostream>
#include <math.h>

#define PI 3.14159265359

using namespace std;

class Cilindro{
	public:
		double custoTotal, custoTotalTampa, h;
		double raio =  cbrt(37.5/0.3);
		double raioTampa = cbrt(19.89);
		
	public://OPERACOES NECESSARIAS
	
		
		double CalcularAltura(double raio){
			
			h=(375/pow(raio,2));
			
			return h;
		}
		
		double CalcularAlturaTampa(double raioTampa){
			
			h=(375/pow(raioTampa,2));
			
			return h;
		}
	
		void CalcularCusto(){ //Ct=Ab * Cb + Al * Cl
			custoTotal = (0.15*PI*pow(raio,2)) + 37.5*PI/raio;
			cout<<"\nCusto total: R$ "<<custoTotal;
		}
		
		void CalcularCustoTampa(){ //Ct=Ab * Cb + Al * Cl
			//custoTotalTampa = (0.3*PI*pow(raioTampa,2)) + 37.5/raioTampa;
			custoTotalTampa = (2*PI*pow(raioTampa,2)*0.15)+(2*PI*raioTampa*h*0.05);
			cout<<"\nCusto total com tampa: R$ "<<custoTotalTampa;
		}
		
		
};
