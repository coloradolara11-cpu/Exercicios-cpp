#include <iostream>
using namespace std;

int main()
{
    float temperaturas[8];
    int normais = 0;
    int atencao = 0;
    int criticas = 0;
    float maior;

    for (int i = 0; i < 8; i++)
    {
        cout << "Digite a temperatura do sensor " << i + 1 << ": ";
        cin >> temperaturas[i];

        while (temperaturas[i] < -20 || temperaturas[i] > 150)
        {
            cout << "Temperatura invalida. Digite novamente: ";
            cin >> temperaturas[i];
        }
    }

    maior = temperaturas[0];

    for (int i = 0; i < 8; i++)
    {
        if (temperaturas[i] < 40)
        {
            cout << "Sensor " << i + 1 << ": Normal" << endl;
            normais++;
        }
        else if (temperaturas[i] <= 60)
        {
            cout << "Sensor " << i + 1 << ": Atencao" << endl;
            atencao++;
        }
        else
        {
            cout << "Sensor " << i + 1 << ": Critica" << endl;
            criticas++;
        }
        if (temperaturas[i] > maior)
        {
            maior = temperaturas[i];
        }
    }

    cout << "Leituras normais: " << normais << endl;
    cout << "Leituras em atencao: " << atencao << endl;
    cout << "Leituras criticas: " << criticas << endl;
    cout << "Maior temperatura: " << maior << endl;

    return 0;
}
