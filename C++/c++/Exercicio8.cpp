#include <iostream>
using namespace std;

int main()
{
    float notas[10];
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (notas[i] >= 7)
        {
            cout << "Aluno " << i + 1 << ": Aprovado" << endl;
            aprovados++;
        }
        else if (notas[i] >= 4)
        {
            cout << "Aluno " << i + 1 << ": Recuperacao" << endl;
            recuperacao++;
        }
        else
        {
            cout << "Aluno " << i + 1 << ": Reprovado" << endl;
            reprovados++;
        }
    }

    cout << "Aprovados: " << aprovados << endl;
    cout << "Recuperacao: " << recuperacao << endl;
    cout << "Reprovados: " << reprovados << endl;

    return 0;
}
