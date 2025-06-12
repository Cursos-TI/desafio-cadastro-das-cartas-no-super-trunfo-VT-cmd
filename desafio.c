#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 2

struct Carta{


    char Estado[9];
    char codigo[20];
    char Cidade[20];
    unsigned long int Populacao;
    float Area_km2;
    float PIB;
    int Pontos_Turisticos;

};

int main(){
    struct Carta cartas[MAX_CARTAS];

    float densidade[MAX_CARTAS];
    float pib_per_capita[MAX_CARTAS];
    float super_poder[MAX_CARTAS];
    
    printf("**** Desafio Super Trunfo! ****\n\n- Cadastre sua Carta: -\n");

    //------- Cadastrando Carta -------

    for (int i = 0; i < MAX_CARTAS; i++) {               //Loop para cadastrar
        printf("\n--- Cadastro da Carta n°%d ---\n", i + 1);

        printf("*Estado*: \n");
        scanf(" %s", cartas[i].Estado);

        printf("*Código*: \n");
        scanf(" %[^\n]", cartas[i].codigo);

        printf("*Cidade*: \n");
        scanf(" %[^\n]", cartas[i].Cidade);

        printf("*População*: \n");
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

    float Densidade_Populacional1 = (float)(cartas[0].Populacao) / (cartas[0].Area_km2);
    float Densidade_Populacional2 = (float)(cartas[1].Populacao) / (cartas[1].Area_km2);
    float PIB_per_Capita1 = (float)(cartas[0].PIB*1000000000) / (cartas[0].Populacao);
    float PIB_per_Capita2 = (float)(cartas[1].PIB*1000000000) / (cartas[1].Populacao);

    super_poder[0] = (float)cartas[0].Populacao + cartas[0].Area_km2 + (cartas[0].PIB * 1e9) +
                     (float)cartas[0].Pontos_Turisticos + pib_per_capita[0] + (1.0f / densidade[0]);

    super_poder[1] = (float)cartas[1].Populacao + cartas[1].Area_km2 + (cartas[1].PIB * 1e9) +
                     (float)cartas[1].Pontos_Turisticos + pib_per_capita[1] + (1.0f / densidade[1]);

    ///EXIBIÇÃO DAS CARTAS///

    ///CARTA 01//

    printf("\n--- CARTAS CADASTRADAS ---\n");

    printf("\nCarta 01:\n");
    printf("Estado:                     %s\n", cartas[0]. Estado);
    printf("Código:                     %s\n", cartas[0].codigo);
    printf("Cidade:                     %s\n", cartas[0].Cidade);
    printf("População:                  %d\n", cartas[0].Populacao);
    printf("Área:                       %.2f km²\n", cartas[0].Area_km2);
    printf("PIB:                        %.2f bilhões de reais\n", cartas[0].PIB);
    printf("Pontos Turísticos:          %d\n", cartas[0].Pontos_Turisticos);
    printf("Densidade Populacional:     %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capita:             %.2f reais\n", PIB_per_Capita1);

    ///CARTA 02///

    printf("\nCarta 02:\n");
    printf("Estado:                     %s\n", cartas[1].Estado);
    printf("Código:                     %s\n", cartas[1].codigo);
    printf("Cidade:                     %s\n", cartas[1].Cidade);
    printf("População:                  %d\n", cartas[1].Populacao);
    printf("Área:                       %.2f km²\n", cartas[1].Area_km2);
    printf("PIB:                        %.2f bilhões de reais\n", cartas[1].PIB);
    printf("Pontos Turísticos:          %d \n", cartas[1].Pontos_Turisticos);
    printf("Densidade Populacional:     %.2f hab/km²\n", Densidade_Populacional2);
    printf("PIB per Capita:             %.2f reais\n", PIB_per_Capita2);

    /// COMPARAÇÃO DAS CARTAS ///

    printf("\n\nComparacao de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", cartas[0].Populacao > cartas[1].Populacao);
    printf("Área: Carta 1 venceu (%d)\n", cartas[0].Area_km2 > cartas[1].Area_km2);
    printf("PIB: Carta 1 venceu (%d)\n", cartas[0].PIB > cartas[1].PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", cartas[0].Pontos_Turisticos > cartas[1].Pontos_Turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade[0] < densidade[1]);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita[0] > pib_per_capita[1]);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder[0] > super_poder[1]);

    return 0;

}