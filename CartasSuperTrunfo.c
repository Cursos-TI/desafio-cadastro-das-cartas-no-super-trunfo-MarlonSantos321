//***SUPER TRUNFO NOVATO***

#include <stdio.h>

    int main(){ 

        char Codigo1[5], Codigo2[5];

        char Estado1[20], Estado2[20];

        char Cidade1[30], Cidade2[30];

        int populacao1, populacao2;

        float area1, area2;

        float pib1, pib2;

        int pontos_turisticos1, pontos_turisticos2;

        //primeira carta

        printf("\nCadastro da Primeira Carta: \n");
        printf("Código da cidade: ");
        scanf("%5s", &Codigo1);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado1);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade1);

        printf("Quantidade de População: ");
        scanf("%i", &populacao1);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area1);

        printf("PIB da Cidade: ");
        scanf("%f", &pib1);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos1);

        //Segunda Carta

        printf("\nCadastro da Segunda Carta: \n");

        printf("Código da cidade: ");
        scanf("%5s", &Codigo2);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado2);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade2);

        printf("Quantidade de População: ");
        scanf("%i", &populacao2);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area2);

        printf("PIB da Cidade: ");
        scanf("%f", &pib2);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos2);

        //Resultado Carta 1

        printf("\nCartas cadastradas: \n");
        
        printf("\nCarta 1: \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Estado: %s\n", Estado1);
        printf("Cidade: %s\n", Cidade1);
        printf("Área Km²: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %i\n",pontos_turisticos1);

        //Resultado Carta 2

        printf("\nCarta 2:\n");
        printf("Codigo: %s\n", Codigo2);
        printf("Estado: %s\n", Estado2);
        printf("Cidade: %s\n", Cidade2);
        printf("Área Km²: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %i\n",pontos_turisticos2);

        return 0;
        
    }
//***SUPER TRUNFO AVENTUREIRO***

#include <stdio.h>

    int main(){ 

        char Codigo1[6], Codigo2[6];

        char Estado1[25], Estado2[25];

        char Cidade1[35], Cidade2[35];

        int populacao1, populacao2;

        float area1, area2;

        float pib1, pib2;

        int pontos_turisticos1, pontos_turisticos2;

        float Pib_Per_Capita1, Pib_Per_Capita2;
        
        float Densidade_Populacional1, Densidade_Populacional2;

        //primeira carta

        printf("\n***Cadastro da Primeira Carta*** \n");
        printf("Código da cidade: ");
        scanf("%5s", &Codigo1);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado1);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade1);

        printf("Quantidade de População: ");
        scanf("%i", &populacao1);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area1);

        printf("PIB da Cidade: ");
        scanf("%f", &pib1);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos1);

        Densidade_Populacional1 =(float) (populacao1 / area1);

        Pib_Per_Capita1 = (float) (pib1 / populacao1);

        //Segunda Carta

        printf("\n***Cadastro da Segunda Carta*** \n");

        printf("Código da cidade: ");
        scanf("%5s", &Codigo2);

        printf("Siglas do Estado: ");
        scanf("%6s", &Estado2);

        printf("Nome da Cidade: ");
        scanf("%30s", &Cidade2);

        printf("Quantidade de População: ");
        scanf("%i", &populacao1);
        
        printf("Tamanho da Área da Cidade em Km²: ");
        scanf("%f", &area2);

        printf("PIB da Cidade: ");
        scanf("%f", &pib2);

        printf("Qantidade de Pontos Turisticos da Cidade: ");
        scanf("%i", &pontos_turisticos2);

        Densidade_Populacional2 =(float) (populacao2 / area2);

        Pib_Per_Capita2 =(float) (pib2 / populacao2);

        //Resultado Carta 1

        printf("\n***Cartas cadastradas*** \n");
        
        printf("\nCarta 1 \n");
        printf("Codigo: %s\n", Codigo1);
        printf("Estado: %s\n", Estado1);
        printf("Cidade: %s\n", Cidade1);
        printf("Área Km²: %.3f\n", area1);
        printf("População: %i\n", populacao1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turisticos: %i\n",pontos_turisticos1);
        printf("Densidade Populaciona: %.2f\n",Densidade_Populacional1);
        printf("Pib Per Capita: %.2f",Pib_Per_Capita1);

        //Resultado Carta 2

        printf("\nCarta 2 \n");
        printf("Codigo: %s\n", Codigo2);
        printf("Estado: %s\n", Estado2);
        printf("Cidade: %s\n", Cidade2);
        printf("Área Km²: %.3f\n", area2);
        printf("População: %i\n", populacao2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turisticos: %i\n",pontos_turisticos2);
        printf("Densidade Populaciona: %.2f\n",Densidade_Populacional2);
        printf("Pib Per Capita: %.2f",Pib_Per_Capita2);


        return 0;
    }

        //***Super Trunfo Mestre***
#include <stdio.h>

    int main(){

        //Dados

        char Estado1[25], Cidade1[30], Codigo1[10];
        unsigned long int População1;
        int Pontos1;
        float Pib1, Densidade1, Per_Capita1, Area1, Poder1;
        double Inverso1;

        char Codigo2, Estado2[25], Cidade2[30];
        unsigned long int População2;
        int Pontos2;
        float Pib2, Densidade2, Per_Capita2, Area2, Poder2;
        double Inverso2;

        //DADOS DA CARTA 1

        printf("\n***CARTA 1***\n");

        printf("Codigo: ");
        scanf("%s", &Codigo1);

        printf("Estado:");
        scanf("%s", &Estado1);

        printf("Cidade: ");
        scanf("%s", &Cidade1);

        printf("Area da Cidade: ");
        scanf("%f", &Area1);

        printf("População: ");
        scanf("%lu", &População1);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib1);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%i", &Pontos1);

        //DADOS DA CARTA 2

        printf("\n***CARTA 2***\n");

        printf("Codigo: ");
        scanf("%s", &Codigo2);

        printf("Estado:");
        scanf("%s", &Estado2);

        printf("Cidade: ");
        scanf("%s", &Cidade2);

        printf("Area da Cidade: ");
        scanf("%f", &Area2);

        printf("População: ");
        scanf("%lu", &População2);

        printf("Pib Da Cidade: ");
        scanf("%f", &Pib2);

        printf("Quantidades de Pontos Turisticos: ");
        scanf("%i", &Pontos2);

        //CALCULANDO A DENSIDADE POPULACIONAL
        Densidade1 = População1 / Area1;
        Densidade2 = População2 / Area2;

        //CALCULANDO O PIB PER CAPITA
        Per_Capita1 = Pib1 / População1;
        Per_Capita2 = Pib2 / População2;

        //CALCULANDO A INVERSA DA DENSIDADE
        Inverso1 = 1 / Densidade1;
        Inverso2 = 1 / Densidade2;

        //CALCULANDO O PODER 
        Poder1 = (Area1+População1+Pib1+Pontos1+Per_Capita1+Densidade1)/Inverso1;
        Poder2 = (Area2+População2+Pib2+Pontos2+Per_Capita2+Densidade2)/Inverso2;

        // COMPARANDO AS CARTAS
       printf("\n\n***COMPARANDO AS CARTAS***\n");
       printf("População: Carta 1 venceu (%d)\n", População1 > População2);
       printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
       printf("PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
       printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pontos1 > Pontos1);
       printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densidade2);
       printf("PIB per Capita: Carta 1 venceu (%d)\n", Per_Capita1 > Per_Capita2);
       printf("Super Poder: Carta 1 venceu (%d)\n", Poder1 > Poder1);
        return 0;
    }
