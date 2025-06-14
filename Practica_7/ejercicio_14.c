/*Desarrollar un algoritmo que permite cargar un arreglo de caracteres, y modifique el arreglo 
de modo tal de que todos los espacios en blanco sean eliminados, para esto debe desplazar los 
caracteres situados a la derecha del espacio en blanco, un lugar hacia la izquierda. Ejemplo sea A un 
arreglo de caracteres A=(c,a,s,a, ,a,m,a,r,i,l,l,a, , c,a,s,a, , a,z,u,l), debe quedar una vez eliminado los 
espacios en blanco: A=(c,a,s,a,a,m,a,r,i,l,l,a,c,a,s,a,a,z,u,l). Para resolver crear las acciones: 
CargarFrase(), EliminaBlancos() y MostrarFrase(), cada una adecuadamente parametrizada. Puede 
rehusar acciones creadas en ejercicios anteriores. */
#include <stdio.h>
#define Max 100

typedef struct 
{
    char f[Max];
    int cant;
}TData;

TData frase;

void CargarFrase(TData *x);
void EliminarBlancos(TData *x);
void MostrarFrase (TData x);



int main()
{
    CargarFrase(&frase);
    printf("\nLa frase Original es:\n");
    MostrarFrase(frase);

    EliminarBlancos(&frase);
    printf("\n\nLa frase Limpia es:\n");
    MostrarFrase(frase);

    return 0;
}

void CargarFrase(TData *x)
{
    int i;

    printf("Ingrese la cantidad de caracteres a cargar: ");
    scanf("%d",&x->cant);
    while (x->cant > 100 || x->cant < 1)
    {
        printf("Ingrese una cantidad entre 1 y 100: ");
        scanf("%d",&x->cant);
    }

    for (i = 0; i < x->cant; i++)
    {
        printf("Caracter %d: ",i);
        scanf(" %c",&x->f[i]);
    }
    
}

void EliminarBlancos(TData *x)
{
    int i,k;
    TData y;

    k = 0;
    for (i = 0; i < x->cant; i++)
    {
        if (x->f[i]== '-')
        {
            k --;
        }else{
            y.f[k] = x->f[i];
        }
        k ++;
    }
    x->cant = k;

    for (i = 0; i < x->cant; i++)
    {
        x->f[i] = y.f[i];
    }
}

void MostrarFrase (TData x)
{
    int i;
    for (i = 0; i < x.cant; i ++)
    {
        printf("%c",x.f[i]);
    }
}