#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "ptb"); 
    
    char resposta[100];

    cout<< "---Suas compras---\n";
    cout<< "Digite o nome da compra e depois o valor: \n";
    cout<< "-Se você não tiver mais produtos digite 0 \n";
    cin>> resposta;

    if(resposta != "0"){
        cout<< "Produto: \n";
    }
    
}

