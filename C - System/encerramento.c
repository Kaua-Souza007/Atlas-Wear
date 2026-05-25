#include <stdio.h>

int main() {

    int opcao;

    do {

        printf("\n=== MENU ===\n");
        printf("1 - Listar vendas\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Listando vendas...\n");
                break;

            case 0:
                printf("Programa encerrado!\n");
                return 0;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
