#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
    char estado;
    char codigo[4]; // 3 caracteres + '\0'
    char cidade[50];
    int populacao;
};

void lerCarta(struct CartaSuperTrunfo *carta) {
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da carta: ");
    scanf("%3s", carta->codigo); // limita para evitar overflow

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta->cidade); // permite espaços no nome

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
}

int main() {

    // Declaração das cartas
    struct CartaSuperTrunfo carta1, carta2;

    printf("Insira os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nInsira os dados da segunda carta:\n");
    lerCarta(&carta2);

    printf("\nDados da primeira carta:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);

    printf("\nDados da segunda carta:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);

    return 0;
}