#include <iostream>
#include <locale> 
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb"); 
	
	int nota_min, nota_teste, nota_prova, media;
	cout<< "---Calculando sua m�dia!---\n";
	cout<< "Digite sua nota de teste e prova, e descubra sua m�dia \n\n";
	cout<< "Qual � a nota m�nima para passar na mat�ria? \n";
	cin>> nota_min;
	cout<< "Nota do teste: \n";
	cin>> nota_teste;
	cout<< "Nota da prova: \n";
	cin>> nota_prova;
	media = (nota_teste + nota_prova)/2;
	cout<< "Sua m�dia: " << media << "\n";
	
	if(media < nota_min){
		cout<< "Infelizmente sua nota est� abaixo da m�dia.";
	}else if(media == nota_min){
		cout<< "Sua nota est� na m�dia!";
	}else{
		cout<< "Sua nota est� acima da m�dia!";
	}

}
