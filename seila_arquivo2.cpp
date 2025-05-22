#include <iostream>
using namespace std;

int main() {
    string meusDados[5] = {"Felipe", "Estudante", "Não sabe dirigir", "Tem Miopia", "Mora em Apartamento"};
    string colegaDados[5] = {"Caio", "Professor", "Sabe dirigir", "Tem Astigmatismo", "Mora em Casa"};

    cout << "Ver dados do Fulano (eu) ou do Cicrano (colega)";
    cout << "Digite 1 para Fulano ou 2 para Cicrano: ";
    int escolha;
    cin >> escolha;
    if (escolha == 1) {
        cout << "Dados do Fulano: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << meusDados[i] << endl;
        }
    } else if (escolha == 2) {
        cout << "Dados do Cicrano: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << colegaDados[i] << endl;
        }
    } else {
        cout << "Escolha inválida!" << endl;
    }
    return 0;
}