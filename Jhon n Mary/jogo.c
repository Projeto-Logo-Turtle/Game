///l
#include <conio.h>
#include <windows.h>
///a
///d
#define largura 100

///s

void chama_game()
{
    int teto = 0, muro = 0;
    for (int i = 0; i < largura; i++)
    {
        gotoxy(teto, muro);
        printf("#");
        teto++; // Incrementa a posição do teto a cada iteração
    }

    //system("cls");
}
