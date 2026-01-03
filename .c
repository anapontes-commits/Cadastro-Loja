#include <stdio.h>
#include <string.h>

#define MAX 50

// Estrutura do produto
struct Produto {
    char nome[50];
    int quantidade;
    float valor;
};

int main() {
    struct Produto produtos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (total < MAX) {
                printf("\nNome do produto: ");
                scanf(" %[^\n]", produtos[total].nome);

                printf("Quantidade em estoque: ");
                scanf("%d", &produtos[total].quantidade);

                printf("Valor do produto: ");
                scanf("%f", &produtos[total].valor);

                total++;
                printf("\nProduto cadastrado com sucesso!\n");
            } else {
                printf("\nLimite de produtos atingido!\n");
            }
        }
        else if (opcao == 2) {
            printf("\n=== PRODUTOS CADASTRADOS ===\n");

            if (total == 0) {
                printf("Nenhum produto cadastrado.\n");
            }

            for (int i = 0; i < total; i++) {
                printf("\nProduto %d\n", i + 1);
                printf("Nome: %s\n", produtos[i].nome);
                printf("Quantidade: %d\n", produtos[i].quantidade);
                printf("Valor: R$ %.2f\n", produtos[i].valor);
            }
        }

    } while (opcao != 0);

    printf("\nPrograma encerrado.\n");
    return 0;
}
