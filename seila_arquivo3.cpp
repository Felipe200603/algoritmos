#include <iostream>
using namespace std;

int main() {
    float gasolina = 4.75, alcool = 4.00, diesel = 3.50;   
    int escolha;
    float valor;
    cout << "ESCOLHA O TIPO DE COMBUSTIVEL: " << endl;
    cout << "1 - GASOLINA" << endl;
    cout << "2 - ALCOOL" << endl;
    cout << "3 - DIESEL" << endl;
    cout << "Digite a sua escolha (1-3) : ";
    cin >> escolha;

    cout << "Coloque o valor em reais: ";
    cin >> valor;
    float litros;
    switch (escolha) {
        case 1: litros = valor / gasolina; break;
        case 2: litros = valor / alcool; break;
        case 3: litros = valor / diesel; break;
        default: cout << "OPÇÃO INVÁLIDA!" << endl; return 1;
    }
    cout << "Você Abasteceu" << litros << " litros de combustivel." << endl;

    return 0;   
}