#include <iostream>
#include <locale> 
using namespace std;

// Calculadora! 

int main(){
	setlocale(LC_ALL, "ptb"); 
	
	int num;
	cout<< "---Calculadora--- \n";
	cout<< "Qual operação você deseja fazer? \n";
	cout<< "1- Adição ";
	cout<< "2- Subtração ";
	cout<< "3- Multiplicação ";
	cout<< "4- Divisão";
	cout<< "Número: \n";
	cin>> num;
	
	if(num != 0){
		cout<< "Digite o primeiro número: \n";
		cin>> num_1;
		cout<< "Digite o segundo número: \n";
		cin>> num2;
	} else if(num == 1){
		
	} else if(num == 2){
		
	}
	
}
