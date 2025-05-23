#include <iostream>
using namespace std;

int main() {
    int opcao;
    cout << "Menu de Formas Geometricas: \n";
    cout << "1. Quadrado \n2. Retangulo \n3. Triangulo \n4. Circulo \n5. Sair\n";
    cout << "Escolha uma Opção (1-5): ";
    cin >> opcao;  

  if (opcao == 5) {
    cout << "Saindo do Programa...\n";
    return 0;
}
    double valor1, valor2, area = 0, perimetro = 0;

    switch (opcao) {
        case 1: // Quadrado
            cout << "Escreva o lado do Quadrado: ";
            cin >> valor1;
            area = valor1 * valor1; // Area = lado * lado
            perimetro = 4 * valor1;
            break;

        case 2: // Retangulo
            cout << "Escreva o lado 1 e lado 2 do Retangulo: ";
            cout << "Lado 1: ";
            cin >> valor1;
            cout << "Lado 2: ";
            cin >> valor2; 
            area = valor1 * valor2; // Area = lado1 * lado2
            perimetro = 2 * (valor1 + valor2);
            break;

        case 3: // Triângulo 
              cout << "Escreva a base do triangulo: ";
              cin >> valor1; // base
              cout << "Escreva a altura do triangulo: ";
              cin >> valor2; // altura
              area = (valor1 * valor2) / 2; // area = (base * altura) / 2
              perimetro = valor1 * 3; // triângulo equilátero
              break;

        case 4: // Circulo
            cout << "Escreva o raio do Circulo: ";
            cin >> valor1;
            area = 3.14 * valor1 * valor1;   //  pi = 3.14
            perimetro = 2 * 3.14 * valor1;
            break;

        default:
            cout << "Opcao Invalida!\n";
            return 1;
    }

        if (opcao >= 1 && opcao <= 4) {
            cout << "Area: " << area << endl;
            cout << "Perimetro: " << perimetro << endl;
    }
return 0;   
}