/*

Algoritmo MostrarI2 (e)  
Léxico  
    i ∈ Z  
    msge ∈ cadena  
Inicio  
    i ← 1  
    si i > o entonces  
        repetir  
            msge ← “Soy i, mi valor es:”  
            Salída: msge i  
            i ← i + 1  
        hasta que i>=8  
            msge <-- “Soy yo de nuevo, valgo:” 
        Salida: msge i  
    sino  
        msge <-- “Solo se que no se nada” 
    Salida: msge i  
    fsi  
Fin 

Solución: En este algoritmo se verifica una condición para que comience el bucle. Este se repite 7 veces hasta slir e imprimir un ultimo mensaje.
El problema es que en el si entonces, la condición sino nunca se cumplirá ya que el valor de i siempres erá uno y por ende el primer si siempre será verdadero.

-Solución 1:

Quitar el sino.

-Solución 2:

comienza con
entrada: i. // De esta manera el usuario ingresa un valor y hay posibilidad de que el sino se cumpla.

*/

#include <stdio.h>

int i = 1;

int main()
{
    if (i > 0){
        do{
            printf("Soy i, mi valor es: %d\n",i);
            i = i + 1;
        }while (!(i>=8));
        printf("Soy yo de nuevo, valgo: %d\n",i);
    }else{
        printf("Solo se que no se nada %d\n",i);
    }

    return 0;
}