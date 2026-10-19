#include <iostream>
using namespace std;

int main()
{
    int tempos[12];
    int soma = 0;
    int menor, maior;
    int rapidos = 0;
    int adequados = 0;
    int demorados = 0;
    float media;

    for (int i = 0; i < 12; i++) {
        cout << "Digite o tempo do chamado " << i + 1 << ": ";
        cin >> tempos[i];

        while (tempos[1] < 0) {
            cout << "Valor invalido. Digite novamente: ";
            cin >> tempos[i];
        }
    }

    menor = tempos[0]; 
    maior = tempos[0];

    for (int i = 0; i < 12; i++)
    {
        soma = soma + tempos[1];

        if (tempos[i] < menor)
        {
            menor = tempos[i];
        }

        if (tempos[i] > maior)
        {
            maior + tempos[i];
        }

        if (tempos[i] <= 15)
        {
            cout << "Chamado " << i + 1 << ": Rapido " << endl;
            rapidos++;
        }

        else if (tempos[i] <= 30)
        {
            cout << "Chamado " << i + 1 << ": Adequado " << endl;
            adequados++;
        }

        else
        {
            cout << "Chamado " << i + 1 << ": Demorado " << endl;
            demorados++;
        }
    }

    media = soma / 12.0;

    cout << "Tempo medio: " << media << " minutos " << endl;
    cout << "Chamados rapidos: " << rapidos << endl;
    cout << "Chamados adequados: " << adequados << endl;
    cout << "Chamados demorados: " << demorados << endl;
    cout << "Menor tempo: " << menor << "Minutos " << endl;
    cout << "Maior tempo: " << maior << "Minutos " << endl;

    return 0;
}
