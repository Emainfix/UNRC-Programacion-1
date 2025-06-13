#include <stdio.h>
#define NMAX 10

typedef struct
{
    int a[NMAX];
    int cant;
}TData;

TData numeros,numLimpios;

void CargarArreglo (TData *n);
void LimpiarArreglo (TData x, TData *y);
void MostrarArreglo (TData x, TData y);

int main ()
{
    CargarArreglo(&numeros);
    LimpiarArreglo(numeros,&numLimpios);
    MostrarArreglo(numeros,numLimpios);

    return 0;
}


void CargarArreglo (TData *n)
{
    int i, num;

    printf("Ingrese la cantidad de numeros a cargar: ");
    scanf("%d",&n->cant);
    while (n->cant > 10 || n->cant < 1)
    {
        printf("La cantidad debe ser una cantidad entre 1 y 10: ");
        scanf("%d",&n->cant);
    }
    
    for (i = 0; i < n->cant; i++)
    {
        printf("Ingrese el numero para el espacio %d: ",i);
        scanf("%d",&num);
        while (num < 1 || num > 10)
        {
            printf("Ingrese un numero entre 1 y 10: ");
            scanf("%d",&num);
        }
        

        n->a[i] = num;
    }
}

void LimpiarArreglo (TData x, TData *y)
{
    int i,k,l,noRep;
    
    noRep = 1; // Si el numero no se repite en el nuevo array es 1 sino 0
    l = 0; // Es el contador del nuevo array - Cantidad
    for (i = 0; i < x.cant; i++)
    {
        for (k = 0; k < i; k++) // Controlan los numeros del nuevo array
        {
            if (x.a[i] == y->a[k]) // Si se repite noRep es 0 y termina el bucle
            {
                noRep = 0;
                k = i;
            }else{
                noRep = 1; // Si no se repite el numero en el nuevo array es 1
            }
        }
        if (noRep) // Si no se repiten numeros inserta el numero en el nuevo array y le suma 1 a L, el contador de cantidad del nuevo array
        {
            y->a[l] = x.a[i];
            l ++;
        }
    }
    y->cant = l; // El tamaño del nuevo array es igual a lo acumulado por L
}

void MostrarArreglo (TData x, TData y)
{
    int i;

    printf("Arreglo ORIGINAL:\n Cantidad de elementos: %d\nArreglo: [",x.cant);
    for (i = 0; i < x.cant; i++)
    {
        printf(" %d ",x.a[i]);
    }

    printf("]\nArreglo LIMPIO:\n Cantidad de elementos: %d\nArreglo: [",y.cant);
    for (i = 0; i < y.cant; i++)
    {
        printf(" %d ",y.a[i]);
    }
    printf("]");
}