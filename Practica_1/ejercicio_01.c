/*CALCULAR EL AREA DEL CUADRADO RESTANDO UN TRIANGULO
Algoritmo: areaRayada

Léxico:
    ladoCuad, baseTri, altTri ∈ ℝ+ // Dato entrada

    areaCuad, areaTri ∈ ℝ+ // Intermedio


    areaRay ∈ ℝ+ // Resultado

Inicio
    Entrada: ladoCuad, baseTri, altTri
    areaCuad ← ladocuad * lacoCuad
    areaTri ← (baseTri * altTri) / 2
    areaRay ← areaCuad - areaTri
    Salida: areaRay

Fin

*/

#include <stdio.h>

float ladoCuad, baseTri, altTri, areaCuad, areaTri, areaRay;
int main(){

    printf("Ingrese el lado del cuadrado: ");
    scanf("%f",&ladoCuad);

    printf("Ingrese la base del Triangulo: ");
    scanf("%f",&baseTri);

    printf("Ingrese la altura del Triangulo: ");
    scanf("%f",&altTri);

    areaCuad = ladoCuad * ladoCuad;
    areaTri = (baseTri*altTri)/2;

    areaRay = areaCuad - areaTri;
    printf("El area rayada es: %f",areaRay);

    return 0;

}