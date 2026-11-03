#include <iostream>
using namespace std;

int LerQuantidadedeUsuarios()
{
    int quantidade;

    cout << "Digite a quantidade de usuarios: ";
    cin >> quantidade;

    return quantidade;
}

int main()
{
    int usuarios = LerQuantidadedeUsuarios();
    cout << "Quantidade de Usuarios: " << usuarios << endl;

    return 0;
}
