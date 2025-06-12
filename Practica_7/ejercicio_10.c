#include <stdio.h>
#define NMax 20

typedef struct
{
    char a[NMax];
    int cant;
}TData;

TData palabra, palabraInv;

void CargarPalabra (TData *p);
TData Espejo (TData p);
void MostrarArrays (TData p, TData q);

int main()
{
    CargarPalabra(&palabra);

    palabraInv = Espejo(palabra);

    MostrarArrays(palabra,palabraInv);
    return 0;
}

//Cargamos una palabra letra por letra
void CargarPalabra (TData *p) 
{
    int i;
    char letra;

    printf("Ingrese la cantidad de letras de la palabra: ");
    scanf("%d",&p->cant);
    while (p->cant > 20 || p->cant < 1)
    {
        printf("La cantidad debe estar entre 1 y 20: ");//Se verifica que no sea mas larga que lo permitido
        scanf("%d",&p->cant);
    }

    for (i = 0; i < p->cant; i++)
    {
        printf("Ingrese la letra %d: ",i);
        scanf(" %c",&letra);
        p->a[i] = letra;
    }
    
}

//Invierte la palabra
TData Espejo (TData p)
{
    int k,i;
    TData q;

    i = 0;
    k = p.cant - 1;

    while (k >= 0)
    {
        q.a[i] = p.a[k];
        i ++;
        k --;
    }
    return q;
}

//Muestra los dos arrays
void MostrarArrays (TData p, TData q)
{
    int i;
    printf("La palabra original es: \n[");
    for (i = 0; i < p.cant; i++)
    {
        printf(" %c ",p.a[i]);
    }
    printf("]\nLa palabra invertida es: \n[");
    for (i = 0; i < p.cant; i++)
    {
        printf(" %c ",q.a[i]);
    }
    printf("]");
}