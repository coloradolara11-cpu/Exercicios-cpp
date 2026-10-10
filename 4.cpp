#include <iostream>

using namespace std;

int main() {
    int senha;

    cout << "Digite a senha numerica: ";
    cin >> senha;

    if (senha == 2026) {
        cout << "Acesso permitido" << endl;
    } else {
        cout << "Acesso negado" << endl;
    }

    return 0;
    }
