#include <iostream>
using namespace std;

int main() {
    int numero;
    char opcao;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Solicita ao usuário que insira 'a' para antecessores ou 's' para sucessores
    cout << "Digite 'a' para antecessores ou 's' para sucessores: ";
    cin >> opcao;

    int soma = 0;
    if (opcao == 'a') {
        // Soma dos antecessores
        for (int i = 1; i <= 10; i++) {
            soma += numero - i;
        }
    } else if (opcao == 's') {
        // Soma dos sucessores
        for (int i = 1; i <= 10; i++) {
            soma += numero + i;
        }
    } else {
        // Opção inválida
        cout << "Opção inválida." << endl;
        return 1;
    }

    // Mostra a soma dos antecessores ou sucessores
    cout << "A soma dos próximos 10 " << (opcao == 'a' ? "antecessores" : "sucessores") << " de " << numero << " é: " << soma << endl;

    return 0;
}
