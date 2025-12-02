
#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Esta estrutura agrupa informações relacionadas a um território:
// nome, cor do exército e quantidade de tropas.
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n\n");

    // Laço para entrada dos dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do território: ");
        scanf("%29s", territorios[i].nome);

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf("%9s", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== Dados dos Territórios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
