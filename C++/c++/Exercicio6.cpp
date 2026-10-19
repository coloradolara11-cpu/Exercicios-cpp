#include <iostream>
using namespace std;

int main()
{
    int codigos[8];
    int procurado, posicao = -1;
    int i = 0;
    bool achou = false;

    for (int i = 0; i < 8; i++)
    {
        cout << "Digite o codigo: ";
        cin >> codigos[i];
    }

    cout << "Digite o codigo procurado: ";
    cin >> procurado;

    while (i < 8 && achou == false)
    {
        if (codigos[i] == procurado)
        {
            achou = true;
            posicao = i;
        }
        else {
            i++;
        }
    }
    if (achou == true) {
        cout << "Codigo encontrado no indice " 
             << posicao << endl;
    }
    else {
        cout << "Codigo nao encontrado " << endl;
    }

    return 0;
}
