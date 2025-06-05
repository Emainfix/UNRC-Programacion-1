/*

Analisi:
    Datos: 
        i // Acumulador que me perimitirá contar de uno a cien. Numero entero. 
        msje // Cadena de texto que muestre el mensaje indicando la función del algoritmo

    Resultado: 
        i // Que mostrará sólo los numeros divisibles por 2, 4 y 6

    Relaciones o subproblemas. 

        para i = 1, el bucle  se repetirá mientras i <= 100 y cada vez que se ejecute i = i + 1
            En el bucle se ejecuta un condicional si i mod 2 = 0 y i mod 4 = 0 y i mod 6 = 0
                salida = i

Diseño: 
Algoritmo: NumDivisibles

Lexico:
    i ∈ Z
    msje ∈ cadena

inicio
    msje ← "Numeros divisibles por 2, 4 y 6: "

    para (i ← 1, i <= 100, i ← i + 1) hacer
        si (i mod 2 = 0 y i mod 4 = 0 y i mod 6 = 0) entonces
            salida: i
        fsi
    fpara
Fin

*/

#include <stdio.h>

int i;

int main()
{
    printf("Numero divisibles por 2, 4 y 6: \n");

    for (i = 1; i <= 100; i = i + 1)
    {
        if (i % 2 == 0 && i % 4 == 0 && i % 6 == 0){
            printf("%d\n",i);
        }
    }

    return 0;
}

