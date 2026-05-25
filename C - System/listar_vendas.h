#include <stdio.h>
#include <string.h>

struct Venda {
    int id;
    char produto[50];
    int quantidade;
    float valorUnitario;
    float total;
};

int main() {

    struct Venda vendas[4];

    // Venda 1
    vendas[0].id = 1;
    strcpy(vendas[0].produto, "Tenis");
    vendas[0].quantidade = 1;
    vendas[0].valorUnitario = 299.90;
    vendas[0].total = vendas[0].quantidade * vendas[0].valorUnitario;

    // Venda 2
    vendas[1].id = 2;
    strcpy(vendas[1].produto, "Camisa");
    vendas[1].quantidade = 1;
    vendas[1].valorUnitario = 89.90;
    vendas[1].total = vendas[1].quantidade * vendas[1].valorUnitario;

    // Venda 3
    vendas[2].id = 3;
    strcpy(vendas[2].produto, "Calca");
    vendas[2].quantidade = 1;
    vendas[2].valorUnitario = 159.90;
    vendas[2].total = vendas[2].quantidade * vendas[2].valorUnitario;

    // Venda 4
    vendas[3].id = 4;
    strcpy(vendas[3].produto, "Blusa de Frio");
    vendas[3].quantidade = 1;
    vendas[3].valorUnitario = 199.90;
    vendas[3].total = vendas[3].quantidade * vendas[3].valorUnitario;

    printf("===== LISTA DE VENDAS =====\n\n");

    for(int i = 0; i < 4; i++) {

        printf("Venda #%d\n", vendas[i].id);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("Valor Unitario: R$ %.2f\n", vendas[i].valorUnitario);
        printf("Total da Venda: R$ %.2f\n", vendas[i].total);

        printf("---------------------------\n");
    }

    return 0;
}
