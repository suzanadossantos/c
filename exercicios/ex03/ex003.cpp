#include <iostream>
#include <locale> 
using namespace std;

// Calculadora! 

int main(){
	setlocale(LC_ALL, "ptb"); 

	int num, num_1, num_2;
	cout<< "---Calculadora--- \n";
	cout<< "Qual operação você deseja fazer? \n";
	cout<< "1- Adição ";
	cout<< "2- Subtração ";
	cout<< "3- Multiplicação ";
	cout<< "4- Divisão ";
	cout<< "outros- exit \n\n";
	cout<< "Número: \n";
	cin>> num;
	
	if (num <= 4){
		cout<< "Digite o primeiro número: \n";
		cin>> num_1;
		cout<< "Digite o segundo número: \n";
		cin>> num_2;
		
		if(num == 1){
			cout<< "--Resposta-- \n";
			cout<< num_1 + num_2;
		} else if(num == 2){
			cout<< "--Resposta-- \n";
			cout<< num_1 - num_2;
		} else if(num == 3){
			cout<< "--Resposta-- \n";
			cout<< num_1 * num_2;
		} else{
			cout<< "--Resposta-- \n";
			cout<< num_1 / num_2;
		}
		
	} else {
		cout<< "Ok!";
	}	
}
