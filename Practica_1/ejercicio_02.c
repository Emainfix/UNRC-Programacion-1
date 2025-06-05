/*CALCULAR AREA NO RAYADA Y PERIMETRO
Algoritmo: areaNoRayada, perimetro

Léxico
    ladoCuad ∈ ℝ+ //Dato de entrada
    pi ∈ ℝ+ //Dato de entrada

    radio, areaCuad, areaCir ∈ ℝ+ //Intermedio

    areaNoRayada, perimetro ∈ ℝ+ //Resultado

Inicio
    Entrada: ladoCuad

    radio ← ladoCuad / 2;
    areaCuad ← ladoCuad * ladoCuad
    areaCir ← pi*(radio*radio)
    areaNoRayada ← areaCuad - areaCir
    perimetro ← 2*pi*radio

    Salida: areaNoRayada, perimetro

Fin

*/
#include <stdio.h>
const float pi = 3.14;
float ladoCuad, radio, areaCuad, areaCir, areaNoRayada, perimetro;

int main(){
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &ladoCuad);

    radio = ladoCuad / 2;
    areaCuad = ladoCuad * ladoCuad;
    areaCir = pi * (radio * radio);
    areaNoRayada = areaCuad - areaCir;
    perimetro = 2 * pi * radio;

    printf("El area no rayada es: %f \nEl perimetro es: %f", areaNoRayada,perimetro);

    return 0;
}