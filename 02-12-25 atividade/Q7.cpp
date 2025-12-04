#include <iostream> 

using namespace std;

    // crie um vetor com 10 numeros digitados pelo usuario.
    // depois peca um numero x e informe:
    // se x esta no vetor
    // em qual posicao ele aparece pela primeira vez

int main(){

    int vec[10];

    cout << "Digite 10 números: " << endl;
    for(int i = 0; i <10; i++){
        cin >>  vec[i];
    }

    int x;
    cout << "Digite o número X que deseja procurar: ";
    cin >> x;


    bool achar = false;
    int pos = -1;

    for (int i = 0; i < 10; i++){
        if(vec[i] == x){
            achar = true;
            pos = i;
            break;
        }
    }

    if(achar) {
        cout << "X existe no vetor, posição: " << pos;
    }
    else{
        cout << "X NÃO existe no vetor";
    }

    return 0;

}
