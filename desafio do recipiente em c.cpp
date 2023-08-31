#include<stdio.h>

int Frasco1 = 8, Frasco2 = 0, Frasco3 = 0, Passo = 0, Movimento = 0;
int main(void)
{
    //inicio
    printf("Desafio dos recipientes.\n1 - Frasco 1: capacidade 8 litros, esta cheio.\n2 - Frasco 2: capacidade de 5 litros, esta vazio.\n3 - Frasco 3: capacidade de 3 litros, esta vazio.\n");


    printf("\nCombinacao para resolver o desafio:\n[1] - Frasco 1 para o frasco 2.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco1 = Frasco1 - 5;
    Frasco2 = Frasco2 + 5;

    //Passo 1
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 2 para o frasco 3.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco2 = Frasco2 - 3;
    Frasco3 = Frasco3 + 3;

    //Passo 2
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 3 para o frasco 1.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco3 = Frasco3 - 3;
    Frasco1 = Frasco1 + 3;

    //Passo 3
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 2 para o frasco 3.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco2 = Frasco2 - 2;
    Frasco3 = Frasco3 + 3;

    //Passo 4
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 1 para o frasco 2.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco1 = Frasco1 - 5;
    Frasco2 = Frasco2 + 5;

    //Passo 5
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 2 para o frasco 3.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco2 = Frasco2 - 1;
    Frasco3 = Frasco3 + 0;

    //Passo 6
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);

    printf("\n\nProximo movimento:\n[1] - Frasco 3 para o frasco 1.\nDigite 1: ");
    scanf("%d", &Movimento);
    Passo = Passo + 1;

    Frasco3 = Frasco3 - 3;
    Frasco1 = Frasco1 + 3;

    //Passo 7
    printf("\nFrasco 1 esta com [%d] litros, Frasco 2 esta com [%d] litros e Frasco 3 esta com [%d] litros.", Frasco1, Frasco2, Frasco3);
    printf("\nPasso numero: [%d]", Passo);
    printf("Fim do desafio.");
}
