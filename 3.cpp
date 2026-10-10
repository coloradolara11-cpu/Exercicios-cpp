#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Digite a idade do candidato: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Pode participar do processo seletivo" << endl;
    } else {
        cout << "Nao pode participar do processo seletivo" << endl;
    }
    
    return 0;
}
