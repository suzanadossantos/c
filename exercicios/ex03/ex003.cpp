#include <iostream>
#include <locale> 
using namespace std;

// Calculadora! 

int main(){
	setlocale(LC_ALL, "ptb"); 

	int num, num_1, num_2;
	cout<< "---Calculadora--- \n";
	cout<< "Qual opera��o voc� deseja fazer? \n";
	cout<< "1- Adi��o ";
	cout<< "2- Subtra��o ";
	cout<< "3- Multiplica��o ";
	cout<< "4- Divis�o ";
	cout<< "outros- exit \n\n";
	cout<< "N�mero: \n";
	cin>> num;
	
	if (num <= 4){
		cout<< "Digite o primeiro n�mero: \n";
		cin>> num_1;
		cout<< "Digite o segundo n�mero: \n";
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
