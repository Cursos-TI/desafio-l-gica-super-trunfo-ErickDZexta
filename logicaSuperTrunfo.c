#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[20] = "Minas Gerais", codigo1[4] = "A01";
    int populacao1, numeroDePontos1;
    float pib1, area1;

    char estado2[20] = "Paraná", codigo2[4] = "A02";
    int populacao2, numeroDePontos2;
    float pib2, area2;


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)


    // Carta 1

    printf("== Dados da Carta 1 ==\n");
    printf("%s\n", estado1);
    printf("%s\n", codigo1);

    printf("Insira a população de Minas Gerais:\n");
    scanf("%d", &populacao1);

   printf("Insira o número de pontos turísticos de Minas Gerais: \n");
   scanf("%d", &numeroDePontos1);

   printf("Insira o pib per capita de MG:\n");
   scanf("%f", &pib1);

   printf("Insira a Area por KM de MG:\n");
   scanf("%f", &area1);

   // Carta 2

   printf("== Dados da Carta 2 ==\n");
    printf("%s\n", estado2);
    printf("%s\n", codigo2);

    printf("Insira a população de Paraná:\n");
    scanf("%d", &populacao2);

   printf("Insira o número de pontos turísticos de Paraná: \n");
   scanf("%d", &numeroDePontos2);

   printf("Insira o pib per capita de PR:\n");
   scanf("%f", &pib2);

   printf("Insira a Area por KM de PR:\n");
   scanf("%f", &area2);

   if (populacao1 > populacao2){
        printf("Carta 1 ganhou da Carta 2 em População!");
   }else {
        printf("Carta 2 ganhou da Carta 1 em população!");
   }

    


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
