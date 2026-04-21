#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "cadastro_produtos.h"
#include "listar_produtos.h"
#include "realizar_venda.h"
#include "listar_vendas.h"

void menu() {

    int escolhaUsu;

    do {

        system("clear");

        printf("\n============ MENU INICIAL ============ \n\n"); // Menu inicial
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Filtra Produtos\n");
        printf("4 - Realizar venda\n");
        printf("5 - Listar vendas\n");
        printf("6 - Sair\n");

        printf("\nDigite a função desejada: ");
        scanf("%d", &escolhaUsu);
        getchar();

        switch(escolhaUsu) { // swich pra chama as outras funções

            case 1:
                system("clear");
                cadastro_produto();
                break;

            case 2:
                system("clear");
                listar_produtos();
                break;

            case 3:
                system("clear");

                int op;

                printf("\n=== FILTRO ===\n"); // menu de filtro
                printf("\n1 - Camisetas\n");
                printf("2 - Moletons\n");
                printf("3 - Calcas\n");
                printf("4 - Tenis\n");
                printf("5 - Acessorios\n");
                printf("6 - Todos\n");

                printf("\nEscolha: ");
                scanf("%d", &op);
                getchar();

                    switch(op) {

                        case 1:
                            system("clear");
                            filtrar_produtos("Camisetas"); 
                            break;
        
                        case 2:
                            system("clear");
                            filtrar_produtos("Moletons"); 
                            break;
        
                        case 3:
                            system("clear");
                            filtrar_produtos("Calcas"); 
                            break;
        
                        case 4:
                            system("clear");
                            filtrar_produtos("Tenis"); 
                            break;
        
                        case 5:
                            system("clear");
                            filtrar_produtos("Acessorios"); 
                            break;
        
                        case 6:
                            system("clear");
                            listar_produtos(); 
                            break;
                        }

                break;

            case 4:
                system("clear");
                listar_vendas();
                break;

            case 5:
                system("clear");
                realizar_venda();
                break;
                
            case 6:
                system("clear");
                printf("Saindo...\n");
                break;

            default:
                printf("\nDigite um número válido...\n");
                sleep(1); // pausa pra usuário ver
        }

    } while(escolhaUsu != 5);
}