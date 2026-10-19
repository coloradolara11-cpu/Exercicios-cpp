#include <iostream>
using namespace std;

int main() {
    int estoque[6];

    for (int i = 0; i < 6; i++) {
        cout << "Quantidade do componente " << i + 1 << ": ";
        cin >> estoque[i];
    }

    for (int i = 0; i < 6; i++) {
        if (estoque[i] <= 10) {
            cout << "Componente " << i + 1 
                << ": estoque baixo" << endl;
        }
        else if (estoque[i] <= 30) {
            cout << "Componente " << i + 1
                << ": estoque medio" << endl;
        }
        else {
            cout << "Componente " << i + 1 
                << ": estoque adequado " << endl; 
        }
    }

    return 0;
}
