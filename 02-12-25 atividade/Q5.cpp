#include <iostream>

using namespace std;

float vetor[5];
int soma;

int main(){
// crie um programa que:
// possua um vetor de 5 numeros inteiros
// peça ao usuario para digitar os valores
// exiba todos os valores digitados


     for(int i = 0; i <5; i++){
           cout << "Digite um valor " << (i+1) <<": ";
           cin >> vetor[i];
     }
     cout << "Valores digitados: ";
     for (int i = 0; i <5; i++){
           cout << vetor[i] << " ";
          
     }
     cout << endl;

    // usando o vetor do exericio anterior, calcule e exiba:
    // a soma total dos numeros
    // a media artmetica dos valores
     cout << "Soma dos valores:";
     for(int i = 0; i <5; i++){
           soma += vetor[i];
           cout << soma << " ";
     }
     cout << endl;


     cout << "Média aritmética: " << soma / 5 << endl;
}
