#include <iostream>
#include <locale> 
using namespace std;

// Calculando a idade do usu�rio! 

int main(){
	setlocale(LC_ALL, "ptb"); 
	int ano_n, ano_a;
	cout<< "---Calculando sua idade--- \n";
	cout<< "- Em que ano voc� nasceu? \n";
	cin>> ano_n;
	cout<< "- Em qual ano voc� est�? \n";
	cin>> ano_a;
	cout<< "Voc� tem " << ano_a - ano_n << " anos!";
}
