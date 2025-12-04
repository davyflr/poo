//Crie um programa que:
//Possua um vetor de 5 números inteiros
//Peça ao usuário para digitar os valores
//Exiba todos os valores digitados

include <iostream>

using namespace std;

float vetor[5];

int main(){
    
    for(int i = 0; i <5; i++){
        cout << "Digite um valor " << (i+1) <<": ";
        cin >> vetor[i];
    }
    cout << "Valores digitados: ";
    for (int i = 0; i <5; i++){
        cout << vetor[i] << " ";
        
    }
    cout << endl;
    
}
