/*ANALISIS

Datos: 
    diasFal= Días faltantes para el vuelo
    opcVuelo = Opción 1 o 2 para determinar si es solo de ida o redondo. 1 Solo ida, 2 redondo.
    costo = La suma del costo por los días faltantes
    costoTotal = La suma del costo más los vuelos de ida y vuelta si corresponde.

Resultado:
    mensaje = Una cadena de caracteres que informa el costoTotal 

Relaciones:
    Primer condicional:

    si los diasFal >= 30 entonces
        el costo = 140000

    si los diasFal < 30 y diasFal >= 15 entonces
        el costo = 200000
    
    si los diasFal < 15 y diasFal >= 1 entonces
        el costo = 250000
    
    Segundo condicional:
    
    si opcVuelo = 1
        el costoTotal = costo
    si opcVuelo = 2
        el costoTotal = costo * 2
    
DISEÑO
    Algoritmo: costoVuelo

    Lexico:
        diasFal ∈ Z+
        opcVuelo ∈ Z+
        costo ∈ ℝ+
        costoTotal ∈ ℝ+
        mensaje ∈ cadena
    
    Inicio:
        Entrada: diasFal, opcVuelo

        segun
            (diasFal < 30 y diasFal >= 15): costo ← 200000
            (diasFal < 15 y diasFal >= 1): costo ← 250000
            otros: costo ← 140000
        fsegun
        salida: costo

        segun
            (opcVuelo == 1): costoTotal ← costo
            (opcVuelo == 2): costoTotal ← costo * 2
            otros: mensaje ← "Ingrese una opcion valida"
        fsegun
        salida: costoTotal

        mensaje ← "El costo total es: costoTotal"
*/

#include <stdio.h>

int diasFal,opcVuelo;
float costo,costoTotal;

int main()
{
    printf("Ingrese los dias faltantes para su vuelo: ");
    scanf("%d",&diasFal);

    printf("Ingrese la opcion que corresponda: \n1 - Para un solo vuelo \n2 - Para vuelo de ida y vuelta\n");
    scanf("%d",&opcVuelo);

    if (diasFal < 30 && diasFal >= 15)
    {
        costo = 200000;
    }
    else if (diasFal < 15 && diasFal >= 1)
    {
        costo = 250000;
    }
    else{
        costo = 140000;
    }

    if (opcVuelo == 1)
    {
        costoTotal = costo;
    }else if (opcVuelo ==2) {
        costoTotal = costo * 2;
    }else{
        printf("Ingrese una opcion valida");
    }

    printf("El costo total es: %f",costoTotal);

    return 0;
}