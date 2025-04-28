#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char codigo[5];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    int atributo;
    
    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", carta1.estado);
    printf("Código (ex: A01): ");
    scanf("%4s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", carta2.estado);
    printf("Código (ex: B02): ");
    scanf("%4s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Escolher atributo para comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &atributo);

    // Comparar cartas
    printf("\n=== Resultado ===\n");
    printf("Carta 1: %s-%s\n", carta1.estado, carta1.codigo);
    printf("Carta 2: %s-%s\n", carta2.estado, carta2.codigo);

    switch(atributo) {
        case 1: // População
            if(carta1.populacao > carta2.populacao)
                printf("Vencedora: Carta 1 (População: %d)\n", carta1.populacao);
            else if(carta2.populacao > carta1.populacao)
                printf("Vencedora: Carta 2 (População: %d)\n", carta2.populacao);
            else
                printf("Empate!\n");
            break;
            
        case 2: // Área
            if(carta1.area > carta2.area)
                printf("Vencedora: Carta 1 (Área: %.2f)\n", carta1.area);
            else if(carta2.area > carta1.area)
                printf("Vencedora: Carta 2 (Área: %.2f)\n", carta2.area);
            else
                printf("Empate!\n");
            break;
            
        case 3: // PIB
            if(carta1.pib > carta2.pib)
                printf("Vencedora: Carta 1 (PIB: %.2f)\n", carta1.pib);
            else if(carta2.pib > carta1.pib)
                printf("Vencedora: Carta 2 (PIB: %.2f)\n", carta2.pib);
            else
                printf("Empate!\n");
            break;
            
        case 4: // Pontos Turísticos
            if(carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedora: Carta 1 (Pontos: %d)\n", carta1.pontos_turisticos);
            else if(carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Vencedora: Carta 2 (Pontos: %d)\n", carta2.pontos_turisticos);
            else
                printf("Empate!\n");
            break;
            
        default:
            printf("Atributo inválido!\n");
    }

    return 0;
}
