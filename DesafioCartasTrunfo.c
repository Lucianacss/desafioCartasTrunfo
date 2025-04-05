#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ptoturismo1, ptoturismo2;

    printf("Forneça as informações para a Carta 1:\n");
        printf("Digite a letra do estado (de A a H): \n");
        scanf(" %c", &estado1);
        printf("Digite o código da cidade ('A01', 'B03'...): \n");
        scanf("%s", &codigo1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &ptoturismo1);
        
    printf("\nAgora forneça as informações para a Carta 2:\n");
        printf("Digite a letra do estado (de A a H): \n");
        scanf(" %c", &estado2);
        printf("Digite o código da cidade ('A01', 'B03'...): \n");
        scanf("%s", &codigo2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
        printf("Digite a população: \n");
        scanf("%d", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &ptoturismo2);

    printf("\nAqui estão as suas cartas: \n");
    printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", ptoturismo1);

    printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Número de Pontos Turísticos: %d", ptoturismo2);

    return 0;

}
