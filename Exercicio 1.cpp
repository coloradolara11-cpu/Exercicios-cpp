#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int idade;
    string linguagem;
    int projetos;

    cout << "Digite o nome ";
    getline(cin, nome);
    cout << "Digite a idade ";
    cin >> idade;
    cout << "Digite a linguagem de programacao preferida ";
    cin >> linguagem;
    cout << "Digite a quantidade de projetos desenvolvidos ";
    cin >> projetos;
    
    cout << "\n--- Dados do Desenvolvedor ---" << endl;
    cout << "Nome " << nome << endl;
    cout << "Idade " << idade << endl;
    cout << "Linguagem preferida " << linguagem << endl;
    cout << "Projetos desenvolvidos " << projetos << endl;

    return 0;
}