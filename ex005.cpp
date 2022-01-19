#include <iostream>
#include <locale> 
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb"); 
	
	int nota_min, nota_teste, nota_prova, media;
	cout<< "---Calculando sua média!---\n";
	cout<< "Digite sua nota de teste e prova, e descubra sua média \n\n";
	cout<< "Qual é a nota mínima para passar na matéria? \n";
	cin>> nota_min;
	cout<< "Nota do teste: \n";
	cin>> nota_teste;
	cout<< "Nota da prova: \n";
	cin>> nota_prova;
	media = (nota_teste + nota_prova)/2;
	cout<< "Sua média: " << media << "\n";
	
	if(media < nota_min){
		cout<< "Infelizmente sua nota está abaixo da média.";
	}else if(media == nota_min){
		cout<< "Sua nota está na média!";
	}else{
		cout<< "Sua nota está acima da média!";
	}

}
