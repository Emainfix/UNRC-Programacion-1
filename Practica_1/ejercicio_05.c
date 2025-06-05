/*Algoritmo: puntDist

Léxico
    punto1X, punto1Y, radio, punto2X, punto2Y ∈ ℝ //Entrada

    restaX, restaY, distancia ∈ ℝ //Intermedio

    resultado ∈ Cadena //Resultado

Inicio
    Entrada: punto1X, punto1Y, radio, punto2X, punto2Y

    restaX ← punto1X - punto2X
    restaY ← punto1Y - punto2Y

    distancia ← raiz2 ((restaX*restaX)+(restaY*restaY))

    si distancia <= radio Entonces
        resultado ← El punto está DENTRO del circulo
    sino
        resultado ← El punto está FUERA del circulo
    fsi

    Salida: resultado

Fin
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float punto1X, punto1Y, radio, punto2X, punto2Y, distancia, restaX, restaY;
char resultado[];


int main()
{
    printf("CENTRO DEL CIRCULO\nIngrese la cordenada x: ");
    scanf("%f",&punto1X);
    printf("Ingrese la cordenada y: ");
    scanf("%f",&punto1Y);
    printf("Ingrese el radio del circulo: ");
    scanf("%f",&radio);
    printf("SEGUNDO PUNTO\nIngrese la cordenada x: ");
    scanf("%f",&punto2X);
    printf("Ingrese la cordenada y: ");
    scanf("%f",&punto2Y);

    restaX = punto1X - punto2X;
    restaY= punto1Y - punto2Y;

    distancia = sqrt((restaX*restaX)+(restaY*restaY));

    if (distancia <= radio)
    {
        strcpy(resultado, "El punto esta DENTRO del circulo");
    }else{
        strcpy(resultado, "El punto esta FUERA del circulo");
        
    }

    printf(resultado);
    return 0;
}