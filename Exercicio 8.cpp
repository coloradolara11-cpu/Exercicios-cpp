#include <iostream>

using namespace std;

int main() {
    int idade, codigo;

    cout << "Digite a idade do usuario: ";
    cin >> idade;
    cout << "Digite o codigo de acesso: ";
    cin >> codigo;

    if (idade >= 18 && codigo == 1234) {
        cout >> idade;
        cout << "Acesso autorizado" << endl;
    } else {
        cout << "Acesso negado" << endl;
    }

    return 0;
}