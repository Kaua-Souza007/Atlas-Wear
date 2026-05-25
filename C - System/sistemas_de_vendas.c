#include <stdio.h>

int main() {

    int opcao;

    do {

        printf("\n=== SISTEMA DE VENDAS ===\n");
        printf("1 - Adicionar Produto\n");
        printf("2 - Finalizar Venda\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Produto adicionado!\n");
                break;

            case 2:
                printf("Venda finalizada!\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
