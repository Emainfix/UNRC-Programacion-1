/*
ANALISIS:
Datos:
costoA // El costo sin el envio // Numero real
costoB // El costo con el envio incluido // Numero real

Resultado:
mensaje // cadena respuesta del problema //cadena de caracteres 

Relaciones:
mensaje="Se recomienda comprar el PRIMER producto (Sin costo de envio incluido)" y se cumple que (totalA < costoB)
o bien
mensaje="Se recomienda comprar el SEGUNDO producto (Con costo de envio incluido)" y se cumple que (totalA > costoB)

totalA= ((costoA * 5) / 100) + costoA //Regla de tres para calcular el 5% de envio. Suma para obtener el costo total del producto A

DISEÑO:
Algoritmo: compraRecomendada

Lexico:
    costoA, costoB ∈ ℝ+ // Datos del problema
    totalA ∈ ℝ+ // Resultado intermedio
    mensaje ∈ cadena // Resultado

Inicio:
    Entrada: costoA, costoB
    totalA ← ((costoA * 5) / 100) + costoA

    si (totalA < costoB) entonces
        mensaje ← "Se recomienda comprar el PRIMER producto (Sin costo de envio incluido)"
    sino
        mensaje ← "Se recomienda comprar el SEGUNDO producto (Con costo de envio incluido)"
    fsi
    Salida:mensaje

Fin
*/
#include <stdio.h>

float costoA, costoB, totalA;

int main()
{
    printf("Ingrese el primer costo (Sin envio incluido): ");
    scanf("%f",&costoA);

    printf("Ingrese el segundo costo (Con envio incluido): ");
    scanf("%f",&costoB);

    totalA = ((costoA * 5) / 100) + costoA;

    if (totalA < costoB)
    {
        printf("Se recomienda comprar el PRIMER producto (Sin costo de envio incluido)");
    }else{
        printf("Se recomienda comprar el SEGUNDO producto (Con costo de envio incluido)");
    }
    return 0;
}