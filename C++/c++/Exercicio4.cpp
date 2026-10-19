#include <iostream>
using namespace std;

int main()
{
    float tempos[5];
    float soma = 0, media;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o tempo do atendimento: ";
        cin >> tempos[i];

        soma = soma + tempos[i];
    }

    media = soma / 5;

    cout << "Tempo medio: " << media << endl;

    return 0;
}
