#include <stdio.h>

int num;
int dev;

int mult2 (int x) // En este caso solo se ingresan parametros en los parentesis
{
    return (x * 2); // Si o si se usa return en donde se resuleve el interior de la funcion
}

int main ()
{
    num = 2;
    dev = mult2(num); // Se ingresa el parametro actual por copia y se asigna la función a una variable. Ya que es considerada un dato primitivo.

    printf("%d", dev); //Se imprime la variable que es lo mismo que imprimr solo la funcion

    return 0;
}

//A diferencia de la acción en este caso se puede asignar la función mult2 a la variable dev. Ya que la función siempre es un dato (int, float, char), y puede cambiar su valor. 