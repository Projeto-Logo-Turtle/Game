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

///s

void chama_mecha(){
    int y_mary, x_mary;
    coord_random(&y_mary, &x_mary);
    //printf("\n\n%d %d\n\n", y_mary, x_mary);
    gotoxy(altura/2, largura/2); //volta
    //printf("aqui vem as func de...");
    }

    void coord_random(int *y_rand, int *x_rand){ char mary = 2;
    srand(time(NULL));
    *y_rand = rand() % 49 + 1;
    *x_rand = rand() % 99 + 1;

    //printf("y_rand = %d, x_rand = %d\n", *y_rand, *x_rand);
    gotoxy(*y_rand, *x_rand);
    printf ("%c", mary);
    }






void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

/*
void gotoxy(int x, int y) {
    COORD coord;  // Estrutura que representa uma coordenada no console
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    // Define a posição do cursor na tela
}





void teto_cha1(){
    int teto = 0, muro = 0;
for (int i = 0; i <= largura; i++)
    {
        gotoxy(teto, muro);
        printf("#");
        Sleep(1000/1000);
        teto++;
    }

 for (int i = 0; i <= altura; i++)
 {


     gotoxy(teto, muro);
        printf("#");
        Sleep(1000/1000);
        muro++; // Incrementa a posição do teto a cada iteração


 }




//exemplo de função que sobrescreve com gotoxy






 }
*/
