/*
Algoritmo: cantidadSemillas

lexico
    alt, anch ∈ ℝ+ // datos de entrada
    areaRec, canSem ∈ ℝ+ // intermedio
    totalSem ∈ ℝ+ // resultado
inicio
    entrada: alt, anch
    areaRec ← alt * anch
    canSem ← 250 / 1000 / paso de gramos a kilogramos
    totalSem ← canSem * areRec
    Salida: totalSem
Fin
*/

#include <stdio.h>

float alt, anch, areaRec, canSem, totalSem;

int main(){
    printf("Ingrese la altura: ");
    scanf("%f", &alt);
    printf("Ingrese el ancho: ");
    scanf("%f", &anch);
    areaRec = alt * anch;
    canSem = (250.0 / 1000.0);//tienen que ser numeros con decimales
    totalSem = canSem * areaRec;
    printf("La cantidad de semillas requeridas son: %f Kg", totalSem);
    return 0;
}