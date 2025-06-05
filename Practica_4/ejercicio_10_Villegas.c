#include <stdio.h>
#include <math.h>

int num, raiz, i; 
int main()
{
    printf("Ingrese el numero a determinar: "); 
    scanf("%d",&num);
    
    if ((num <= 1) || (num != 2 && num % 2 == 0)){ //Se determina que no sea 1 o menor, que tampoco sea dos o par
        printf("No es primo");
    }else{
        raiz = sqrt(num); // Calculamos la raiz
        while (num % raiz != 0) // Mientras el modulo del valor de la raiz sea distinto a cero se ejecutará el bucle
        {
            raiz = raiz - 1; // Se restará uno a la raiz en cada vuelta
        }
    if (raiz <= 1){ // si la raiz llegó hasta uno se entiende que ningun numero cumplio con los requisitos por ende es primo
        printf("Es primo");
    }else{
        printf("No es primo"); // Si la raiz no llegó a 1 entonces no cumple
    }
    }   
    return 0;
}

