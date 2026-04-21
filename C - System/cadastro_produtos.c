#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "cadastro_produtos.h"

struct Produto produtos[MAX]; // Define o Banco de Dados e seu limite
int totalProdutos = 0;

void cadastrar_produto(char categoria[])  { // Serve para cadastrar um produto usando uma categoria pre definida

    if (totalProdutos >= MAX) {
        printf("\nLimite atingido!\n");
        return;
    }

    struct Produto p; // cria uma variavel temporaria "P" com base na estrutura Produto

    // Pergunta pro ususario e encaminha suas respostas

    printf("\nCategoria: %s\n", categoria);

    printf("Nome: ");
    getchar();
    fgets(p.nome, 50, stdin);
    p.nome[strcspn(p.nome, "\n")] = 0;

    printf("Preco: ");
    scanf("%f", &p.preco);
    getchar();
    
    printf("Quantidade em estoque: ");
    scanf("%d", &p.quantidade);
    getchar();

    strcpy(p.categoria, categoria);

    // Diferencia roupa de tênis
    
    if (strcmp(categoria, "Tenis") == 0) {

        printf("Numero do tenis (ex: 37, 38): ");
        scanf("%d", &p.numeroTenis);
        getchar();

        strcpy(p.tamanhoRoupa, "");

    } else {

        printf("Tamanho (P/M/G/GG): ");
        scanf("%s", p.tamanhoRoupa);
        getchar();

        p.numeroTenis = 0;
    }

    produtos[totalProdutos] = p; // Guarda as informações no Banco de Dados/Array
    totalProdutos++;

    printf("\nProduto cadastrado!\n");
    sleep(1);
}

void cadastro_produto() { // Chama outra função com base na escolha do ususario, poderia ficar em cima

    int op;

    do {
        system("clear");

        printf("\n=== Cadastro Produto ===\n"); // Menu do cadastro - Categoria
        printf("\n1 - Camisetas\n");
        printf("2 - Moletons\n");
        printf("3 - Calcas\n");
        printf("4 - Tenis\n");
        printf("5 - Acessorios\n");
        printf("6 - Voltar\n");

        printf("\nEscolha: ");
        scanf("%d", &op);
        getchar();

        switch(op) { // Manda a escolha do ususario para cá "void cadastrar_produto(char categoria[])""

            case 1: 
                cadastrar_produto("Camisetas"); 
                break;
                
            case 2: 
                cadastrar_produto("Moletons"); 
                break;
                
            case 3: 
                cadastrar_produto("Calcas"); 
                break;
                
            case 4: 
                cadastrar_produto("Tenis"); 
                break;
                
            case 5: 
                cadastrar_produto("Acessorios"); 
                break;
        }

    } while(op != 6);
}