/*

Algoritmo KtrasK2 (f) 
Léxico  
    k ∈ Z  
    msge ∈ Cadena  
Inicio  
    msge <-- “Soy KTrasK2”  
    Salida: msge  
    k <-- 2  
    repetir  
        si k<=5 entonces  
            msge <-- “¿Soy chiquito?”  
            Salida: msge k  
        sino  
            msge <-- “¿Soy grande?”  
            Salida: msge k  
        fsi  
        k <--k + 2  
    hasta que k>=12  
        msge <-- ”¿Les gustó?”  
    Salída: msge  
Fin

Solución: En este algoritmo se imprime un mensaje de saludo, luego comienza el bucle.
En este bucle se revisa si una condición es verdadera con un si entonces sino. Cada vez que termina el condicional se le suma 2 a la variable k.
La condicion del bucle es verdadera 2 veces y falsa 3 hasta que ya se cumple la condicion de salida del bucle. 
En total el bucle se repite 5 veces. Finalmente imprime un ultimo mensaje fuera del bucle.

*/

#include <stdio.h>
int k = 2;
int main(){
    printf("Soy KTrasK2\n");

    do{
        if (k<=5){
            printf("Soy chiquito? %d\n",k);
        }else{
            printf("Soy grande? %d\n",k);
        }k = k + 2;
    }while (!(k>=12));
    printf("Les gusto?");
}

