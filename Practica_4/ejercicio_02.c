/*

Analisis:
    Datos: i // Numero enteros positivos
    msge // Cadena con el numero divisible

    Resultado// Numeros divisibles porn 2, 4 y 6.

    Relaciones o suproblemas// 
    El primer valor de i será 1.
    Luego se comienza el bucle repetir.
    Dentro comienza con un condicional.
    Si i modulo de 2, 4 y 6 es igual a cero, entonces 
    se imprime el mensaje con "i"
    De lo contrario sale del condicional.
    Al salir de condiccional se le suma 1 a i.
    El bucle se repetirá Hasta que i sea mayor o igual a 100.


Diseño:

Algoritmo: NumDivisible

Lexico: 
    i ∈ Z+
    msge ∈ cadena

Inicio:
    i ← 1

    Repetir
        si i % 2 == 0 y i % 4 == 0 y i % 6 == 0 entonces
            salida ← i
        fsi

        i ← i + 1
    Hasta que i >= 100
        msge ← "Fin"
    salida: msge
Fin

*/

#include <stdio.h>

int i;

int main()
{
    i = 1;
    do{
        if (i % 2 == 0 && i % 4 == 0 && i % 6 == 0){
            printf("%d\n",i);
        }
    i = i + 1;
    }while (!(i >= 100));
    printf("Fin");
    return 0;
}