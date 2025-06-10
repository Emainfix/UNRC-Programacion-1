/*Para un software de una lotería nos solicitan que proveamos un conjunto de hasta 30 números 
enteros comprendidos entre 0 y 999, generados aleatoriamente. Implementa una solución modular que 
almacene los números en un arreglo. (Usar un TData adecuado al problema planteado). Los números 
no pueden estar repetidos(realizar ese control). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NMax 30

typedef struct{
    int n[NMax];
    int cant; 
}TData;
TData num;

void GenerarNumeros(TData *numeros);
void MostrarNumeros(TData a);
void VerificarNumeros(TData b);

int main() {
    GenerarNumeros(&num);
    MostrarNumeros(num);
    VerificarNumeros(num);
    return 0;
}

void GenerarNumeros(TData *numeros)
{
    int i,x,alea;
    const int min = 0, max = 999;
    srand (time(NULL));

    printf("Ingrese la cantidad de numeros a generar: ");
    scanf("%d",&numeros->cant);

    while (numeros->cant > 30 || numeros->cant < 1) // Verifico que la cantidad cumpla con los requerimientos
        {
            printf("Ingrese una cantidad igual o menor a 30 y mayor a 0: ");
            scanf("%d",&numeros->cant);
        }

    for (i = 0; i < numeros->cant; i = i + 1)
    {
        alea = rand() % (max-min+1)+min; // Numeros aleatorios

        for (x = 0; x <= i; x = x + 1) // Verifico que no se repitan
        {
            if (numeros->n[x] == alea)
            {
                while (numeros->n[x] == alea) // Si se repiten se cambian hasta que sean diferentes
                {
                    alea = rand() % (max-min+1)+min;
                }
                x = -1;
            }
            
        }

        numeros->n[i] = alea;
    }
}

void MostrarNumeros(TData a)
{
    printf("Los numero guardados son:\n");
    int i;

    for (i = 0; i < a.cant; i = i + 1)
    {
        printf("%d\n",a.n[i]);
    }
}

void VerificarNumeros(TData b) // Verifica que no se repitan. Si se repiten muestra en un mensaje cual y en que posición.
{
    int i,x;

    for (i=0; i <= b.cant-1; i = i+1)
    {
        for (x=0; x < b.cant; x = x+1)
        {
            
            if ((i != x)&&(b.n[i] == b.n[x]))
            {
                printf("Se repite el numero %d en el bucle %d\n",b.n[x],x);
            }
        }
    }
}