/*

Algoritmo MostrarI (c) 
Léxico  
    i ∈ Z  
    msge ∈ cadena  
Inicio  
    i ← 1  
    repetir  
        msge ← “Soy i, mi valor es:” 
        Salída: msge i  
        i ← i + 1  
    hasta que i>=8  
        msge <-- “Soy yo de nuevo, valgo:” 
    Salida: msge i 
Fin  

Solución: En este algoritmo se repite 7 veces un mensje con el valor de i actualizado cada vez.
Al finalizar se muestra el mensaje de nuevo con este en total son 8. 

*/

#include <stdio.h>
#include <string.h>

int i = 1;

int main()
{
    do
    {
        printf("Soy i, mi valor es: %d\n",i);

        i = i + 1;
    }while (!(i>=8));
    printf("Soy yo de nuevo, valgo: %d",i);

    return 0;
}