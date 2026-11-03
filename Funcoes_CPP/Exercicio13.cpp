#include <iostream>
using namespace std;

float calcularMedia(int notas[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += notas[i];
    }

    return (float)soma / tamanho;
}

void mostrarSituacao(float media)
{
    if (media >= 7)
    {
        cout << "aprovado" << endl;
    }
    else
    {
        cout << "Reprovado" << endl;
    }
}

int main()
{
    int notas[5] = {6, 8, 7, 9, 5};
    float media = calcularMedia(notas, 5);
    cout << "Media: " << media << endl;
    mostrarSituacao(media);

    return 0;
}
