#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Lógica Mestre
// Implementação dos requisitos de múltiplos atributos e menus dinâmicos.
// Thiago j gois lira (com correções e implementação dos novos requisitos)

int main() {
    int opcao1, opcao2; // Variavel para escolha de atributo na comparação
    
    // Variaives novas aventureiro
    // Corrigido o typo: "desidade" -> "densidade"
    float densidadeDemograficaCard1, densidadeDemograficaCard2, pibpercapitaCard1, pibpercapitaCard2;
    
    // Variaveis da carta 1
    char nomeCidadeCard1[50];
    unsigned long int populacaoCard1, npontosTuristicosCard1;
    float areaCard1, pibCard1;

    // Variaves da carta 2
    char nomeCidadeCard2[50];
    unsigned long int populacaoCard2, npontosTuristicosCard2;
    float areaCard2, pibCard2;

    // Novas variáveis para a lógica de batalha
    float valorAtr1_Card1 = 0, valorAtr1_Card2 = 0; // Valor do 1º atributo escolhido
    float valorAtr2_Card1 = 0, valorAtr2_Card2 = 0; // Valor do 2º atributo escolhido
    float somaCard1 = 0, somaCard2 = 0;             // Soma dos valores dos atributos
    char nomeAtr1[50], nomeAtr2[50];                // Nomes dos atributos escolhidos

    // Lendo dados carta 1
    printf("Batalha de Cartas\n");
    printf("**********************************************************************\n");
    
    printf("CADASTRO CARTA 1\n");
    printf("Nome do pais: \n");
    fgets(nomeCidadeCard1, sizeof(nomeCidadeCard1), stdin);
    nomeCidadeCard1[strcspn(nomeCidadeCard1, "\n")] = '\0'; 
    
    printf("Quantidade de habitantes: \n");
    // Correção: %lu para unsigned long int
    scanf("%lu", &populacaoCard1); 
    
    printf("Area do pais (km2): \n");
    scanf("%f", &areaCard1);
    
    printf("PIB (Bilhoes de reais): \n");
    scanf("%f", &pibCard1);
    
    printf("Numero de pontos turisticos:\n");
    // Correção: %lu para unsigned long int
    scanf("%lu", &npontosTuristicosCard1);
    
    printf("--------------------------------------------------------------\n");
    
    // Lendo dados carta 2
    getchar(); // limpa o buffer do \n deixado pelo último scanf
    printf("CADASTRO CARTA 2\n");
    printf("Nome do pais: \n");
    fgets(nomeCidadeCard2, sizeof(nomeCidadeCard2), stdin);
    nomeCidadeCard2[strcspn(nomeCidadeCard2, "\n")] = '\0'; 
    
    printf("Quantidade de habitantes: \n");
    // Correção: %lu para unsigned long int
    scanf("%lu", &populacaoCard2);
    
    printf("Area do pais (km2): \n");
    scanf("%f", &areaCard2);
    
    printf("PIB (Bilhoes de reais): \n");
    scanf("%f", &pibCard2);
    
    printf("Numero de pontos turisticos:\n");
    // Correção: %lu para unsigned long int
    scanf("%lu", &npontosTuristicosCard2);

    // Manipulações dos dados
    // Corrigido o typo: "desidade" -> "densidade"
    densidadeDemograficaCard1 = (float)populacaoCard1 / areaCard1;
    densidadeDemograficaCard2 = (float)populacaoCard2 / areaCard2;
    pibpercapitaCard1 = (float)(pibCard1 * 1000000000) / populacaoCard1;
    pibpercapitaCard2 = (float)(pibCard2 * 1000000000) / populacaoCard2;
        
    // Exibindos detalhes da carta 1
    printf("\n--- CARTA 1 --- \n");
    printf("Nome do pais: %s \n", nomeCidadeCard1);
    printf("Populacao: %lu \n", populacaoCard1);
    printf("Area: %.2f km2 \n", areaCard1);
    printf("PIB: %.2f Bilhoes de reais\n", pibCard1);
    printf("Numero de pontos turisticos: %lu \n", npontosTuristicosCard1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadeDemograficaCard1);
    printf("PIB per capita: %.2f reais\n\n", pibpercapitaCard1);
    
    // Exibindos detalhes da carta 2
    printf("--- CARTA 2 --- \n");
    printf("Nome do pais: %s \n", nomeCidadeCard2);
    printf("Populacao: %lu \n", populacaoCard2);
    printf("Area: %.2f km2 \n", areaCard2);
    printf("PIB: %.2f Bilhoes de reais\n", pibCard2);
    printf("Numero de pontos turisticos: %lu \n", npontosTuristicosCard2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadeDemograficaCard2);
    printf("PIB per capita: %.2f reais\n\n", pibpercapitaCard2);
    
    // --- LÓGICA DA BATALHA ---
    printf("**********************************************************************\n");
    printf("INICIO DA BATALHA: %s vs %s\n", nomeCidadeCard1, nomeCidadeCard2);
    printf("Escolha o PRIMEIRO atributo para batalhar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");    
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Armazena o valor e o nome do PRIMEIRO atributo
    switch (opcao1) {
        case 1:
            valorAtr1_Card1 = (float)populacaoCard1;
            valorAtr1_Card2 = (float)populacaoCard2;
            strcpy(nomeAtr1, "Populacao");
            break;
        case 2:
            valorAtr1_Card1 = areaCard1;
            valorAtr1_Card2 = areaCard2;
            strcpy(nomeAtr1, "Area");
            break;
        case 3:
            valorAtr1_Card1 = pibCard1;
            valorAtr1_Card2 = pibCard2;
            strcpy(nomeAtr1, "PIB");
            break;
        case 4:
            valorAtr1_Card1 = (float)npontosTuristicosCard1;
            valorAtr1_Card2 = (float)npontosTuristicosCard2;
            strcpy(nomeAtr1, "Pontos Turisticos");
            break;
        case 5:
            valorAtr1_Card1 = densidadeDemograficaCard1;
            valorAtr1_Card2 = densidadeDemograficaCard2;
            strcpy(nomeAtr1, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida! Reinicie o jogo.\n");
            return 1; // Encerra o programa se a opção for inválida
    }

    printf("**********************************************************************\n");
    printf("Escolha o SEGUNDO atributo (diferente de %s):\n", nomeAtr1);
    
    // Menu Dinâmico: não exibe a opção já escolhida
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Numero de pontos turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade populacional\n");
    printf("Opcao: ");
    scanf("%d", &opcao2);

    // Validação: verifica se é o mesmo atributo ou opção inválida
    if (opcao2 == opcao1) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes. Reinicie o jogo.\n");
        return 1;
    }

    // Armazena o valor e o nome do SEGUNDO atributo
    switch (opcao2) {
        case 1:
            valorAtr2_Card1 = (float)populacaoCard1;
            valorAtr2_Card2 = (float)populacaoCard2;
            strcpy(nomeAtr2, "Populacao");
            break;
        case 2:
            valorAtr2_Card1 = areaCard1;
            valorAtr2_Card2 = areaCard2;
            strcpy(nomeAtr2, "Area");
            break;
        case 3:
            valorAtr2_Card1 = pibCard1;
            valorAtr2_Card2 = pibCard2;
            strcpy(nomeAtr2, "PIB");
            break;
        case 4:
            valorAtr2_Card1 = (float)npontosTuristicosCard1;
            valorAtr2_Card2 = (float)npontosTuristicosCard2;
            strcpy(nomeAtr2, "Pontos Turisticos");
            break;
        case 5:
            valorAtr2_Card1 = densidadeDemograficaCard1;
            valorAtr2_Card2 = densidadeDemograficaCard2;
            strcpy(nomeAtr2, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida! Reinicie o jogo.\n");
            return 1; // Encerra o programa se a opção for inválida
    }

    // --- CÁLCULO E EXIBIÇÃO DOS RESULTADOS ---

    // Soma dos Atributos
    somaCard1 = valorAtr1_Card1 + valorAtr2_Card1;
    somaCard2 = valorAtr1_Card2 + valorAtr2_Card2;
    // Exibição Clara do Resultado
    printf("\n\n--- RESULTADO DA BATALHA ---\n");
    printf("Cartas: %s vs %s\n", nomeCidadeCard1, nomeCidadeCard2);
    printf("Atributos Escolhidos: %s e %s\n", nomeAtr1, nomeAtr2);
    printf("--------------------------------------------------------------\n");


    // Comparação com Múltiplos Atributos (Exibição individual)
    printf("Comparacao Individual (Regras do Jogo):\n");
    // Comparando Atributo 1
    printf("  %s: ", nomeAtr1);
    if (opcao1 == 5) { // Regra da Densidade (menor vence)
        if (valorAtr1_Card1 < valorAtr1_Card2) printf("%s vence (menor valor)\n", nomeCidadeCard1);
        else if (valorAtr1_Card2 < valorAtr1_Card1) printf("%s vence (menor valor)\n", nomeCidadeCard2);
        else printf("Empate\n");
    } else { // Regra Padrão (maior vence)
        if (valorAtr1_Card1 > valorAtr1_Card2) printf("%s vence (maior valor)\n", nomeCidadeCard1);
        else if (valorAtr1_Card2 > valorAtr1_Card1) printf("%s vence (maior valor)\n", nomeCidadeCard2);
        else printf("Empate\n");
    }
    
    // Comparando Atributo 2
    printf("  %s: ", nomeAtr2);
    if (opcao2 == 5) { // Regra da Densidade (menor vence)
        if (valorAtr2_Card1 < valorAtr2_Card2) printf("%s vence (menor valor)\n", nomeCidadeCard1);
        else if (valorAtr2_Card2 < valorAtr2_Card1) printf("%s vence (menor valor)\n", nomeCidadeCard2);
        else printf("Empate\n");
    } else { // Regra Padrão (maior vence)
        if (valorAtr2_Card1 > valorAtr2_Card2) printf("%s vence (maior valor)\n", nomeCidadeCard1);
        else if (valorAtr2_Card2 > valorAtr2_Card1) printf("%s vence (maior valor)\n", nomeCidadeCard2);
        else printf("Empate\n");
    }
    printf("--------------------------------------------------------------\n");

    // 3 e 4. Resultado pela Soma e Tratamento de Empates
    printf("RESULTADO FINAL (PELA SOMA DOS VALORES):\n");
    if (somaCard1 > somaCard2) {
        printf("VENCEDOR: %s!\n", nomeCidadeCard1);
    } else if (somaCard2 > somaCard1) {
        printf("VENCEDOR: %s!\n", nomeCidadeCard2);
    } else {
        // 4. Tratamento de Empates
        printf("RESULTADO: Empate!\n");
    }
    printf("**********************************************************************\n");

    return 0;
}