/*
DISEÑO*/

#include <stdio.h>
#include <math.h>

int n;

int main()
{
    printf("Ingrese un numero entero: ");
    scanf("%d",&n);

    if ((n % 2 == 0) && !(n % 3 == 0))
    {
        printf("mult. de 2");

    } else if ((n % 3 ==0) && !(n % 2 ==0))
    {
        printf("mult. de 3");
    }else if ((n % 2 ==0) && (n % 3 ==0))
    {
        printf("mult. de 2 y 3");
    }else if (!(n % 2 ==0) && !(n % 3 ==0))
    {
        printf("no es  mult. de 2  ni de 3");
    }

    return 0;
}