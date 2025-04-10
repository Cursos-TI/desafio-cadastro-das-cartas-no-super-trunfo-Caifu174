#include <stdio.h>

int main() {

    //carta 1

    int populacao;
    float area;
    float pib;
    int turistico;
    char nome[20];
    char codigo[20];

    //começar pegando os dados e se apresentando

    printf("Bem vindo ao Desafio Super Trunfo! \n");
    printf("Primeiro vamos comecar com o jogador numero um.\n");

    printf("Qual o nome do seu Estado?: \n");
    scanf("%s", nome);

    printf("Qual o codigo da sua carta?: \n");
    scanf("%s", codigo);

    printf("Qual a populacao do seu Estado?: \n");
    scanf("%d", &populacao);

    printf("Qual a area do seu Estado?: \n");
    scanf("%f", &area);

    printf("Qual o PIB do seu Estado?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos aproximadamente tem seu Estado?: \n");
    scanf("%d", &turistico);

    //aparentemente não é possivel colocar acento no printf

    printf("Carta 1 \n");
    printf("Codigo da carta:%s \n", codigo);

    printf("Estado:%s \n", nome);
    printf("Populacao:%d \n", populacao);
    printf("Area:%f km2 \n", area);
    printf("PIB:%f \n", pib);
    printf("Pontos Turisticos:%d \n", turistico);

    printf("Perfeito! \n");

    //Jogador numero dois agora

    printf("Sua vez jogador numero 2! \n");

    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    char nome1[20];
    char codigo1[20];

    //coloquei apenas o numero um para eu conseguir diferenciar os dois jogadores.

    printf("Qual o nome do seu Estado?: \n");
    scanf("%s", nome1);

    printf("Qual o codigo da sua carta?: \n");
    scanf("%s", codigo1);

    printf("Qual a populacao do seu Estado?: \n");
    scanf("%d", &populacao1);

    printf("Qual a area do seu Estado?: \n");
    scanf("%f", &area1);

    printf("Qual o PIB do seu Estado?: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos aproximadamente tem seu Estado?: \n");
    scanf("%d", &turistico1);

    printf("Carta 2 \n");
    printf("Codigo da carta:%s \n", codigo1);

    printf("Estado:%s \n", nome1);
    printf("Populacao:%d \n", populacao1);
    printf("Area:%f km2 \n", area1);
    printf("PIB:%f \n", pib1);
    printf("Pontos Turisticos e:%d \n", turistico1);

    printf("Essa e a primeira versao do jogo, espero que gostem! \n");
    printf("Futuramente colocarei comparacao entre as duas cartas. \n");
    printf("Muito obrigado por jogar! \n");

    //Não sei se eu poderia fazer isso mas para o segundo jogador eu simplesmente copiei e colei o codigo do primeiro jogador.
    return 0;

}