#include <stdio.h>
int main (){

    char estado[2]; //Declara a variavel que armazena a letra do estado (entre A e H)
    char codigo[5]; //Declara a variavel que armazena o código da carta (letra do estado + numero)
    char cidade[20];//Declara a variavel que armazena o nome da cidade
    float area; //Declara a variavel que armazena a area da cidade
    float pib; //Declara a variavel que armazena o PIB da cidade
    int turismo, populacao; //Declara as variaveis que armazenam o numero de pontos turisticos e a população
    int opcao;
    

    printf("Seja bem-vindo ao Super Trunfo Países!!!\n"); // Boas-vindas ao programa
    printf("1. Iniciar o jogo.\n");
    printf("2. Regras do Jogo\n");
scanf("%d", &opcao);


switch (opcao)
{
case 1:
    printf("\nDigite a letra do estado (uma Letra de A a H): ");
    scanf("%s", estado); 

    printf("Agora digite o código da sua carta (letra do estado mais um numero): ");
    scanf("%s", codigo);

    printf("Digite a cidade da carta: ");
    scanf("%s", cidade);

    printf("Insira o tamanho populacional de %s: ", cidade);
    scanf("%d", &populacao);

    printf("Digite a área da cidade(km²): ");
    scanf("%f", &area);

    printf("Digite o numero de pontos turísticos: ");
    scanf(" %d", &turismo);

    printf("E por último...digite o PIB(Não use ponto ou virgula): ");
    scanf(" %f", &pib);
    // Todas as linhas entre printf e scanf coletam e armazenam as variaveis declaradas no inicio do programa
    float densidade = populacao / area; //Faz o calculo de densidade populacional utilizando os dados coletados
    float capita = pib / populacao; //Faz o calculo de PIB per capita utilizando os dados coletados
    float inverso_densidade = 1 / densidade; //Faz o calculo inverso da densidade (tem que inverter pois vence a carta que tiver a menor densidade)
    float Super_poder = (float) populacao + area + pib + turismo + capita + inverso_densidade; //Faz a soma de todas as variaveis (incluindo a densidade invertida) para descobrir o super poder da carta
    while (getchar() != '\n'); // Limpa o Buffer para não ter erros

    
    char estado2[2];
    char codigo2[5];
    char cidade2[20];
    float area2;
    float pib2;
    int turismo2, populacao2; //declaração das variaveis da carta de numero 2, seguindo o padrão da numero 1

    printf("\nOk dados da primeira carta armazenados, digite os dados da segunda"); //Informa que os dados da 1 foram coletados corretamente

    printf("\nDigite a letra do estado (uma Letra de A a H): ");
    scanf(" %s", estado2);

    printf("Digite o código da carta (letra do Estado mais um numero): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira aqui o tamanho populacional de %s: ", cidade2);
    scanf("%d", &populacao2);

    printf("Digite a área da cidade(km²): ");
    scanf("%f", &area2);

    printf("Digite quantos pontos turísticos ela possui: ");
    scanf("%d", &turismo2);

    printf("Por último, digite o PIB da sua cidade(não use ponto ou virgula): ");
    scanf("%f", &pib2);
    //Todas as linhas entre printf e scanf coletam e armazenam os dados das varivaveis,seguindo o padrão da carta 1
    
    float densidade2 = populacao2 / area2; //Calculo densidade carta 2
    float capita2 = pib2 / populacao2; //Calculo PIB Per Capita carta 2
    float inverso_densidade2 = 1 / densidade2;
    float Super_poder2 = (float) populacao2 + area2 + pib2 + turismo2 + capita2 + inverso_densidade2;
 
    
    int opcao_atributo1;
    int opcao_atributo2;
    float resultado1, resultado2;

    printf("\nOk, todos os dados foram armazenados com sucesso!\n"); //Informa que os dados foram coletados de maneira correta
   
    
    printf("\nEscolha aqui o primeiro atributo a ser comparado: \n");
    printf("\n1. Comparar População!\n");
    printf("2. Comparar Área!\n");
    printf("3. Comparar PIB! \n");
    printf("4. Comparar pontos turisticos!\n");
    printf("5. Comparar Densidade Demografica!\n");
    scanf("%d", &opcao_atributo1);
  
  
   switch (opcao_atributo1){
   case 1:
    resultado1 = populacao > populacao2 ? 1: 0;
    break;
   case 2:
   resultado1 = area > area2 ? 1 : 0;
   break;
   case 3:
   resultado1 = pib > pib2 ? 1: 0;
   break;
   case 4:
   resultado1 = turismo > turismo2 ? 1 : 0;
   break;
   case 5:
   resultado1 = densidade < densidade2 ? 1 : 0;
   break;
   default:
   printf("Opção Invalida!\n");
    break;  
}
    
    
   printf("\nEscolha aqui o segundo atributo a ser comparado: \n");
   printf("\n1. Comparar População!\n");
   printf("2. Comparar Área!\n");
   printf("3. Comparar PIB! \n");
   printf("4. Comparar pontos turisticos!\n");
   printf("5. Comparar Densidade Demografica!\n");
scanf("%d", &opcao_atributo2);
  
if (opcao_atributo1 == opcao_atributo2) {
    printf("\nVocê escolheu o mesmo atributo!\n");
    return 0;
}else{


switch (opcao_atributo2){
  case 1:
   resultado2 = populacao2 > populacao ? 1 : 0;
   break;
  case 2:
  resultado2 = area2 > area ? 1 : 0;
  break;
  case 3:
  resultado2 = pib2 > pib ? 1 : 0;
  break;
  case 4:
  resultado2 = turismo2 > turismo ? 1 : 0;
  break;
  case 5:
  resultado2 = densidade2 < densidade ? 1 : 0;
  break;
  default:
  printf("Opção Invalida!\n");
   break; 
}
}
   
    
    
    if (resultado1 > resultado2){
        printf("\n*** venceu carta 1***\n");
        printf("Nome da cidade: %s\n", cidade);
        printf(" Atributos comparados: %d e %d", opcao_atributo1, opcao_atributo2);
    }else{
        printf("\n*** venceu carta 2***\n");
        printf("Nome da cidade: %s\n", cidade2);
        printf(" Atributos comparados: %d e %d", opcao_atributo1, opcao_atributo2);
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    break;
    case 2:
    printf("\nInsira os dados de ambas as cartas e escolha os atributos a serem comparados, as cartas com maior valor de atributo somados, vence o jogo!\n");
    printf("Serão comparados 2 atributos, atente-se a não escolher atributos repetidos\n");
    printf("Para o atributo 'Densidade Demografica' vence o que tiver menor valor\n");
    printf("***Divirta-se***\n");
    printf("By Kaikonha Codes\n");
    break;
    default:
    printf("Opção invalida");
        break;
    }

    
    
    
    
    
    
    
    /*
    printf("\nDigite o correspondente ao atributo que quer comparar: ");
    scanf("%d", &opcao_atributo1);
    
    switch (opcao_atributo1) {
    case 1:
        resultado1 = populacao > populacao2 ? 1 : 0;
    break;
    case 2:
        resultado1 = area > area2 ? 1 : 0;
    break;
    case 3:
        resultado1 = pib > pib2 ? 1 : 0;
    break;
    case 4:
        resultado1 = turismo > turismo2 ? 1 : 0;
    break;
    case 5:
        resultado1 = densidade < densidade2 ? 1 : 0;               
    break;
    
    default:
    printf("Opção invalida\n");
        break;
    }
    
    printf("\nOk, primeiro atributo foi selecionado\n");

    printf("\nEscolha aqui o segundo atributo a ser comparado: \n");
    printf("\n1. Comparar População!\n");
    printf("2. Comparar Área!\n");
    printf("3. Comparar PIB! \n");
    printf("4. Comparar pontos turisticos!\n");
    printf("5. Comparar Densidade Demografica!\n");

   
    
    printf("\nDigite o correspondente ao atributo que quer comparar: ");
    scanf("%d", &opcao_atributo2);
    
    if(opcao_atributo1 == opcao_atributo2){
        printf("Você escolheu o mesmo atributo, comece de novo\n");
    }else{
    switch (opcao_atributo2) {
    case 1:
        resultado2 = populacao > populacao2 ? 1 : 0;
    break;
    case 2:
        resultado2 = area > area2 ? 1 : 0;
    break;
    case 3:
        resultado2 = pib > pib2 ? 1 : 0;
    break;
    case 4:
        resultado2 = turismo > turismo2 ? 1 : 0;
    break;
    case 5:
        resultado2 = densidade < densidade2 ? 1 : 0;               
    break;
    
    default:
    printf("Opção invalida\n");
        break;
    }
}
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    int vence_populacao = (populacao > populacao2);
    int vence_area = (area > area2);
    int vence_pib = (pib > pib2);
    int vence_turismo = (turismo > turismo2);
    int vence_densidade = (densidade < densidade2);
    int vence_capita = (capita > capita2);
    int vence_super_poder = (Super_poder > Super_poder2);
    //Declara as variaveis que serão necessárias para comparar carta 1 com carta 2 e faz a comparação entre as estatisticas, linha por linha sendo comparada para exibir o resultado vencedor (1 para carta 1 e 0 para carta 2)
    
    printf("\n*** Resultado de vencedores ***\n (1 vence a Primeira carta, 0 vence a segunda carta)\n Aqui estão os resultados: \n");
    printf("\nVence em População: %d\n", vence_populacao);
    printf("Vence em área: %d\n", vence_area);
    printf("Venc em PIB: %d\n", vence_pib);
    printf("Vence em Pontos Turisticos: %d\n", vence_turismo);
    printf("Vence em Densidade Populacional: %d\n", vence_densidade);
    printf("Vence em PIB Per Capita: %d\n", vence_capita);
    printf("Vence em Super Poder: %d\n", vence_super_poder);
    //Exibe na tela o resultado das comparações, mostrando assim a carta vencedora
    
    if(populacao > populacao2){
        printf("\nComparação de Cartas (Atributo: População)\n");
        printf("Carta 1 - %s: %d\n", cidade, populacao); //imprime os dados nome e população da carta 1
        printf("Carta 2 %s: %d\n", cidade2, populacao2); //imprime os dados nome e população da carta 2
        printf("Resultado: Carta 1 (%s) VENCEU!!!\n", cidade); //Imprime a carta 1 como vencedora, caso a condição do if seja verdadeira
    }else{ 
        printf("Comparação de Cartas (Atributo: População)\n");
        printf("Carta 1 - %s: %d\n", cidade, populacao); //imprime os dados nome e população da carta 1
        printf("Carta 2 %s: %d\n", cidade2, populacao2); //imprime os dados nome e população da carta 2
        printf("Resultado: Carta 2 (%s) VENCEU!!!\n", cidade2);//imprime a carta 2 como vencedora,caso a condição do if seja falsa

    }
    
    ESSA PARTE DO CÓODIGO ESTÁ COMENTADA POIS NÃO SERÁ MAIS UTILIZADA, LEVANDO EM CONSIDERAÇÃO QUE AGORA O JOGADOR IRÁ ESCOLHER OS ATRIBUTOS A SEREM COMPARADOS
    FOI FEITA SOMENTE PARA ESTUDO NAS AULAS ANTERIORES

    */


    /*
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", capita);
    printf("Super Poder: %.2f\n", Super_poder);


    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %f\n", capita2);
    printf("Super Poder: %.2f\n", Super_poder2);

    */

    /*
    switch (opcao_atributo){
    case 1:
        printf("\n%s VS %s\n Atributo a comparar: População\n População da carta 1: %d\n População da carta 2: %d \n", cidade, cidade2, populacao, populacao2);
        if (populacao > populacao2){
        printf("%s Venceu!!\n", cidade);
        }else {
            printf("%s venceu!!\n", cidade2);
        }
        break;
    case 2: 
    printf("\n%s VS %s\n Atributo a comparar: Área\n Área da carta 1: %.2f\n Área da carta 2: %.2f \n", cidade, cidade2, area, area2);
    if (area > area2){
        printf("%s Venceu!!\n", cidade);
        }else 
            printf("%s venceu!!\n", cidade2);
        break;
        case 3: 
        printf("\n%s VS %s\n Atributo a comparar: PIB\n PIB da carta 1: %.2f\n PIB da carta 2: %.2f \n", cidade, cidade2, pib, pib2);
        if (pib > pib2){
            printf("%s Venceu!!\n", cidade);
            }else 
                printf("%s venceu!!\n", cidade2);
            break;
        case 4: 
        printf("\n%s VS %s\n Atributo a comparar: Pontos Turisticos\n Pontos da carta 1: %d\n Pontos da carta 2: %d \n", cidade, cidade2, turismo, turismo2);
        if (turismo > turismo2){
            printf("%s Venceu!!\n", cidade);
            }else 
            printf("%s venceu!!\n", cidade2);
            break;    
        case 5: 
        printf("\n%s VS %s\n Atributo a comparar: Densidade Demografica\n Densidade da carta 1: %f\n Densidade da carta 2: %f \n", cidade, cidade2, densidade, densidade2);
        if (densidade < densidade2){
            printf("%s  Venceu!!\n", cidade);
            }else 
            printf("%s venceu!!\n", cidade2);
            break;    
    default:
    printf("Numero Invalido!!");
        break;
    }
    
    
    */
    
    
    return 0;
}