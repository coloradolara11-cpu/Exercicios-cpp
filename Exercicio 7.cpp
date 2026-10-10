#include <iostream>

using namespace std;

int main() {
    int codigo;

    cout << "Digite o codigo da prioridade (1-baixa, 2-media, 3-alta, 4-critica): ";
    cin >> codigo:

    switch (codigo) {
        case 1:
            cout << "baixa" << endl;
            break;
        case 2:
            cout << "media" << endl;
            break;
        case 3:
            cout << "alta" << endl;
            break;
        case 4:
            cout << "critica" << endl;
            break;
        default:
            cout <<"Prioridade invalida" << endl;
            break;
    }
    
    return 0;
    
    }