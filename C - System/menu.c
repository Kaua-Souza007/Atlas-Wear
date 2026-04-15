#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 🔹 Protótipos das funções
void cadastro_produto ();
void listar_produto ();
void cadastro_venda ();
void listar_venda ();

void menu() {

    int escolhaUsu;

    do {

        system("clear");

        printf("\n============ MENU INICIAL ============ \n\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Realizar venda\n");
        printf("4 - Listar vendas\n");
        printf("5 - Sair\n");

        printf("\nDigite a função desejada: ");
        scanf("%d", &escolhaUsu);

        switch(escolhaUsu) {

            case 1:
                system("clear");
                cadastro_produto();
                break;

            case 2:
                system("clear");
                listar_produto();
                break;

            case 3:
                system("clear");
                cadastro_venda();
                break;

            case 4:
                system("clear");
                listar_venda();
                break;

            case 5:
                system("clear");
                printf("Saindo...\n");
                break;

            default:
                printf("\nDigite um número válido...\n");
                sleep(1); // pausa pra usuário ver
        }

    } while(escolhaUsu != 5);
}