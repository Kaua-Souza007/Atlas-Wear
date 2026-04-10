#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void menu() {
    
    int escolhaUsu = 0;
    
    printf("\n ============ MENU INICIAL ============ \n");
    
    printf("Digite uma opção valida.\n");
    
    printf("1 - Cadastrar produto\n2 - Listar produtos\n3 - Realizar venda\n4 - Ver estoque\n5 – Sair");
    
    printf("\nDigite a função desejada: ");
    scanf("%d", escolhaUsu);
    
    if (escolhaUsu == 1) {
        
        system("clear");
    }
    
    else if (escolhaUsu == 2) {
        
        system("clear");
    }
    
    else if (escolhaUsu== 3) {
        
        system("clear");
    }
    
}