/* 
ANALISIS:

km = Se ingresan los kilometros
extra = Hace el calculo de cada extra cuando los km pasen los 300 o los 1000
precio = Se calcula el precio total

valorBase = En caso de que se excedan los 300 km se usa una constante de 200 * 300
valorBase2 = En caso de que se excedan los 1000 km se usa una constante de 75 * 700

resultado = Mensaje "El precio es: precio"

Proceso:
si los km <= 300 y > 0 entonces
    precio = es el resultado de km * 200
    mensaje = "El precio es: precio"

si los km > 300 y <= 1000 entonces
    extra = los km - 300 * 75
    precio = es el resultado de la constante valorBase + extra
    mensaje = "El precio es: precio"

si los km > 1000 entonces
    extra = los km - 1000 * 50
    precio = es el resultado de las constantes valorBase + valorBase2 + extra
    mensaje = "El precio es: precio"
    
o bien
    mensaje = "Ingrese un valor valido"

DISEÑO
Algoritmo: precioKilometros

Lexico
    km, extra, precio ∈ ℝ+
    valorBase, ValorBase2 ∈ ℝ+ // Constantes
    mensaje ∈ cadena

Inicio
    Entrada: km
    valorBase ← 200 * 300
    valorBase2 ← 75 * 700

    si (km <= 300 && km > 0) entonces
        precio ← km * 200
        mensaje ← "el precio es: " precio

    sino (km > 300 && km <= 1000) entonces
        extra ← (km - 300) * 75
        precio ← valorBase + extra
        mensaje ← "el precio es: " precio

    sino (km > 1000) entonces
        extra = (km - 1000) * 50
        precio = valorBase + valorBase2 + extra
        mensaje ← "el precio es: " precio

    sino
        mensaje ← "Ingrese un valor valido"

    fsi

    Salida: mensaje

FIN

*/

#include <stdio.h>

float km, extra, precio;
const float valorBase = 200 * 300;
const float valorBase2 = 75 * 700;

int main()
{
    printf("Ingrese los km: ");
    scanf("%f",&km);

    if (km <= 300 && km > 0)
    {
        precio = km * 200;
        printf("el precio es: %f",precio);

    }else if (km > 300 && km <= 1000)
    {
        extra = (km - 300) * 75;
        precio = valorBase + extra;
        printf("el precio es: %f",precio);
        
    }else if (km > 1000)
    {
        extra = (km - 1000) * 50;
        precio = valorBase + valorBase2 + extra;
        printf("el precio es: %f",precio);
    }else{
        printf("Ingrese un valor valido");
    }
    return 0;
}