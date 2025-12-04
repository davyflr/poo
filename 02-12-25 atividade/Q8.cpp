#include <iostream>

using namespace std;
// crie um vetor de 6 nomes (strings)
// o programa deve:
// ler os nomes
// perguntar um nome a ser buscado
// informar se ele existe no vetor

int main() {

    string nomes[6];

    cout << "Digite 6 nomes:" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> nomes[i];
    }

    string busca;
    cout << "\nDigite o nome que deseja procurar: ";
    cin >> busca;

    bool encontrado = false;
    int pos = -1;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            pos = i;
            break;
        }
    }

    if (encontrado) {
        cout << "\nO nome existe no vetor! Posicao: " << pos << endl;
    } else {
        cout << "\nO nome NAO existe no vetor." << endl;
    }

    return 0;
}
