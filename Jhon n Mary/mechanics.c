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
    char jhon = 1;
    int y_jhon, x_jhon;
    ///code


    ///calls
    //system("pause");
    print_mary(&y_mary, &x_mary);
   // system("pause");
    print_jhon(&y_jhon, &x_jhon);
    //system("pause");
    //printf("\n\n%d %d\n\n", y_mary, x_mary);
    gotoxy(altura/2, largura/2); //volta
    printf("\n");
    //system("pause");




    }



   void print_jhon(int *y_jhon, int *x_jhon){
    char jhon = 1;
    *x_jhon = altura/2;
    *y_jhon = largura/2;
    gotoxy(*y_jhon, *x_jhon);
    printf("%c", jhon);
   }


    void print_mary(int *y_rand, int *x_rand){
    char mary = 2;
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

