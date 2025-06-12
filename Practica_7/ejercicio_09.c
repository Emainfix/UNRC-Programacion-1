#include <stdio.h>
#define NMax 20

typedef struct
{
    char a[NMax];
    int cant;
}TData;

TData palara;

void CargarPalabra(TData *p);
int Capicua (TData p);

int main()
{
    CargarPalabra(&palara);
    
    // Informa si es capicua o no
    if (Capicua (palara))
    {
        printf("VERDADERO: Es capicua.");
    }else{
        printf("FALSO: No es capicua.");
    }
}

// Carga una palabra y su largo
void CargarPalabra(TData *p)
{
    int i;
    char letra;
    printf("Ingrese la cantidad de caracteres del arreglo: ");
    scanf("%d",&p->cant);
    while (p->cant > 20 || p->cant < 1)
    {
        printf("La cantidad debe estar entre 1 y 20: ");
        scanf("%d",&p->cant);
    }
    printf("Ingrese la palara una letra a la vez: \n");
    for (i = 0; i < p->cant; i++)
    {
        printf("Ingrese la letra %d: ",i);
        scanf(" %c",&letra);
        p->a[i] = letra;
    }
    
}

// Determina si es capicua
int Capicua (TData p)
{
    int k,i, control;
    TData q;

    i = 0;
    k = p.cant - 1;
    while (k >= 0)
    {
        q.a[i] = p.a[k];
        i++;
        k--;
    }

    for (i = 1; i < p.cant; i ++)
    {
        if (p.a[i] != q.a[i])
        {
            control = 0;
        }else{
            control = 1;
        }
    }

    return control;
}