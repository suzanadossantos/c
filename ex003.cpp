#include <iostream>
#include <locale> 
using namespace std;

// Calculadora! 

int main(){
	setlocale(LC_ALL, "ptb"); 
	
	int num;
	cout<< "---Calculadora--- \n";
	cout<< "Qual opera��o voc� deseja fazer? \n";
	cout<< "1- Adi��o ";
	cout<< "2- Subtra��o ";
	cout<< "3- Multiplica��o ";
	cout<< "4- Divis�o";
	cout<< "N�mero: \n";
	cin>> num;
	
	if(num != 0){
		cout<< "Digite o primeiro n�mero: \n";
		cin>> num_1;
		cout<< "Digite o segundo n�mero: \n";
		cin>> num2;
	} else if(num == 1){
		
	} else if(num == 2){
		
	}
	
}
