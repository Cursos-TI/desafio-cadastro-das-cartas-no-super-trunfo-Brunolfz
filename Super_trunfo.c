#include <stdio.h>
int main(){

 //Carta 1  

int Carta1;
char Estado1[3];
char Codigo1[10];
char Nomedacidade1[50];
int Populacao1;
float Area1;
float Pib1;
int Pontosturisticos1;

//Carta 2

int Carta2;
char Estado2[3];
char Codigo2[10];
char Nomedacidade2[50];
int Populacao2;
float Area2;
float Pib2;
int Pontosturisticos2;

//Inserção das informações da carta 1

printf("Dados da primeira carta\n");
printf("Digite o Estado da primeira carta, Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
scanf(" %c", &Estado1);

printf("Digite o Codigo da carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf(" %s", &Codigo1);

printf("Digite o Nome da cidade: \n");
scanf(" %s", &Nomedacidade1);

printf("Digite a População, O número de habitantes da cidade: \n");
scanf("%d", &Populacao1);

printf("Digite a Area, A área da cidade em quilômetros quadrados: \n");
scanf(" %f", &Area1);

printf("Digite o Pib,  O Produto Interno Bruto da cidade: \n");
scanf(" %f", &Pib1);

printf("Digite os Pontos turisticos, A quantidade de pontos turísticos na cidade: \n");
scanf(" %d", &Pontosturisticos1);

//Inserção das informações da carta 2

printf("Dados da Segunda carta\n");
printf("Digite o Estado da segunda carta, Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
scanf(" %c", &Estado2);

printf("Digite o Codigo da carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf(" %s", &Codigo2);

printf("Digite o Nome da cidade: \n");
scanf(" %s", &Nomedacidade2);

printf("Digite a População, O número de habitantes da cidade: \n");
scanf("%d", &Populacao2);

printf("Digite a Area, A área da cidade em quilômetros quadrados: \n");
scanf(" %f", &Area2);

printf("Digite o Pib,  O Produto Interno Bruto da cidade: \n");
scanf(" %f", &Pib2);

printf("Digite os Pontos turisticos, A quantidade de pontos turísticos na cidade: \n");
scanf(" %d", &Pontosturisticos2);

//Dados da carta 01

printf("Carta 01:\n");
printf("Estado1: %c \n", Estado1);
printf("Codigo1: %s\n", Codigo1);
printf("Nomedacidade1: %s\n", Nomedacidade1);
printf("Populacao1: %d\n", Populacao1);
printf("Area1: %f km²\n", Area1);
printf("Pib1: %f\n", Pib1);
printf("Pontosturisticos1: %d\n", Pontosturisticos1);

//Dados da carta 02

printf("Carta 02:\n");
printf("Estado2: %c \n", Estado2);
printf("Codigo2: %s\n", Codigo2);
printf("Nomedacidade2: %s\n", Nomedacidade2);
printf("Populacao2: %d\n", Populacao2);
printf("Area2: %f km²\n", Area2);
printf("Pib2: %f\n", Pib2);
printf("Pontosturisticos2: %d\n", Pontosturisticos2);

return 0;







}