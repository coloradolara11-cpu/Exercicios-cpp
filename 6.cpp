#include <iostream>

using namespace std;
 int main() {
    int TotalTestes, TestesAprovados;
    double percentual;

    cout << "Digite a quantidade total de testes executados: ";
    cin >> TotalTestes;
    cout << "Digite a quantidade de testes aprovados: ";
    cin >> TestesAprovados;

    percentual = (TestesAprovados * 100.0) / TotalTestes;

    cout << "percentual obtido: " << percentual << "%" << endl;

    if (percentual >= 90.0) {
        cout << "Versao aprovada" << endl;
     } else if (percentual >= 70.0) {
        cout << "Versao requer revisao" << endl;
     } else {
        cout << "Versao Reprovada" << endl;
     }

     return 0;
    }