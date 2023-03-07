///l
#include <conio.h>
#include <windows.h>
#include <time.h>
///a
#include "mechanics.h"
///d
#define altura 50
#define largura 100

///s

/*void chama_game()
{

   ///Calls
teto_cha1();

system("pause");

}*/


 void chama_game()
{
    ///Variables
    char canva[altura][largura];

    ///Code
    system("cls");
    //printf("chegou");

    ///Calls
    primeira_chamada(canva);
    chama_mecha();


}



//I_G = Identificador_Generico

void primeira_chamada(char I_G[altura][largura]){

    board(I_G);

    imprimir_tabuleiro(I_G);

}


int board(char I_G[altura][largura]) {

    for (int i = 0; i < largura; i++) {
        I_G[0][i] = '#';
        I_G[altura-1][i] = '#';
    }


    for (int i = 1; i < altura-1; i++) {
        I_G[i][0] = '#';
        I_G[i][largura-1] = '#';
        for (int j = 1; j < largura-1; j++) {
            I_G[i][j] = ' ';
        }
    }

    return 0;
}





void imprimir_tabuleiro(char I_G[altura][largura]) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("%c", I_G[i][j]);
        }
        printf("\n");
    }
}

int chama_print_tabu(char I_G[altura][largura]) {
    board(I_G);
    imprimir_tabuleiro(I_G);
    return 0;
}



