#include <stdio.h>

int num;
int dev;

void mult2 (int x, int *res) // Entre los parentesis puede tener entrada y también el dato de salida
{
    printf("estoy dentro");// El * antes del nombre de la variable significa que es un valor de salida.
    *res = x * 2; // No se usa return ya que la salida está entre los parentesis
}



int main ()
{
    num = 2;
    
    mult2(num, &dev); // Con el & se dice al parametro actual dev que se le asigne la solución de la acción.

    printf("%d", dev); // Se imprime la variable de salida. 

    return 0;
}

//A diferencia de la función en este caso no se puede asignar la acción mult2 a una variable dev. Ya que la acción siempre es un grupo de código, no es un solo dato y nunca cambia su valor. 