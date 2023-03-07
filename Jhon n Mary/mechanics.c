///l
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

///a
#include "jogo.h"
#include "mechanics.h"
///d
#define altura 50
#define largura 100
///s

void chama_mecha(){
    ///var
    int y_mary, x_mary;
    int y_jhon, x_jhon;/// cria a var
    entr quantidade[20]; // corrigido nome do vetor
    int state = 0;
    int pontos = 0;
    ///code


    ///calls
    print_mary(&y_mary, &x_mary);///coloca como indo endereço
    print_jhon(&y_jhon, &x_jhon);                                   ///1 - passo o endereço
    gotoxy(altura/2, largura/2); //volta
    printf("\n");

    recebe_comando(quantidade, &state); // corrigido nome do ponteiro
    printf("Comando: %s\n", quantidade[state].comando);
    printf("Valor: %d\n", quantidade[state].passos);
    }


void print_jhon(int *y_jhon, int *x_jhon)
{
    char jhon = 1;
    *x_jhon = altura/2;
    *y_jhon = largura/2;
    gotoxy(*y_jhon, *x_jhon);
    printf("%c", jhon);
}


void print_mary(int *y_rand, int *x_rand)///peega de recebendo
{
    char mary = 2;
    srand(time(NULL));
    *y_rand = rand() % 49 + 1;
    *x_rand = rand() % 99 + 1;

    //printf("y_rand = %d, x_rand = %d\n", *y_rand, *x_rand);
    gotoxy(*y_rand, *x_rand);
    printf ("%c", mary);
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

void recebe_comando(entr quantidade[20], int *indice) {
    ALOCATION_COMANDO:
    printf("\nDigite o Comando %d: ", *indice);
    scanf("%s", quantidade[*indice].comando);

    if(strcmp(quantidade[*indice].comando, "fim") == 0) {
        // fazer algo
    } else if(!(strcmp(quantidade[*indice].comando, "sudoeste") == 0 ||
               strcmp(quantidade[*indice].comando, "sudeste") == 0 ||
               strcmp(quantidade[*indice].comando, "noroeste") == 0 ||
               strcmp(quantidade[*indice].comando, "nordeste") == 0 ||
               strcmp(quantidade[*indice].comando, "leste") == 0 ||
               strcmp(quantidade[*indice].comando, "oeste") == 0 ||
               strcmp(quantidade[*indice].comando, "norte") == 0 ||
               strcmp(quantidade[*indice].comando, "sul") == 0)) {
        printf("\nRepita:");
        goto ALOCATION_COMANDO; // corrigido nome da label
    }

    ALOCATION_VALOR:
    printf("Valor %d: ", *indice);
    scanf("%d", &quantidade[*indice].passos);

}
/*
void move_jhon(entr quantidade[20], int *indice, int *pontos) ///2 - pra o ponteiro ir lá

void move_jhon(entr quantidade[20], int *indice) {
    char jhon = 1;
    int x = 0, y = 0; // initialize x and y variables

    if (strcmp(quantidade[*indice].comando, "leste") == 0) {
        printf("-");
        for (int j = 0; j < quantidade[*indice].passos; j++) {
            if (matriz[x][y + 1] == '|' || matriz[x][y + 1] == '-' || matriz[x][y + 1] == '#') {
                lose();
            } else {
                y++;
                printf("-");
            }
        }
        printf("%c", jhon);
    } else if (strcmp(quantidade[*indice].comando, "oeste") == 0) {
        printf("-");
        for (int j = 0; j < quantidade[*indice].passos; j++) {
            if (matriz[x][y - 1] == '|' || matriz[x][y - 1] == '-' || matriz[x][y - 1] == '#') {
                lose();
            } else {
                y--;
                printf("-");
            }
        }
        printf("%c", jhon);
    } else if (strcmp(quantidade[*indice].comando, "norte") == 0) {
        printf("|");
        for (int j = 0; j < quantidade[*indice].passos; j++) {
            if (matriz[x - 1][y] == '|' || matriz[x - 1][y] == '-' || matriz[x - 1][y] == '#') {
                lose();
            } else {
                x--;
                printf("|");
            }
        }
        printf("%c", jhon);
    } else if (strcmp(quantidade[*indice].comando, "sul") == 0) {
        printf("|");
        for (int j = 0; j < quantidade[*indice].passos; j++) {
            if (matriz[x + 1][y] == '|' || matriz[x + 1][y] == '-' || matriz[x + 1][y] == '#') {
                lose();
            } else {
                x++;
                printf("|");
            }
        }
        printf("%c", jhon);
    }
}


void lose (){break}

^^falta corrigir daqui pra cima^^

*/

