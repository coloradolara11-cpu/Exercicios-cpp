#include <iostream>
using namespace std;

int calcularPontos(int a, int b, int c)
{
    int soma = a + b + c;
    return soma;
}

int main()
{
    int total = calcularPontos(3, 5, 8);

    cout << "Total de pontos: " << total << endl;

    return 0;
}
