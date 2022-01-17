#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "ptb"); 
    
    char nome_prod[]= "";
    float preco_prod;
    

    cout<< "---Suas compras---\n";
    cout<< "Digite o nome da compra e depois o valor: \n";
	cout<< "- Produto:  \n";
	cin>> nome_prod;
	cout<< "- Preço: \n";
	cin>> preco_prod;
	cout<< "--Fim das compras-- \n";
	cout<< "Produtos: " << nome_prod[0] << nome_prod[1] << " = "  << preco_prod;
    
}

