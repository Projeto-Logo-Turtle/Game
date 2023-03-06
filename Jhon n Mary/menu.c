///l
#include <conio.h> //para o getch
///a
#include "menu.h"
///d
///s


///blocks

void chama_menu()
{
/// Essa será uma function Sub-main, que chama as do menu. ela esta e somente está abaixo da main; mas coordenando as outras

///code
    system("cls");
///calls
//teste_matriz(); pelo fato de eu ter mudado o nome... pera, mudei o nome da var, o da chamada ficou igual. já estava me equivocando.
    design();
    switch_menu();

}

void design()//declara-la sem retorno para não retornar 0, valores descartados em valor ou ponteiros genéricos¹
{
    deadline();
    printf("\n\n\t\t\t\t\tBem-vindo ao Logo Trutle!\n\n");
    printf("\t\t\t1. Iniciar Jogo\n");
    printf("\t\t\t2. About\n");
    printf("\t\t\t3. Exit\n\n");
    deadline();
}



void deadline()
{
    char ascii = 4;
    for(int i = 0; i<= largura; i++)
    {
        printf("%c", ascii);
        //ascii++;
    }
    printf("\n");
}



void switch_menu()//vamos testar a portabilidade do cód.
{

    char indicador; //Variáveis locais optarei por padronizar

options:

    indicador = getch();
    switch (indicador)
    {
    case '1':
        system("cls");
        chama_game();

        break;
    case '2':
        //about();
        break;
    case '3':
        //xau();
        break;
    default:
        goto options;
    }
}
