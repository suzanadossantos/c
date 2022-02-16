#include <iostream>
#include <locale> 
using namespace std;

// Calculando a idade do usuário! 

int main(){
	setlocale(LC_ALL, "ptb"); 
	int ano_n, ano_a;
	cout<< "---Calculando sua idade--- \n";
	cout<< "- Em que ano você nasceu? \n";
	cin>> ano_n;
	cout<< "- Em qual ano você está? \n";
	cin>> ano_a;
	cout<< "Você tem " << ano_a - ano_n << " anos!";
}
