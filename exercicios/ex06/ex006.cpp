#include <iostream>
#include <locale> 
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb"); 
	
	int res_1, res_2, res_3, res_4, certo, errado;
	
	cout<< "---Quiz sobre matemática---\n";
	cout<< "- Digite o número 1, 2 ou 3\n\n";
	
	// 1 pergunta
	cout<< "1- Qual resultado: 23 + 45? \n";
	cout<< "(1)89 (2)68 (3)57 \n";
	cin>>res_1;
	
	if(res_1 >3){
		cout<< "Nenhuma alternativa tem esse número\n";
	}else if(res_1 == 2){
		cout<< "Resposta correta!\n\n";
		certo++;
	}else{
		cout<< "Resposta incorreta!\n";
		cout<< "A resposta certa era: 2\n\n";
		errado++;
	}
	
	// 2 pergunta
	cout<< "2- Qual resultado: 340 - 234? \n";
	cout<< "(1)213 (2)24 (3)106 \n";
	cin>>res_2;
	
	if(res_2 >3){
		cout<< "Nenhuma alternativa tem esse número\n";
	}else if(res_2 == 3){
		cout<< "Resposta correta!\n\n";
		certo++;
	}else{
		cout<< "Resposta incorreta!\n";
			cout<< "A resposta certa era: 3\n\n";
		errado++;
	}
	
	// 3 pergunta
	cout<< "3- Qual resultado: 23 x 8? \n";
	cout<< "(1)156 (2)168 (3)184 \n";
	cin>>res_3;
	
	if(res_3 >3){
		cout<< "Nenhuma alternativa tem esse número\n";
	}else if(res_3 == 3){
		cout<< "Resposta correta!\n\n";
		certo++;
	}else{
		cout<< "Resposta incorreta!\n";
			cout<< "A resposta certa era: 3\n\n";
		errado++;
	}
	
	// 4 pergunta
	cout<< "4- Qual resultado: 57 / 3? \n";
	cout<< "(1)19 (2)8 (3)7 \n";
	cin>>res_4;
	
	if(res_4 >3){
		cout<< "Nenhuma alternativa tem esse número\n";
	}else if(res_4 == 1){
		cout<< "Resposta correta!\n\n";
		certo++;
	}else{
		cout<< "Resposta incorreta!\n";
			cout<< "A resposta certa era: 1\n\n";
		errado++;
	}
	
	cout<< "Seu resultado \n";
	cout<<"Acertos: " << certo << "\n" << "Erros: " << errado;
}
