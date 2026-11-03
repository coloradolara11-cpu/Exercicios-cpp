#include <iostream>
using namespace std;

int somarTarefas(int tarefas[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += tarefas[i];
    }
    return soma;
}

bool atingiuMeta(int total, int meta)
{
    return total >= meta;
}

int main()
{
    int tarefas[5] = {7, 9, 8, 6, 10};
    int meta = 35;
    int total = somarTarefas(tarefas, 5);

    cout << "Total de tarefas: " << total << endl;
    if (atingiuMeta(total, meta))
    {
        cout << "Meta atingida" << endl;
    }
    else
    {
        cout << "Meta não atingida" << endl;
    }

    return 0;
}
