#include <iostream>
#include <locale.h>
#include "Cilindro.h"


using namespace std;

int main (void){
	
	int escolha1, escolha2;
	
	setlocale(LC_ALL,"Portuguese");
		Cilindro cilindro; //objeto da classe Cilindro do tipo cilindro
		cout<<"				�_�_�_ C�LCULO - QUEST�O DE OTIMIZA��O 9 _�_�_�\n\n";
		cout<<"\n Este programa calcula as dimens�es que minimizam o custo do material para construir uma embalagem cil�ndrica \naberta em cima ou com tampa. ";
	
		
		cout<<"\n\n VALORES CONHECIDOS:\n";
		cout<<" VOLUME: 375*PI^3 cm^3. \n CUSTO DO MATERIAL NA BASE: R$ 0,15 por cm^2.\n CUSTO DO MATERIAL NA LATERAL: R$ 0,05 por cm^2.";
	
		do{
		cout<<" \n\nO cil�ndro possui uma tampa?\n 1-SIM\n 2-N�O\n";
		cin>>escolha2;
		
		switch(escolha2){
		
		case 1:
		{
				cout<<"\n\n\n\n Com base nisso podemos concluir os seguintes valores: \n";
		
		//chamando o raio definido no header "Cilindro"
		cout<<"\nRAIO com Tampa: "<<cilindro.raioTampa<<" cm.";
		
		//calculando a altura com base no raio
		cout<<"\nAltura com tampa: "<<cilindro.CalcularAlturaTampa(cilindro.raioTampa)<<" cm.";
		
		do{
			cout<<"\n\n\n\n O raio atual �: "<<cilindro.raioTampa<<". \n Deseja alter�-lo?\n\n";
			cout<<" 1- SIM\n 2- N�O\n ";
			cin>>escolha1;
			
			switch(escolha1){
			case 1:
				{
					cout<<" Diga o novo valor do raio em cm: ";
					cin>>cilindro.raioTampa;
					
					//calculando o custo total
					cilindro.CalcularCustoTampa();
					break;
				}
			case 2:
				{
					//calculando o custo total
					cilindro.CalcularCustoTampa();
					break;
				}
				
			}
			
			if(escolha1>2 || escolha1<1){
				system("cls");
				cout<<" \n\nDIGITE VALORES V�LIDOS!!!";
				
			}
			
		}while(escolha1>2 || escolha1<1);
		
		break;
		}
		
		
		case 2:
		{
		cout<<"\n\n\n\n Com base nisso podemos concluir os seguintes valores: \n";
		
		//chamando o raio definido no header "Cilindro"
		cout<<"\nRAIO: "<<cilindro.raio<<" cm.";
		
		//calculando a altura com base no raio
		cout<<"\nAltura: "<<cilindro.CalcularAltura(cilindro.raio)<<" cm.";
		
		do{
			cout<<"\n\n\n\n O raio atual �: "<<cilindro.raio<<". \n Deseja alter�-lo?\n\n";
			cout<<" 1- SIM\n 2- N�O\n ";
			cin>>escolha1;
			
			switch(escolha1){
			case 1:
				{
					cout<<" Diga o novo valor do raio em cm: ";
					cin>>cilindro.raio;
					
					//calculando o custo total
					cilindro.CalcularCusto();
					cout<<"\n\nEsse n�o � o valor otimizado para esta embalagem. Que tal tentar um raio de 5cm? Dessa forma o Custo total seria de \napenas R$ 35,3429!";
					break;
				}
			case 2:
				{
					//calculando o custo total
					cilindro.CalcularCusto();
					cout<<"\n\nEsse seria o pre�o otimizado para a produ��o da embalagem";
					break;
				}
				
			}
			
			if(escolha1>2 || escolha1<1){
				system("cls");
				cout<<" \n\nDIGITE VALORES V�LIDOS!!!";
				
			}
			
		}while(escolha1>2 || escolha1<1);
		
		break;
		}
		
	}
	if(escolha2>2 || escolha2<1){
				system("cls");
				cout<<" \n\nDIGITE VALORES V�LIDOS!!!";
				
			}	
	}while(escolha2>2 || escolha2<1);	
		
	return 0;
}
