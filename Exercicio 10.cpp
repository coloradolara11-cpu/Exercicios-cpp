#include <iostream>
#include <string>

using namespace std;

int main() {
    string cliente;
    int opcaoprojeto;
    char urgente;
    double valorinicial = 0.0, valorfinal = 0.0;
    string nomeprojeto = "";

    cout << "Digite o nome do cliente: ";
    getline(cin, cliente);

    cout << "Escolha o tipo de projeto:\n";
    cout << "1 - Site institucional: R$ 2.000\n";
    cout << "2 - Aplicativo mobile: R$ 5.000\n";
    cout << "3 - Sistema web: R$ 8.000\n";
    cin >> opcaoprojeto;

    switch (opcaoprojeto) {
        case 1:
            valorinicial = 2000.0;
            nomeprojeto = "Site institucional";
            break;
        case 2:
            valorinicial = 5000.0;
            nomeprojeto = "aAplicativo mobile";
            break;
        case 3:
            valorinicial = 8000.0;
            nomeprojeto = "Sistema web";
            break;
        default:
            cout << "opcao invalida!" << endl;
            return 1;
    }

    cout << "O projeto é urgente? (s/n): ";
    cin >> urgente;

    valorfinal = valor inicial;
    if (urgente == 's' || urgente == 's') {
        valorfinal = valorinicial * 0.20;
    }

    cout << "\nCliente: " << cliente << endl;
    cout << "Projeto: " << nomeprojeto << endl;
    cout << "Urgente: " << (urgente == 's' || urgente == 's' ? "s" : "n") << endl;
    cout << "Valor final: R$ " << valorfinal << endl;

    return 0;
}