#include <stdio.h>
#define NMax 20

typedef struct 
{
    int n[NMax];
    int cant;
}TData;

TData notas;

int aprobados, desaprobados;

void CargarNotas(TData *a);
void Promedio (TData a);
void AproDesapro (TData a, int *apro, int *desapro);
void Porcentaje (TData a, int apro, int desapro);

int main()
{
    CargarNotas(&notas);
    Promedio (notas);
    AproDesapro (notas, &aprobados, &desaprobados);
    Porcentaje (notas, aprobados, desaprobados);

    return 0;
}

void CargarNotas(TData *a)
{
    int i;

    printf("Ingrese la cantidad de notas que desea cargar: ");
    scanf("%d",&a->cant);
    while (a->cant > 20 || a->cant  < 1)
    {
        printf("La cantidad debe estar entre 1 y 20: ");
        scanf("%d",&a->cant);
    }

    for (i = 0; i < a->cant ; i++)
    {
        int pos = i + 1;
        printf("Ingrese la nota numero %d: ",pos);
        scanf("%d",&a->n[i]);
        while (a->n[i] > 10 || a->n[i] < 1)
        {
            printf("La noat debe estar entre 1 y 10: ");
            scanf("%d",&a->n[i]);
        }
        
    }
}

void Promedio (TData a)
{
    int i, sum;
    float prom;

    sum = 0;

    for (i = 0; i < a.cant; i++)
    {
        sum = sum + a.n[i];
    }

    prom = sum / a.cant;
    //printf("La suma es: %d",sum);
    printf("El promedio general es: %f\n",prom);
}

void AproDesapro (TData a, int *apro, int *desapro)
{
    int i,contApro, contDesapro;

    contApro = 0;
    contDesapro = 0;

    for (i = 0; i < a.cant; i++)
    {
        if (a.n[i] >= 5)
        {
            contApro ++;
        }else{
            contDesapro ++;
        }
    }
    *apro = contApro;
    *desapro = contDesapro;
    printf("La cantidad de alumnos APROBADOS es: %d \nLa cantidad de alumnos DESAPROBADOS es: %d \n",contApro,contDesapro);
}

void Porcentaje (TData a, int apro, int desapro)
{
    float aproPor, desaproPor;

    aproPor = (apro*100)/a.cant;
    desaproPor = (desapro*100)/a.cant;

    printf("El procentaje de alumnos APROBADOS es del: %f\nEl procentaje de alumnos DESAPROBADOS es del: %f",aproPor,desaproPor);
}