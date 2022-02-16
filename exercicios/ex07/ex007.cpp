#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale (LC_ALL, "ptb");
	
	int perg1, perg2, perg3;
	
	// Perguntas
	
	cout<<"---Quiz sobre o Batman---" << endl;
	
	cout<<"\n\n 1- Qual verdadeiro nome do herói? \n\n";
	cout<<" 1- Bruce Banner \n 2- Bruce Wayne \n 3- Bruce Rogers \n\n";
	cout<< "Sua resposta: ";
	cin>>perg1;
	
	if(perg1>3 || perg1<0){
		cout<< "\n Resposta inválida! \n";	
	}
	
	cout<<"\n\n-------------\n";
	
	cout<<"\n\n 2- Como ele se torna Batman no filme *Batman Begins*? \n\n";
	cout<<" 1- Faz aulas de Karatê  \n 2- Ele é treinado no Himalaia, na *Liga das Sombras* \n 3- Mordido por um morcego \n\n";
	cout<< "Sua resposta: ";
	cin>>perg2;
	
	if(perg2>3 || perg2<0){
		cout<< "\n Resposta inválida! \n";	
	}
	
	cout<<"\n\n-------------\n";
	
	cout<<"\n\n 3- Que vilão tem a identidade secreta de Jonathan Crane? \n\n";
	cout<<" 1- Espantalho   \n 2- Coringa \n 3- Pinguim  \n\n";
	cout<< "Sua resposta: ";
	cin>>perg3;
	
	if(perg3>3 || perg3<0){
		cout<< "\n Resposta inválida! \n";	
	}
	
	system("cls");
	
	
	// Conferindo respostas
	
	
	// 1 pergunta
	cout<<"\n-- 1 pergunta --\n\n";
	
	switch (perg1){
		case 1:
			cout<< "\n Você errou! \n Resposta: 2- Bruce Wayne \n";
			break;
		case 2:
			cout<< "\n Parabéns! \n Resposta: 2- Bruce Wayne \n";
			break;
		case 3:
			cout<< "\n Você errou! \n Resposta: 2- Bruce Wayne \n";
			break;
	}
	
	// 2 pergunta
	cout<<"\n-- 2 pergunta --\n\n";
	
	switch (perg2){
		case 1:
			cout<< "\n Você errou! \n Resposta: 2- Ele é treinado no Himalaia, na *Liga das Sombras*\n";
			break;
		case 2:
			cout<< "\n Parabéns! \n Resposta: 2- Ele é treinado no Himalaia, na *Liga das Sombras*\n";
			break;
		case 3:
			cout<< "\n Você errou! \n Resposta: 2- Ele é treinado no Himalaia, na *Liga das Sombras*\n";
			break;
	}
	
	// 3 pergunta
	cout<<"\n-- 3 pergunta --\n\n";
		
		switch (perg3){
		case 1:
			cout<< "\n Parabéns! \n Resposta: 1- Espantalho\n";
			break;
		case 2:
			cout<< "\n Você errou! \n Resposta: 1- Espantalho\n";
			break;
		case 3:
			cout<< "\n Você errou! \n Resposta: 1- Espantalho\n";
			break;
	}	
	
	return 0;
}
