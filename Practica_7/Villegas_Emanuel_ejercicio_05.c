#include <stdio.h>
#define Max 200
typedef struct
{
    float a[Max];
    int cant;
} TData;

TData misNotas;
float promedio;

void cargarNotas(TData *notas);
void promedioNotas(TData notas, float *prom);

int main()
{
    cargarNotas(&misNotas);
    promedioNotas(misNotas, &promedio);

    printf("El promedio es: %f", promedio);

    return 0;
}

void cargarNotas(TData *notas)
{
    int i;
    // cantidad de notas a cargar 
    printf("Ingrese la cantidad de notas que desea cargar: ");
    scanf("%d",&notas->cant);

    for (i = 1; i <= notas->cant; i = i + 1)
    // obtener cada nota
    {
        printf("Ingrese la nota numero %d:\n",i);
        scanf("%f",&notas->a[i]);
    }
}

void promedioNotas(TData notas, float *prom)
{
    float sum;
    int i;

    sum = 0;

    for (i = 1; i <= notas.cant; i = i + 1)
    {
        sum = sum + notas.a[i];
    }

    *prom = sum / notas.cant;
}

