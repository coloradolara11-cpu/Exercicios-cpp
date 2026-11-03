#include <iostream>
using namespace std;

int contarAtrasos(int tempos[], int tamanho)
{
    int atrasos = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (tempos[i] > 30)
        {
            atrasos++;
        }
    }

    return atrasos;
}

int main()
{
    int tempos[5] = {15, 25, 40, 10, 35};
    int total = contarAtrasos(tempos, 5);
    cout << "Total de atrasos: " << total << endl;

    return 0;
}
