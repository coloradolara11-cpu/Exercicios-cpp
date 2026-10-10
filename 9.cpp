#include <iostream>
#include <string>

using namespace std;

int main() {
    string nometarefa;
    double horas;

    cout << "Digite o nome da tarefa: ";
    getline(cin, nometarefa);
    cout << "Digite a quantidade estimada de horas: ";
    cin >> horas;

    cout << "Tarefa: " << nometarefa << endl;
    cout << "Classificacao: ";

    if (horas <= 4) {
        cout << "Tarefa simples" << endl;
    } else if (horas <= 12) {
        cout << "Tarefa media" << endl;
    } else if (horas <= 24) {
        cout << "Tarefa complexa" << endl;
    } else {
        cout << "Tarefa muito complexa" << endl;
    }

    return 0;
}