#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char computador, jogador, repetir;
    int sorteio;
 
 do {
    srand(time(NULL));
    sorteio = rand() % 5;
    printf("(R)ocha-(P)apel-(T)esoura-(L)agarto-(S)pock\n");
    printf("Digite a sua jogada: ");
    jogador = getchar();
    getchar();
    
    while ((jogador != 'r') && (jogador != 'p') && (jogador != 't') && (jogador != 's') && (jogador != 'l')){
    	printf("Opção inválida!\n");
        printf("(R)ocha-(P)apel-(T)esoura-(L)agarto-(S)pock\n");
        printf("Digite a sua jogada: ");
        jogador = getchar();
        getchar();
    }
    
    switch (jogador) {
        
    case 'r':
      printf("Jogador - Pedra\n");
      break;

    case 'p':
      printf("Jogador - Papel\n");
      break;

    case 't':
      printf("Jogador - Tesoura\n");
      break;

    case 'l':
      printf("Jogador - Lagarto\n");
      break;

    case 's':
      printf("Jogador - Spock\n");
      break;
  }
 
    switch (sorteio) {
    case 0:
      computador = 'r';
      printf("Computador - Pedra\n");
      if (computador == jogador) printf("Empate\n");
      else {
        if (jogador == 't' || jogador == 'l') printf("Computador Venceu!\n");
        else {
          printf("Jogador Venceu!\n");
        }
      }
      break;

    case 1:
      computador = 'p';
      printf("Computador - Papel\n");
      if (computador == jogador) printf("Empate!\n");
      else {
        if (jogador == 'r' || jogador == 's') printf("Computador Venceu!\n");
        else {
          printf("Jogador Venceu!\n");
        }
      }
      break;

    case 2:
      computador = 't';
      printf("Computador - Tesoura\n");
      if (computador == jogador) printf("Empate\n");
      else {
        if (jogador == 'p' || jogador == 'l') printf("Computador Venceu!\n");
        else {
          printf("Jogador Venceu!\n");
        }
      }
      break;

    case 3:
      computador = 'l';
      printf("Computador - Lagarto\n");
      if (computador == jogador) printf("Empate\n");
      else {
        if (jogador == 's' || jogador == 'p') printf("Computador Venceu!\n");
        else {
          printf("Jogador Venceu!\n");
        }
      }
      break;

    case 4:
      computador = 's';
      printf("Computador - Spock\n");
      if (computador == jogador) printf("Empate\n");
      else {
        if (jogador == 'r' || jogador == 't') printf("Computador venceu!\n");
        else {
          printf("Jogador Venceu!\n");
        }
      }
      break;
  }
 
    printf("Deseja jogar novamente ? S/N \n");
    repetir = getchar();
    getchar();
    
    while (repetir != 's' && repetir != 'n') {
    printf("Opção inválida!\n");
    printf("Deseja jogar novamente ? S/N \n");
    repetir = getchar();
    getchar();
    }
     
 } while(repetir == 's');
 
 printf("Até a próxima!\n");
 
}