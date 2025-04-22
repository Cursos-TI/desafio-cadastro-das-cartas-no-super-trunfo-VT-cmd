#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 2

struct Carta{


    char Estado[9];
    char codigo[20];
    char Cidade[20];
    int Populacao;
    float Area_km2;
    float PIB;
    int Pontos_Turisticos;
};

int main(){
    struct Carta cartas[MAX_CARTAS];

    printf("Desafio Super Trunfo!\n- Cadastre sua Carta:\n");

    //------- Cadastrando Carta -------

    for (int i = 0; i < MAX_CARTAS; i++) {               //Loop para cadastrar
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

    printf("*Estado*: \n");
    scanf(" %s", cartas[i].Estado);

    printf("*Código*: \n");
    scanf(" %[^\n]", cartas[i].codigo);
   
    printf("*Cidade*: \n");
    scanf(" %[^\n]", cartas[i].Cidade);

    printf("*População (em Milhões)*: \n");
    scanf("%d", &cartas[i].Populacao);

    while (getchar() != '\n');                          // limpa o buffer
        printf("*Área do Território (em km²)*: \n");
        scanf("%f", &cartas[i].Area_km2);
    
    while (getchar() != '\n');                          // limpa o buffer
        printf("*PIB (em Bilhões)*: \n");
        scanf("%f", &cartas[i].PIB);

    while (getchar() != '\n');                          // limpa o buffer
        printf("*Pontos Turísticos*: \n");
        scanf("%d", &cartas[i].Pontos_Turisticos);
    }

    //-------Exibição da Carta-------

    printf("\n--- CARTAS CADASTRADAS ---\n");
    for (int i = 0; i < MAX_CARTAS; i++) {

        printf("\n---CARTA CADASTRADA---\n");
        printf("\nCarta %02d:\n", i + 1);

    printf("Estado:             %s\n", cartas[i].Estado);
    printf("Código:             %s\n", cartas[i].codigo);
    printf("Cidade:             %s\n", cartas[i].Cidade);
    printf("População:          %d milhões\n", cartas[i].Populacao);
    printf("Área:               %f km²\n", cartas[i].Area_km2);
    printf("PIB:                %f bilhões de reais\n", cartas[i].PIB);
    printf("Pontos Turísticos:  %d \n", cartas[i].Pontos_Turisticos);
    }

    return 0;
}