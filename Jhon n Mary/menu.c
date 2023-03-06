///l
#include <conio.h>
///a
#include "menu.h"
///d
///s


///blocks

chama_menu(){

system("cls");
printf("Abiu o menu");
getch();
teste_matriz();

}

teste_matriz()
//notas e uma pessoa X pessoas
{
///float matriz de nota [notas][pessoas]
///int x = 3, y = 2;
//char matriz_caractere [x][y] = {a,a,b}{b,b,a}; //como pessoas e suas notas. cada posição é uma materia. cada linha/ chaves é uma pessoa
//exemplo mlhor:
///float matriz_de_notas [3][2]{'2.3','4.5','9.1'}{'8.7','4.4','7,2'}; //largura x altura. quantas colunas por pessoas e quantas pessoas.
//linha 1 (nota[m][1]) pedro, linha 2 (nota[m][2])joão.
//coluna 1 (nota[1][n] (A nota 1 de todas as pessoas.)) = Notas e portugues

///printf ("nota portugues de joão: \n(nota[1]//portugues\n\t\t[2]//joão\nNota 1 do aluno 2:\n%f)";matriz_de_notas[1][2] );

///\n \n\n \n\n\n \n \n kkkkk new colours




//1a dimensão - largura = i = X - colunas, termos para uma pessoa
//2a dimensão - altura = j = y - quantidade de pessoas





/*


M[3]][2]
SIGNIFICA:


3 LINHAS COM 2 COLUNAS

3 PESSOAS COM DUAS NOTAS

[AUMENTA Y][AUMENTA X];

[AUMENTA ALTURA][AUMENTA LARGURA]


[N DE PESSOAS][ MEDIDAS (BRAÇO, PERNA...)]



ESSA É A REFERENCIA DE MATRIZ


*/
float matriz[3][2] = {{2.3, 4.5}, {9.1, 8.7}, {4.4, 7.2}};
printf("se imprime:\n\n pessoal tal \t\te\n nota tal\n\n logo nota[2][1] é\n nota 1 da pessoa 2. pessoa 2, nota 1.\n\nAs linhas são a quantidade de pessoas. e a segunda dimensão é justamente a primeria, que diz qntas notas cabem\n\n ou seja: nota[1][3] = nota [3] na matriz de uma dimensão. logo a nota [2][2] deve ser pessoa 2 nota 2, 8.7 ----- \n\n");


printf("VDD, AINDA TEM O FATO DE QUE ELA COMEÇA EM 0 E 0 \n\n %f\n", matriz[1][1]);
























}
