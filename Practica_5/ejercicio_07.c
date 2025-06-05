#include <stdio.h>

float cuota, total;
int antig;
float Descuento(float c, int a);

int main()
{
    printf("Ingrese el valor de la cuota: ");
    scanf("%f",&cuota);
    printf("Ingrese la antiguedad como socio/a en anos: ");
    scanf("%d",&antig);

    total = Descuento(cuota,antig);
    printf("El valor general de la CUOTA es de %f y su antiguedad de %d anos.\nEL TOTAL A PAGAR ES: %f",cuota,antig,total);

    return 0;
}

float Descuento(float c, int a)
{
    float por;
    por = (c*8)/100;

    if (a > 5)
    {
        return (c - por);
    }else{
        return c;
    }
}