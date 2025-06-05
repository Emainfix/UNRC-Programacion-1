/*
Analisis:
    Datos:
    num // Dato de entrada - Numero entero
    i // Es un numero entero que va a contar la cantidad de veces erroneas
    msge // Cadena de texto con la pregunta

    Resultado:
    msge// Una cadena que indica si el numero es correcto o no

    Relaciones o Subproblemas:
    Se ingresa el valor de num.
    i comienza con un valor de 0

    comienzo de Repetir
    Dentro hay un conidiconal que evalua la negación de si num es mayor o igual a 1 y menor o igual a 10
    cumpliendosé esta condición i es igual a i + 1
    O bien si no se cumple esta condición msge = "el valor ingresado es correcto"
    y también i = 6

    EL bucle se repite hasta que i sea mayor o igual a 5.

    Al finalizar el bucle con un nuevo condiional se evalua
    si i es igual a 5 entonces
    el msge = valor de ingreso equivocado

Diseño:
    Algoritmo: NumEntreRango

    Lexico:
        i ∈ Z+
        msge ∈ Cadena
    
    Inicio:
        
        i ← 0
        Repetir
            entrada: num
            msge ← ¿Ingrese un número comprendido entre 1 y 10?
            si    no (num >= 1 y num <= 10) entonces
                
                i ← i + 1
            sino
                msge ← el valor ingresado es correcto
                Salida: msge
                i ← 6
            fsi
        Hasta que i >= 5
            si i = 5 entonces
                msge ← valor de ingreso equivocado"
        salida: msge
    Fin

*/

#include <stdio.h>

int i, num;

int main()
{
    i = 0;
    do{
        printf("Ingrese un numero comprendido entre 1 y 10?: ");
        scanf("%d",&num);
        if (!(num >= 1 && num <= 10)){
            i = i + 1;
        }else{
            printf("el valor ingresado es correcto");
            i = 6;
        }
    }while (!(i>=5));
    if (i == 5){
        printf("valor de ingreso equivocado");
    }
    return 0;
}