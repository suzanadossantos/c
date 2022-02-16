#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, media;
	cout<<"Informe suas notas \n";
	cout<<"Primeira nota: \n";
	cin>>n1;
	cout<<"Segunda nota: \n";
	cin>>n2;
	cout<<"Terceira nota: \n";
	cin>>n3;
	cout<<"---Resultado---\n";
	media = (n1 + n2 + n3)/3;
	cout<< "Sua média foi = " << media;
}
