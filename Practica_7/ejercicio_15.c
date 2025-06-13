#include <stdio.h>
#include <string.h>

#define Max 5

typedef struct
{
    char n[Max][15];
    int cant;
}TData;

TData agenda;
int opcion, fin;


int Vacia (TData x)
{
    if(x.cant < 1)
    {
        return 1;
    }else{
        return 0;
    }
}


int main() {
    char cadenas[3][20];
    strcpy(cadenas[0], "Hola");
    strcpy(cadenas[1], "Mundo");
    strcpy(cadenas[2], "C");

    printf("%s\n", cadenas[0]);
    printf("%s\n", cadenas[1]);
    printf("%s\n", cadenas[2]);
    return 0;
}