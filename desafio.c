#include <stdio.h>

struct Carta{

    char paises[20];
    char Estado[20];
    int Populacao;
    float Area_km2;
    float PIB;
    int Pontos_Turisticos;
};

int main(){
    struct Carta carta;

    printf("Desafio Super Trunfo!\n- Cadastre sua Carta:\n");

    //Cadastrando:
    printf("*País*: \n");
    scanf("%s", carta.paises);
   
    printf("*Estado*: \n");
    scanf("%s", carta.Estado);

    printf("*População*: \n");
    scanf("%d", &carta.Populacao);

    printf("*Área do Território em km²*: \n");
    scanf("%f", &carta.Area_km2);

    printf("*PIB(Produto Interno Bruto)*: \n");
    scanf("%f", &carta.PIB);

    printf("*Pontos Turísticos*: \n");
    scanf("%d", &carta.Pontos_Turisticos);

    //Exibição da 









    
}