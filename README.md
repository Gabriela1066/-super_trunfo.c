# -super_trunfo.c

#include <stdio.h>

int main() {
    char estado1 ;
    char codigodacidade1[4];
char nomeCidade1[100];
int população1;
float PIB1;
float area1;
int pontosturisticos1;
char estado2;
char codigo2[4];
char nomeCidade2[100];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// Instruções para o usuário - Carta 1
printf("Digite os dados da Carta 1:\n");

printf("Estado (letra de A a H): ");
scanf(" %c", &estado1);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

// Instruções para o usuário - Carta 2
printf("\nDigite os dados da Carta 2:\n");

printf("Estado (letra de A a H): ");
scanf(" %c", &estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Exibindo as informações das cartas
printf("\nCarta 1:\n");
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
}