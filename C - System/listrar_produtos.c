#include <stdio.h>
#include <string.h>
#include "cadastro_produtos.h"

void listar_produtos() { // Estrutura os codigos da função

        //Confere se tem algum produto cadastrado

    if (totalProdutos == 0) {
        printf("\nNenhum produto cadastrado.\n");
        getchar();
        return;
    }

    printf("\n=== LISTA COMPLETA ===\n");

    for (int i = 0; i < totalProdutos; i++) {

        // Puxa as variaveis da Array e coloca nessa lista
        
        printf("\nProduto %d\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Preco: %.2f\n", produtos[i].preco);
        printf("Categoria: %s\n", produtos[i].categoria);
        printf("Estoque: %d\n", produtos[i].quantidade);

        if (strcmp(produtos[i].categoria, "Tenis") == 0) {
            printf("Numero: %d\n", produtos[i].numeroTenis);
        } else {
            printf("Tamanho: %s\n", produtos[i].tamanhoRoupa);
        }
    }

    printf("\nPressione ENTER...");
    getchar();
}

void filtrar_produtos(char categoria[]) { // Estrutura os codigos da função

    int encontrou = 0;

    printf("\n=== FILTRO: %s ===\n", categoria);

    for (int i = 0; i < totalProdutos; i++) {

        if (strcmp(produtos[i].categoria, categoria) == 0) {

            printf("\nProduto %d\n", i + 1);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Preco: %.2f\n", produtos[i].preco);
            printf("Estoque: %d\n", produtos[i].quantidade);

            if (strcmp(produtos[i].categoria, "Tenis") == 0) {
                printf("Numero: %d\n", produtos[i].numeroTenis);
            } else {
                printf("Tamanho: %s\n", produtos[i].tamanhoRoupa);
            }

            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("\nNenhum produto encontrado nessa categoria.\n");
    }

    printf("\nPressione ENTER...");
    getchar();
}