/*  Implementando um algoritmo para gerar estouro de memória com uso da função malloc sem o devido uso da função free(), isto é uma prova de conceito (POC) sobre
*   alocação de memória em C e este código não deve ser executado em máquina em produção porque pode gerar lentidão travamento e até quebra do SO por vazamento de memória.
*  Written by Caio Cesar, 2023.
*  v.:1.0a
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    while(1) {
        long long *p = (long long *) malloc(sizeof(long long) * 999999999);
        printf("Allocated memory at address %p\n", p);
    }
    printf("\nEnd!");
    return 0;
}