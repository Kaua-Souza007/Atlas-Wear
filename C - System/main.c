#include "tela_carregamento.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    loading(); // chama a tela de carregamento

    // depois disso, seu sistema começa
    printf("\n                         Bem-vindo ao sistema!\n");
    sleep(2);
    system("clear");
    
    menu();
    
    

    return 0;
}