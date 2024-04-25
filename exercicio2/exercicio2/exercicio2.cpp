#include <iostream>
using namespace std;

int main() {
    // Problema 1
    int unidadesCompradas;
    cout << "Quantas unidades de sorvete o cliente comprou? ";
    cin >> unidadesCompradas;

    float precoPorUnidade;
    if (unidadesCompradas <= 25) {
        precoPorUnidade = 1.50;
    }
    else {
        precoPorUnidade = 1.25;
    }

    float precoTotal = unidadesCompradas * precoPorUnidade;
    cout << "O cliente irá pagar R$" << precoTotal << endl;

    // Problema 2
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    int resultado;
    if (numero > 10) {
        resultado = numero + 10 * 2;
    }
    else {
        resultado = numero + 9 * 3 - 8;
    }

    cout << "O resultado é: " << resultado << endl;

    // Problema 3
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (num > 0) {
        cout << "O número é positivo." << endl;
    }
    else if (num < 0) {
        cout << "O número é negativo." << endl;
    }
    else {
        cout << "O número é zero." << endl;
    }

    // Problema 4
    int a, b;
    cout << "Digite dois números: ";
    cin >> a >> b;

    if (a > b) {
        cout << "O primeiro número é maior." << endl;
    }
    else if (a < b) {
        cout << "O segundo número é maior." << endl;
    }
    else {
        cout << "Os números são iguais." << endl;
    }

    // Problema 5
    float nota1, nota2;
    cout << "Digite as duas notas dos alunos: ";
    cin >> nota1 >> nota2;

    float media = (nota1 + nota2) / 2;

    if (media >= 7) {
        cout << "Aprovado" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}