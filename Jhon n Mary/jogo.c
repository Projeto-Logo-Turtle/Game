///l
#include <conio.h>
#include <windows.h>
#include <time.h>
///a
///d
#define largura 100
#define altura 50

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
    char canva[largura][altura];

    ///Code
    system("cls");
    //printf("chegou");

    ///Calls
    primeira_chamada(canva);
    sleep(2);

}



//I_G = Identificador_Generico

void primeira_chamada(char I_G[largura][altura]){

    board(I_G);
    primeira_position(I_G);
    imprimir_tabuleiro(I_G);

}


int board(char I_G[largura][altura]) {

    for (int i = 0; i < altura; i++) {
        I_G[0][i] = '#';
        I_G[largura-1][i] = '#';
    }


    for (int i = 1; i < largura-1; i++) {
        I_G[i][0] = '#';
        I_G[i][altura-1] = '#';
        for (int j = 1; j < altura-1; j++) {
            I_G[i][j] = ' ';
        }
    }

    return 0;
}


void primeira_position(char I_G[largura][altura])// so será usada 1 vez
{

    I_G[largura/2][altura/2] = 1;
}


void imprimir_tabuleiro(char I_G[largura][altura]) {
    for (int i = 0; i < largura; i++) {
        for (int j = 0; j < altura; j++) {
            printf("%c", I_G[i][j]);
        }
        printf("\n");
    }
}

int chama_print_tabu(char I_G[largura][altura]) {
    board(I_G);
    imprimir_tabuleiro(I_G);
    return 0;
}



