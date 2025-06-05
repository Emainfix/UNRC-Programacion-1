/*ANALISIS
Dato: edad // Numeros reales 
Edad ingresada de la persona (edad) // Numeros reales

Resultado:  mensaje // cadena respuesta del problema //cadena de caracteres 

Relaciones:
Mensaje: "Eres mayor de edad " y se cumple que (edad => 18)
o bien
Mensaje: "Eres menor de edad" y se cumple que (edad < 18)

DISEÑO
Algoritmo: mayoriaEdad

Lexico
    edad ∈ ℝ+ // Dato del problema
    mensaje ∈ cadena // Resultado
Inicio
    Entrada: edad

    si (edad >= 18) Entonces
        mensaje ← "Eres mayor de edad"
    sino
        mensaje ← "Eres menor de edad"
    fsi
    Salida: mensaje
Fin */

#include <stdio.h>

int edad;
int main()
{
    printf("Que edad tienes? \n");
    scanf("%d",&edad);

    if (edad >= 18)
    {
        printf("Eres mayor de edad");
    }else{
        printf("Eres menor de edad");
    }
    return 0;
}