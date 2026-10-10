#include <iostream>

using namespace std;

int main() {
    double horas1, horas2, total;

    cout << "Digite as horas previstas para a funcionalidade 1 ";
    cin >> horas1;
    cout << "Digite as horas previstas para a funcionalidade 2 ";
    cin >> horas2;

    total = horas1 + horas2;

    cout << "Total de horas previstas para o desenvolvimento: " << total << " Horas" << endl;

    return 0;
}