#include <iostream>
using namespace std;

int main() {
    int producao[7];
    int total = 0;
    int maior;
    int diaMaior = 0;
    float media;

    for (int i = 0; i < 7; i++) {
        cout << "Digite a producao do dia " << i + 1 << ": ";
        cin >> producao[i];
    }

    maior = producao[0];

    cout << "Producao da semana: " << endl;

    for (int i = 0; i < 7; i++) {
        cout << "dia " << i + 1 << ": " 
             << producao[i] << endl;

        total = total + producao[i];

        if (producao[i] > maior) {
            maior = producao[i]; 
            diaMaior = i;
        }
    }

    media = total / 7.0;

    cout << "Producao total: " << total << endl;
    cout << "Media diaria: " << media << endl;
    cout << "Dia de maior producao: " << diaMaior + 1 << endl;

    return 0;
}
