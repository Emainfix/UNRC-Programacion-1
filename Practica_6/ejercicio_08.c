#include <stdio.h>
#include <string.h>

char precioFinal[40];

typedef struct
{
    char tela[40];
    float precio;
} Tcortina;

Tcortina cortina1, cortina2, cortina3;

void Oferta (Tcortina a, Tcortina b, Tcortina c, char *res);
void IngresarCortina (Tcortina *x);

int main()
{
    IngresarCortina (&cortina1);
    IngresarCortina (&cortina2);
    IngresarCortina (&cortina3);

    Oferta(cortina1, cortina2, cortina3, precioFinal);

    printf("%s",precioFinal);

    return 0;
}

void Oferta (Tcortina a, Tcortina b, Tcortina c, char *res)
{
    float descuento, preCal, preFinal;

    preCal = a.precio + b.precio + c.precio;

    if ((strcmp(a.tela,b.tela)==0) && (strcmp(a.tela,c.tela)==0))
    {
        descuento = c.precio * 0.3;
        preFinal = preCal - descuento;
        sprintf(res, "Tiene un descuento del 30. El precio Final es: %f",preFinal);
    }else{
        sprintf(res, "No aplica descuento. El precio Final es: %f",preCal);
    }
}

void IngresarCortina (Tcortina *x)
{
    printf("NUEVA CORTINA\nIngrese el tipo de tela: ");
    scanf("%s",x->tela);
    printf("Ingrese el precio: ");
    scanf("%f",&x->precio);
}