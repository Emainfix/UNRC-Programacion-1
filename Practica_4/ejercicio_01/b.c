/*

Algoritmo Mafalda2 (b) 
Léxico  
    i ∈ Z  
    msge ∈ Cadena  
Inicio  
    i ← 2  
    msge <-- “Mi dicho preferido es: ” 
    Salida: msge
    repetir  
        msge <-- “Paren el mundo “  
        Salida: msge  
        msge <-- “me quiero bajar.“  
        Salida: msge  
    hasta que i>=1  
        msge <-- “¿Les gustó?”  
        Salida: msge  
Fin

Solución: este algoritmo actualiza la cadena msge hasta que se cumpla la condicón. Se repite solo una vez.

*/

#include <stdio.h> 
#include <string.h>


int i = 2;

char msge[30];

int main(){
    strcpy(msge,"Mi dicho preferido es: \n");
    printf(msge);

    do
    {
        strcpy(msge,"Paren el mundo \n");
        printf(msge);
        strcpy(msge,"me quiero bajar.\n");
        printf(msge);
    }
    while (!(i>=1));
    strcpy(msge,"Les gusto?\n");
    printf(msge);
    
    return 0;
}

