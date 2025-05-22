#include <iostream>
using namespace std;

int main() {
    double meusDouble [2] = {1.75 , 108};    // Altura e Peso
    string minhasString [2] = {"Felipe" , "Gabriel"};  // Nome e Sobrenome
    int meusInt [2] = {19 , 2006};   // Idade e Ano de Nascimento
    char meusChar [2] = {'M' , 'S'};   // Identidade de Gênero e Estado Civil
    bool meusBool [2] = {true , false};  // Sou Estudante e Sei Dirigir Carro

    double userDouble [2];
    string userString [2];
    int userInt [2];
    char userChar [2];
    bool userBool [2];

    cout << "Escreva 2 valores double (altura e peso): ";
    cin >> userDouble[0] >> userDouble[1];
    cout << "Escreva 2 valores string (nome e sobrenome): ";
    cin >> userString[0] >> userString[1];
    cout << "Escreva 2 valores int (idade e ano de nascimento): ";
    cin >> userInt[0] >> userInt[1];
    cout << "Escreva 2 valores char (identidade de gênero e estado civil): ";
    cin >> userChar[0] >> userChar[1];
    cout << "Escreva 2 valores bool (sou estudante e sei dirigir carro): ";
    cin >> userBool[0] >> userBool[1];

    int contador = 0;
    for (int i = 0; i < 2; i++) {
        if (meusDouble[i] == userDouble[i]) {
            contador++;
        }
        if (minhasString[i] == userString[i]) {
            contador++;
        }
        if (meusInt[i] == userInt[i]) {
            contador++;
        }
        if (meusChar[i] == userChar[i]) {
            contador++;
        }
        if (meusBool[i] == userBool[i]) {
            contador++;
        }
    }

    cout << (contador > 5 ? "Essa pessoa é parecida comigo" : "Essa pessoa é diferente de mim") << endl;
    return 0;
}





   
