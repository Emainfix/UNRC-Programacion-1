/*CANTIDAD DE PUNTOS ACUMULDOS
Algoritmo: puntos

Lexico
    jugados, ganados, perdidos ∈ Z+ // Entrada

    empatados, puntGanados // Intermedio

    puntos // Resultado

Inicio
    Entrada: jugados, ganados, perdidos

    empatados ← jugados - (ganados + perdidos)
    puntGanados ← ganados * 3
    puntos ← puntGanados + empatados

    Salida: puntos

Fin
    */
#include <stdio.h>

int jugados, ganados, perdidos, empatados, puntGanados, puntos;

int main()
{   
    printf("Ingrese la cantidad de partidos jugados: ");
    scanf("%d",&jugados);

    printf("Ingrese la cantidad de partidos ganados: ");
    scanf("%d",&ganados);

    printf("Ingrese la cantidad de partidos perdidos: ");
    scanf("%d",&perdidos);

    empatados = jugados - (ganados+perdidos);
    puntGanados = ganados * 3;

    puntos = puntGanados + empatados;

    printf("La cantidad de puntos acumulados es: %d",puntos);
    return 0;
}