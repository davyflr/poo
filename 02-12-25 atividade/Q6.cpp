#include <iostream>

using namespace std;

// leia 8 numeros inteiros para dentro de um vetor e determine:
// o maior valor e em qual posicao ele esta
// o menor valor e e, qual posicao ele esta

int main() {
    int vet[8];
    int maior, menor;
    int posMaior, posMenor;

    for (int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "º numero: ";
        cin >> vet[i];
    }

    maior = menor = vet[0];
    posMaior = posMenor = 0;

    for (int i = 1; i < 8; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posMaior = i;
        }
        if (vet[i] < menor) {
            menor = vet[i];
            posMenor = i;
        }
    }

    cout << "\nMaior valor = " << maior << ", na posicao " << posMaior << endl;
    cout << "Menor valor = " << menor << ", na posicao " << posMenor << endl;

    return 0;
}
