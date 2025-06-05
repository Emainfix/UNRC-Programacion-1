/*Algoritmo: costoDePintado
lexico
    largo, ancho, alto, costoM2 ∈ ℝ+ // Datos de entrada

    areaPared1, areaPared2, areaTotal ∈ ℝ+ //Intermedio

    costo ∈ ℝ+ //Resultado
Inicio
    Entrada: largo, ancho, alto, costoM2

    areaPared1 ← largo * alto
    areaPared2 ← ancho * alto
    areaTotal ← (areaPared1 + areaPared2) * 2
    costo ← costoM2 * areaTotal

    salida: costo
Fin
*/
#include <stdio.h>

float largo, ancho, alto, costoM2, areaPared1, areaPared2, areaTotal, costo;

int main(){
    printf("Ingrese el largo de la pared: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho de la pared: ");
    scanf("%f", &ancho);
    printf("Ingrese el alto de la pared: ");
    scanf("%f", &alto);
    printf("Ingrese el costo por M2: ");
    scanf("%f", &costoM2);

    areaPared1 = largo * alto;
    areaPared2 = ancho * alto;
    areaTotal = (areaPared1 + areaPared2) * 2;

    costo = costoM2 * areaTotal;

    printf("El costo total es: %f", costo);
    return 0;
}