#ifndef MECHANICS_H_INCLUDED
#define MECHANICS_H_INCLUDED


///signatures
void chama_mecha();
void print_mary(int *y_rand, int *x_rand);
void print_jhon(int *y_jhon, int *x_jhon);
void gotoxy(int x, int y);

///var
typedef struct entrada
    {
        char comando[10]; //Diminui o tamanho do array de char (string)
        int passos;
    } entr;

#endif // MECHANICS_H_INCLUDED
