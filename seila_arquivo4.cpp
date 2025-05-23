#include <iostream>
using namespace std;

int main() {
    float valordaCompra;
    int prestacoes;

    cout << "Escreva o Valor da Compra: R$ ";
    cin >> valordaCompra;
    cout << "Escreva a Quantidade de Prestações:";
    cin >> prestacoes;

    float avista = valordaCompra * 0.9;
    float aprazo = valordaCompra * 1.2;
    float valorPrestacao = aprazo / prestacoes;

    cout << "Valor a vista (10% de desconto): R$ " << avista << endl;
    cout << "Valor a prazo (20% de juros): R$ " << aprazo << endl;
    cout << "Valor de Cada Prestação: R$ " << valorPrestacao << endl;

return 0;   
}