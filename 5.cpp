#include <iostream>

using namespace std;

int main() {
    double usoCpu;

    cout << "Digite a percentagem de utilizacao da CPU: ";
    cin >> usoCpu;

    cout << "Uso da CPU: " << usoCpu << "%" << endl;
    if (usoCpu < 50) {
        cout << "Status: Uso normal" << endl;
    } else if (usoCpu <= 80) {
        cout << "Status: Atencao" << endl;
    } else {
        cout << "Status: Uso critico" << endl;
    }

    return 0;
}
