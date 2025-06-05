/*
29 días: 2

30 días: 4, 6, 9, 11

31 días: 1, 3, 5, 7, 8, 10, 12


*/

#include <stdio.h>

int mes;

int main()
{
    printf("ingrese el numero de mes entre 1 y 12: ");
    scanf("%d",&mes);

    if (mes <= 0 || mes > 12)
    {
        printf("Ingrese un mes valido");
    }
    else if (mes == 2)
    {
        printf("El mes tiene 29");
    }
    else if ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))
    {
        printf("El mes tiene 30 dias");
    }else{
        printf("El mes tiene 31 dias");
    }

    return 0;
}