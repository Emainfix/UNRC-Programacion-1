/*Dado un arreglo A ya cargado con t números enteros positivos menores o iguales a 10, y 
ordenado de menor a mayor, desarrolle una acción que permita insertar un elemento, en el lugar que le 
corresponde para mantener el orden creciente.*/

#include <stdio.h>

#define NMax 10

typedef struct 
{
    int n[NMax];
    int cant;
}TData;

TData numeros1, numeros2;

void InsertarNumero(TData num1, TData *num2);
void MostrarArreglos(TData num1, TData num2);

int main()
{
    //Arreglo ya cargado con 5 valores
    numeros1.cant = 5;
    numeros1.n[0] = 2;
    numeros1.n[1] = 3;
    numeros1.n[2] = 4;
    numeros1.n[3] = 6;
    numeros1.n[4] = 8;

    InsertarNumero(numeros1,&numeros2);
    MostrarArreglos(numeros1,numeros2);

    return 0;
}

//Inserta el numero que se da
void InsertarNumero(TData num1, TData *num2)
{
    int i,k,newNum;

    printf("Ingrese el numero a insertar: ");
    scanf("%d",&newNum);
    while (newNum <= 0 || newNum > 10) //Controla que el numero a insertar esté entre 1 y 10
    {
        printf("El numero debe estar entre 1 y 10: ");
        scanf("%d",&newNum);
    }
    

    k = 0;

    for (i = 0; i < num1.cant; i = i + 1) // Copia cada valor del array1 al array2
    {
        if (newNum <= num1.n[i] && i == k) // Si el numero a insertar es igual o menor a alguno en el array1 se inserta en el array2
        {
            num2->n[k] = newNum;
            num2->cant = num1.cant;
            num2->cant = num2->cant + 1;

            k = k + 1;
        }

        if ((i+1)==num1.cant && num2->cant == 0) // Si el control del array1 llegó a su final inserta el nuevo numero al final del array2
        {
            num2->n[k] = num1.n[i];
            k = k + 1;
            num2->n[k] = newNum;
            num2->cant = num1.cant;
            num2->cant = num2->cant + 1;

        }else{
            num2->n[k] = num1.n[i]; // Siempre que llegué a esta condición se copia el valor del array1 al array2
            k = k + 1;
        }
        
    }
}

void MostrarArreglos(TData num1, TData num2) // Muestra los valores del array1 y el array2 con el nuevo numero insertado
{
    int i;
    int k;
    printf("El contenido del arreglo original es:\n[ ");

    for (i = 0; i < num1.cant; i = i + 1)
    {
        printf("%d ",num1.n[i]);
    }
    printf("]");

    printf("\nEl Contenido del nuevo arreglo es:\n[ ");

    for (k = 0; k < num2.cant; k = k + 1)
    {
        printf("%d ",num2.n[k]);
    }
    printf("]");
}

