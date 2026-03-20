#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroDoJogador, numeroDocomputador, resultado;
    char tipoDeComparacao;

    //GERAR NUMEROS ALEATORIOS
    srand(time(0));
    numeroDocomputador = rand() % 100 + 1; // numero entre 100 e 1

    // INCIO DO JOGO
    printf("Bem-vindo ao jogo maior, menor ou igual\n");
    printf("Voce deve escolhe um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf("%c", &tipoDeComparacao);
    printf("Digite seu numero(entre 1 e 100): ");
    scanf("%d", &numeroDoJogador);

    //EXIBIR O NUMERO DO COMPUTADOR
    // printf("O numero do computador e: %d\n", numeroDocomputador);

switch (tipoDeComparacao)
{
case 'M' :
case 'm' :
printf("Voce escolheu a opcao maior!\n");
    resultado = numeroDoJogador > numeroDocomputador ? 1 : 0;
    break;
case 'N' :
case 'n' :
printf("Voce escolheu a opcao menor!\n");
    resultado = numeroDoJogador < numeroDocomputador ? 1 : 0;
    break;
case 'I' :
case 'i' :
printf("Voce escolheu a opcao igual!\n");
    resultado = numeroDoJogador == numeroDocomputador ? 1 : 0;
    break;        

default:
printf("Opcao de jogo invalida");
    break;
}

printf("O numero do computador e: %d e o numero do jogador e: %d\n", numeroDocomputador, numeroDoJogador);

if (resultado == 1)
{
     printf("Voce venceu!\n");
} else
{
    printf("Infelizmente voce perdeu!\n");
}



    








}