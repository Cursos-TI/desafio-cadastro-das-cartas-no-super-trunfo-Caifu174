#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char nome[50];
    long long populacao;
    double area;
    long long pib;
    float habitantes_km2;
} Carta;

// Função para imprimir os atributos de uma carta

void imprimirCarta(Carta carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Populacao: %lld\n", carta.populacao);
    printf("Area: %.1f km2\n", carta.area);
    printf("PIB: %lld USD\n", carta.pib);
    printf("Habitantes/km2: %.1f\n", carta.habitantes_km2);
}

int main() {
    printf("***Bem vindo ao jogo Super Trunfo!***\n\n");

    int opcao;
    int escolhaDoJogador;
    Carta jogadorCarta;
    Carta maquinaCarta;

    // Baralho de cartas
    Carta baralho[4];
    strcpy(baralho[0].nome, "A1 Brasil");
    baralho[0].populacao = 211100000;
    baralho[0].area = 8510000.0;
    baralho[0].pib = 2174000000000;
    baralho[0].habitantes_km2 = 23.8;

    strcpy(baralho[1].nome, "A2 Canada");
    baralho[1].populacao = 40100000;
    baralho[1].area = 9985000.0;
    baralho[1].pib = 1710000000000;
    baralho[1].habitantes_km2 = 4.0;

    strcpy(baralho[2].nome, "B1 Estados Unidos");
    baralho[2].populacao = 331000000;
    baralho[2].area = 9834000.0;
    baralho[2].pib = 23320000000000;
    baralho[2].habitantes_km2 = 33.7;

    strcpy(baralho[3].nome, "B2 China");
    baralho[3].populacao = 1444000000;
    baralho[3].area = 9706000.0;
    baralho[3].pib = 17730000000000;
    baralho[3].habitantes_km2 = 148.8;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printf("Menu principal \n");
    printf("1. Iniciar jogo \n");
    printf("2. Ver Regras \n");
    printf("3. Sair \n");
    printf("escolha uma das opcoes: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nIniciando o jogo... \n\n");

            printf("escolha uma das Cartas: \n");
            for (int i = 0; i < 4; i++) {
                printf("%d. %s\n", i + 1, baralho[i].nome);
            }
            printf("Digite o numero da carta desejada: ");
            scanf("%d", &escolhaDoJogador);

            if (escolhaDoJogador >= 1 && escolhaDoJogador <= 4) {
                jogadorCarta = baralho[escolhaDoJogador - 1];
                printf("\nVoce escolheu a carta:\n");
                imprimirCarta(jogadorCarta);

                // Lógica para a máquina escolher uma carta diferente
                int escolhaMaquina;
                do {
                    escolhaMaquina = rand() % 4; // Escolhe um numero aleatório de 0 a 3
                } while (escolhaMaquina == escolhaDoJogador - 1); // Garante que a máquina não escolha a mesma carta

                maquinaCarta = baralho[escolhaMaquina];
                printf("\nA Maquina escolheu a carta:\n");
                imprimirCarta(maquinaCarta);

                // Escolha do atributo para comparar
                int escolhaAtributo;
                printf("\nEscolha o atributo para comparar:\n");
                printf("1. Populacao\n");
                printf("2. Area\n");
                printf("3. PIB\n");
                printf("4. Habitantes/km2\n");
                printf("Digite o numero do atributo: ");
                scanf("%d", &escolhaAtributo);

                printf("\n--- Resultado da Rodada ---\n");
                printf("Sua carta:\n");
                imprimirCarta(jogadorCarta);
                printf("\nCarta da Maquina:\n");
                imprimirCarta(maquinaCarta);
                printf("\nAtributo escolhido: ");

                switch (escolhaAtributo) {
                    case 1:
                        printf("Populacao\n");
                        if (jogadorCarta.populacao > maquinaCarta.populacao) {
                            printf("Voce venceu esta rodada!\n");
                        } else if (maquinaCarta.populacao > jogadorCarta.populacao) {
                            printf("A Maquina venceu esta rodada!\n");
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 2:
                        printf("Area\n");
                        if (jogadorCarta.area > maquinaCarta.area) {
                            printf("Voce venceu esta rodada!\n");
                        } else if (maquinaCarta.area > jogadorCarta.area) {
                            printf("A Maquina venceu esta rodada!\n");
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 3:
                        printf("PIB\n");
                        if (jogadorCarta.pib > maquinaCarta.pib) {
                            printf("Voce venceu esta rodada!\n");
                        } else if (maquinaCarta.pib > jogadorCarta.pib) {
                            printf("A Maquina venceu esta rodada!\n");
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    case 4:
                        printf("Habitantes/km2\n");
                        if (jogadorCarta.habitantes_km2 > maquinaCarta.habitantes_km2) {
                            printf("Voce venceu esta rodada!\n");
                        } else if (maquinaCarta.habitantes_km2 > jogadorCarta.habitantes_km2) {
                            printf("A Maquina venceu esta rodada!\n");
                        } else {
                            printf("Empate!\n");
                        }
                        break;
                    default:
                        printf("Atributo invalido!\n");
                        break;
                }
            } else {
                printf("Opcao de carta invalida!\n");
            }

            break;
        case 2:
            printf("As regras sao...  \n");
            break;
        case 3:
            printf("Saindo do jogo \n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}