#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 3 - Super trunfo em C: Desenvelvendo a logica do jogo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Thiago j gois lira

int main (){
	
	// Variaives novas aventureiro
	float populacionalCard1, populacionalCard2, pibpercapitaCard1, pibpercapitaCard2;
	//Variaveis nivel mestre
	float superPoderCard1,superPoderCard2;
    
	//Variaves da carta 1
	char estadoCard1 [4]; //Variavel estado 
	char codigoCard1[4];
	char nomeCidadeCard1[50];
	unsigned long int populacaoCard1, npontosTuristicosCard1;
	float areaCard1, pibCard1;

	//Variaves da carta 2
	char estadoCard2 [4];
	char codigoCard2[4];
	char nomeCidadeCard2[50];
	unsigned long int populacaoCard2, npontosTuristicosCard2;
	float areaCard2, pibCard2;

	
	//Lendo dados carta 1
	printf("Preencha dados da carta 1:\nDigite  caracter referente ao estado exemplo MG: \n");
	scanf(" %s",&estadoCard1);
	//Lendo	 codigo do estado
	printf("Digite um numero de 01 a 04 para representar o codigo: \n");
	scanf("%s",codigoCard1);
	//Lendo o nome da cidade
	getchar(); // limpa o buffer antes de usar fgets
	printf("Nome da cidade: \n");
    fgets(nomeCidadeCard1, sizeof(nomeCidadeCard1), stdin);
    nomeCidadeCard1[strcspn(nomeCidadeCard1, "\n")] = '\0'; 
	//População da cidade
	printf("Quantidade de habitantes: \n");
	scanf("%d",&populacaoCard1);
	//Lendo area
	printf("Area da cidade (km2): \n");
	scanf("%f",&areaCard1);
	//Lendo pib da cidade
	printf("PIB (Bilhoes de reais): \n");
	scanf("%f",&pibCard1);
	//Lendo numero de pontos turisticos
	printf("Numero de pontos turisticos:\n");
	scanf("%d",&npontosTuristicosCard1);
	
	getchar(); // limpa o buffer antes de usar fgets
	
	//Lendo dados carta 2
	printf("Preencha dados da carta 2:\nDigite  caracter referente ao estado exemplo MG: \n");
	scanf(" %s",&estadoCard2);
	//Lendo	 codigo do estado
	printf("Digite um numero de 01 a 04 para representar o codigo: \n");
	scanf("%s",codigoCard2);
	//Lendo o nome da cidade
	getchar(); // limpa o buffer antes de usar fgets
	printf("Nome da cidade: \n");
    fgets(nomeCidadeCard2, sizeof(nomeCidadeCard2), stdin);
    nomeCidadeCard2[strcspn(nomeCidadeCard2, "\n")] = '\0'; 
	//População da cidade
	printf("Quantidade de habitantes: \n");
	scanf("%d",&populacaoCard2);
	//Lendo area
	printf("Area da cidade (km2): \n");
	scanf("%f",&areaCard2);
	//Lendo pib da cidade
	printf("PIB (Bilhoes de reais): \n");
	scanf("%f",&pibCard2);
	//Lendo numero de pontos turisticos
	printf("Numero de pontos turisticos:\n");
	scanf("%d",&npontosTuristicosCard2);

	//Manipulações dos dados
	populacionalCard1 = (float) populacaoCard1 / areaCard1;
	populacionalCard2 = (float) populacaoCard2 / areaCard2;
	pibpercapitaCard1 = (float) (pibCard1 *1000000000)/ populacaoCard1;
	pibpercapitaCard2 = (float) (pibCard2 *1000000000)/ populacaoCard2;
		

	//Exibindos detalhes da carta 1
	printf("Carta 1: \n");
	printf("Estado: %s \n", estadoCard1);
	printf("Codigo: %c%s \n",estadoCard1, codigoCard1);
	printf("Nome da cidade: %s \n", nomeCidadeCard1);
	printf("Populacao: %d \n",populacaoCard1);
	printf("Area: %.2f km2 \n",areaCard1);
	printf("PIB: %.2f Bilhoes de reais\n",pibCard1);
	printf("Numero de pontos turisticos: %d \n",npontosTuristicosCard1);
	printf("Desidade Populacional: %.2f hab/km2 \n", populacionalCard1);
	printf("PIB per capita: %.2f reais\n\n", pibpercapitaCard1);
	
	//Exibindos detalhes da carta 2
	printf("Carta 2: \n");
	printf("Estado: %s \n", estadoCard2);
	printf("Codigo: %c%s \n",estadoCard2, codigoCard2);
	printf("Nome da cidade: %s \n", nomeCidadeCard2);
	printf("Populacao: %d \n",populacaoCard2);
	printf("Area: %.2f km2 \n",areaCard2);
	printf("PIB: %.2f Bilhoes de reais\n",pibCard2);
	printf("Numero de pontos turisticos: %d \n",npontosTuristicosCard2);
	printf("Desidade Populacional: %.2f hab/km2 \n", populacionalCard2);
	printf("PIB per capita: %.2f reais\n\n", pibpercapitaCard2);
	
	
	// Cálculos
	printf("**********************************************************************\n");//Separação para visualizar saida
	printf("Comparacao entre cartas (Atributo: Populacao)\n");
	
	printf("Carta 1 - %s (%s): %d \n", nomeCidadeCard1, estadoCard1, populacaoCard1);//Demotração das cartas
	printf("Carta 2 - %s (%s): %d \n", nomeCidadeCard2, estadoCard2, populacaoCard2);
	if(populacaoCard1>populacaoCard2){ //Comparação das cartas
		printf("Resultado: Carta 1 (%s) Venceu",nomeCidadeCard1);
	}
	else if(populacaoCard1<populacaoCard2){//Comparação das cartas
		printf("Resultado: Carta 2 (%s) Venceu",nomeCidadeCard2);
	}
	else{//Comparação das cartas em caso de igualdade
		printf("Resultado: Carta 1 (%s) e Carta 2 (%s) sao iguais.",nomeCidadeCard1,nomeCidadeCard2);
	}
    

return 0;
}
