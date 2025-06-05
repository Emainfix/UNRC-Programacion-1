/*ANALISIS
Datos:
digitoA // Se ingresa un NUMERO ENTERO de un solo digito
digitoB //Se ingresa un segundo NUMERO ENTERO tambien de un solo digito

resultado // El numero mayor posible compuesto de ambos digitos // Es una cadena de caracteres

Proceso // 

Si se cumple que digitoA > digitoB 
    resultado será "digitoA" + "diditoB"

si se cumple que digitoA < digitoB
    resultado será "digitoB" + "digitoA"

DISEÑO
Algoritmo: numeroMayorPosible

Lexico
    digitoA ∈ Z+
    digitoB ∈ Z+
    resultado ∈ cadena

Inicio
    Entrada: digitoA,digitoB

    si (digitoA>digitoB) entonces
        resultado ← (" El numero resultante es: digitoA"+"digitoB")
    sino 
        resultado ← (" El numero resultante es: digitoB"+"digitoA")
    fsi

    Salida:resultado
FIN

*/

#include <stdio.h>

int digitoA,digitoB;
char resultado;

int main()
{   
    printf("Ingrese el primer numero entre 0 y 9: ");
    scanf("%d",&digitoA);

    printf("Ingrese el segundo numero entre 0 y 9: ");
    scanf("%d",&digitoB);

    if (digitoA>digitoB)
    {
        resultado = printf("El numero resultante es: %d%d",digitoA,digitoB);
    }else{
        resultado = printf("El numero resultante es: %d%d",digitoB,digitoA);
    }

    return 0;

}