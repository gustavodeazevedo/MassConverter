#include <stdio.h>

int main(void) {
    char name[50];

    printf("INSIRA SEU NOME COMPLETO: ");
    fgets(name, sizeof(name), stdin);

    printf("\nSEJA BEM-VINDO %s", name);
    printf("\nAO SISTEMA DE CONVERSÃO DE MEDIDAS DE MASSA\n");

    printf("\n|| CONVERTA UNIDADES DE PESO E MASSA DISPONÍVEIS DE FORMA INSTANTÂNEA ||\n");
    printf("\n1. Quilograma(kg) --> Grama(g)");
    printf("\n2. Grama(g) --> Quilograma(kg)");
    printf("\n3. Miligrama(mg) --> Grama(g)");
    printf("\n4. Grama(g) --> Miligrama(mg)");
    printf("\n5. Quilograma(kg) --> Miligrama(mg)");
    printf("\n6. Miligrama(mg) --> Quilograma(kg)");
    printf("\n7. Libra(lb) --> Grama(g)");
    printf("\n8. Grama(g) --> Libra(lb)");
    printf("\n9. Quilograma(kg) --> Libra(lb)");
    printf("\n10. Libra(lb) --> Quilograma(kg)");
    printf("\n11. Libra(lb) --> Miligrama(mg)");

    int escolha_operacao;
    printf("\n\nEscolha uma das opções de conversões disponíveis acima: ");
    scanf("%d", &escolha_operacao);

    switch (escolha_operacao) {
        // Cases de conversão
    default:
        printf("\n⚠️ OPÇÃO DE CONVERSÃO INVÁLIDA ⚠️\n");
        break;
    }

    return 0;
}
