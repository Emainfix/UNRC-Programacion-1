/*
Analisis:
    Datos:
        i // Contador
        a // Base de la potencia. Num entero
        y // Potencia. Num entero
        pot // Resultado de la potencia. Num entero

    Resultado: 
        msje // Informa el resultado de la pótencia con un mensaje
    
    Relaciones o subproblemas: 
        Bucle para i = 1 mientras i <= y i = i + 1
            pot = pot * a

Diseño: 
Algoritmo: Potencia

    Lexico: 
        i, a, y, pot ∈ Z
        msje ∈ cadena

    Inicio: 
        entrada: a,y
        pot ← 1
        Para (i ← 1, i <= y, i ← i + 1) hacer
            pot = pot * a
        fpara
        salida: pot
    msje ← "La potencia de a elevado a la y es: pot"
    salida: msje a y pot

    Fin
*/

#include <stdio.h>

int i,a,y,pot;

int main()
{
    printf("Ingrese la base de la potencia: ");
    scanf("%d",&a);
    printf("Ingrese el exponente de la potencia: ");
    scanf("%d",&y);
    pot = 1;
    for (i = 1; i <= y; i = i + 1)
    {
        pot = pot * a;
    }
    printf("La potencia de %d elevado al %d es: %d",a,y,pot);

    return 0;
}