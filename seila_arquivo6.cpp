#include <iostream>
using namespace std;

int main () {
    float precoGasolina, precoAlcool, kmGasolina, kmAlcool, litros;
    cout << "Escreva o Preço da Gasolina: ";
    cin >> precoGasolina;
    cout << "Escreva o Preço do Alcool: ";
    cin >> precoAlcool;
    cout << "Quantos km o veículo faz com 1 Litro de Gasolina: ";
    cin >> kmGasolina;
    cout << "Quantos km o veículo faz com 1 Litro de Alcool: ";
    cin >> kmAlcool;
    cout << "Quantos litros de combustivel o veiculo vai abastecer: ";
    cin >> litros;

    if (kmGasolina <= 0 || kmAlcool <= 0) {
        cout << "Erro: Não é possível um veiculo fazer 0 km com 1 litro de combustivel e os Valores de Consumo e Litros devem ser > 0 " << endl;
        return 1; 
    }

    float custoporkmGasolina = (litros * precoGasolina) / kmGasolina;
    float custoporkmAlcool = (litros * precoAlcool) / kmAlcool;
    float custoTotalGasolina = custoporkmGasolina * litros * kmGasolina;
    float custoTotalAlcool = custoporkmAlcool * litros * kmAlcool;
    cout << "Preço por Quilometro (Gasolina): R$ " << custoporkmGasolina << endl;
    cout << "Preço por Quilometro (Alcool): R$ " << custoporkmAlcool << endl;

    if (custoporkmAlcool < custoporkmGasolina) {
        cout << "Vantagem do Alcool!" << endl;
    } else {
        cout << "Vantagem da Gasolina!" << endl;
    }

return 0;   
}