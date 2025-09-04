#include <stdio.h>

    int main(){

        //Projeto faculdade;
        printf("\nProjeto Jogo Super Trunfo\n");

        //Entranda das variaveis;
        int turistico1, turistico2;
        int populacao1, populacao2;
        float pib1, pib2, area1, area2;
        char estado1[15], estado2[15], codigo1[5], codigo2[5]; 
        char cidade1[15], cidade2[15];
        double densidade1, densidade2, percapita1, percapita2;
        double super1, super2;

        //Cadastrando primeira carta;
        printf("Cadastrando primeira carta: \n");

        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
        scanf("%s", estado1);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade1);
        printf("Digite a população: \n");
        scanf("%d", &populacao1);
        printf("Digite a área em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico1);

        //Cadastrando segunda carta;
        printf("Cadastrando segunda carta: \n");

        //Entrada dos dados;
        printf("Digite o nome do Estado: \n");
        scanf("%s", estado2);
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
        printf("Digite a população: \n");
        scanf("%d", &populacao2);
        printf("Digite a área em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        printf("Digite o número de pontos túristicos: \n");
        scanf("%d", &turistico2);

        //Calculando váriavel densidade populacional;
        densidade1 = (float)populacao1 / area1;
        densidade2 = (float)populacao2 / area2;

        //Calculando variável PIB per Capita;
        //Conversão do PIB em bilhões;
        percapita1 = (pib1*1000000000) / (float)populacao1;
        percapita2 = (pib2*1000000000) / (float)populacao2;

        //Calculando super poderes
        super1 = (float)(populacao1 + area1 + pib1 + turistico1 + percapita1);
        super2 = (float)(populacao2 + area2 + pib2 + turistico2 + percapita2);        

        //Cartas do jogo;
        printf("\nCartas Cadastradas:\n");

        //Impressão primeira carta;
        printf("\nCARTA 1\n");
        printf("Nome do Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.3f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", percapita1);

        //Impressão segunda carta
        printf("\nCARTA 2\n");
        printf("Nome do Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", percapita2);

        /*
        //Comparando cartas 1 e 2;
        printf("\nBatalha das cartas:\n");
        printf("Resultado 1, Vitória Carta 1\n");
        printf("Resultado 0, Vitória Carta 2\n\n"); 

        printf("População - carta 1 x carta 2 - Resultado: %d\n", populacao1 > populacao2);
        printf("Área em km² - carta 1 x carta 2 - Resultado: %d\n", area1 > area2);
        printf("PIB - carta 1 x carta 2 - Resultado: %d\n", pib1 > pib2);  
        printf("Pontos turísticos - carta 1 x carta 2 - Resultado: %d\n", turistico1 > turistico2);  
        printf("Densidade populacional - carta 1 x carta 2 - Resultado: %d\n", densidade1 < densidade2);         
        printf("PIB per Capita - carta 1 x carta 2 - Resultado: %d\n", percapita1 > percapita2);   
        printf("Super Poder - carta 1 x carta 2 - Resultado: %d\n\n\n", pib1 > pib2); 
        */

        printf("\n\nResultado do Combate das cartas:\n\n");

        //Testando o poder população:
        if (populacao1 > populacao2) {
            printf("Poder população - Carta 1 venceu!!!\n");
        } else if (populacao1 < populacao2) { 
            printf("Poder população - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder população - Empate!\n");           
        }

        //Testando o poder área em km²:
        if (area1 > area2) {
            printf("Poder área - Carta 1 venceu!!!\n");
        } else if (area1 > area2) { 
            printf("Poder área - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder área - Empate!\n");           
        }

        //Testando o poder PIB:
        if (pib1 > pib2) {
            printf("Poder PIB - Carta 1 venceu!!!\n");
        } else if (pib1 < pib2) { 
            printf("Poder PIB - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder PIB - Empate!\n");           
        }

        //Testando o poder Pontos Turísticos:
        if (turistico1 > turistico2) {
            printf("Poder pontos turísticos - Carta 1 venceu!!!\n");
        } else if (turistico1 < turistico2) { 
            printf("Poder pontos turísticos - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder pontos turísticos - Empate!\n");           
        }

        //Testando o poder Densidade Populacional:
        if (densidade1 < densidade2) {
            printf("Poder densidade populacional - Carta 1 venceu!!!\n");
        } else if (densidade1 < densidade2) { 
            printf("Poder densidade populacional - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder densidade populacional - Empate!\n");           
        }

        //Testando o poder PIB per Capita:
        if (percapita1 > percapita2) {
            printf("Poder PIB per Capita - Carta 1 venceu!!!\n");
        } else if (percapita1 < percapita2) { 
            printf("Poder PIB per Capita - Carta 2 venceu!!!\n");   
        } else {
            printf("Poder PIB per Capita - Empate!\n");           
        }

         //Testando Super Poder:
        if (super1 > super2) {
            printf("\nSUPER PODER - Carta 1 venceu!!!\n\n\n");
        } else if (super1 < super2) {
            printf("\nSUPER PODER - Carta 2 venceu!!!\n\n\n");
        } else {
            printf("\nSUPER PODER -Empate!\n\n\n");
        }
        
        printf("Fim de Jogo.\n\n\n");

        return 0;

    }