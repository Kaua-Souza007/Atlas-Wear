#ifndef CADASTRO_PRODUTOS_H
#define CADASTRO_PRODUTOS_H

#define MAX 100 

struct Produto { // Estrutura Produto
    char nome[50];
    float preco;
    char categoria[30];
    char tamanhoRoupa[3]; // P, M, G, GG
    int numeroTenis;    // 37, 38, 39...
    int quantidade;
};

// extern permite q quando um arquivo linkado a esse aqruivo permita puxar os valores de variaveis pre definidas

extern struct Produto produtos[MAX];  // Puxa a estrutura e linka a variavel temporaria no cadastro 
extern int totalProdutos; // Puxa a varivael totalProdutos 

// Cria as funções

void cadastrar_produto(char categoria[]);
void cadastro_produto();

#endif