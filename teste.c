#include <stdio.h>

int main() {

    // Laço de fora: conta de 100 para baixo, até 2
    for (int x = 100; x >= 2; x--) {

        int eh_primo = 1; // Assumimos que 'x' é primo (1 = verdadeiro)

        // Laço de dentro: testa todos os possíveis divisores, de 2 até x-1
        for (int i = 2; i < x; i++) {
            
            // Se 'x' for divisível por 'i', então 'x' não é primo
            if (x % i == 0) {
                eh_primo = 0; // Marcamos que não é primo (0 = falso)
                break;        // Interrompe o laço de dentro, pois já temos a resposta
            }
        }

        // Se, após todos os testes, a variável 'eh_primo' continuou sendo 1...
        if (eh_primo == 1) {
            printf("%d\n", x); // ...significa que o número é primo, então o imprimimos
        }
    }

    return 0;
}
