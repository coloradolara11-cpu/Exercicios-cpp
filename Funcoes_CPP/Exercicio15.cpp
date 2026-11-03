#include <iostream>
using namespace std;

void mostrarMenu()
{
    cout << "\n=== SISTEMA DE CHAMADOS ===" << endl;
    cout << "1 - Cadastrar Prioridades" << endl;
    cout << "2 - Exibir numero de urgentes" << endl;
    cout << "3 - sair" << endl;
    cout << "Escolha uma opcao: ";
}

void cadastrarPrioridades(int prioridades[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        do
        {
            cout << "Digite a prioridade do chamado"
                 << i + 1 << " (1 a 3): ";
            cin >> prioridades[i];

            if (prioridades[i] < 1 || prioridades[i] > 3)
            {
                cout << "Prioridade invalida!" << endl;
            }

        } while (prioridades[i] < i || prioridades[i] > 3);
    }

    cout << "Prioridades cadastradas! " << endl;
}

int contarUrgentes(int prioridades[], int tamanho)
{
    int urgentes = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (prioridades[i] == 3)
        {
            urgentes++;
        }
    }

    return urgentes;
}

int main()
{
    int prioridades[5] = {0};
    int opcao;
    bool cadastrado = false;

    do
    {
        mostrarMenu();
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cadastrarPrioridades(prioridades, 5);
            cadastrado = true;
            break;

        case 2:
            if (cadastrado)
            {
                int total = contarUrgentes(prioridades, 5);
                cout << "Chamadas urgentes: " << total << endl;
            }
            else
            {
                cout << "Cadastre as prioridades primeiro!" << endl;
            }
            break;

        case 3:
            cout << "Encerrando sistema..." << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 3);

    return 0;
}
