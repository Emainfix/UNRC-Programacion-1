/*

Analisis: 
    
    Datos: 
    i // Es el valor que se irá suamndo - es un numero real
    num // Se ingresa el valor a calcular


    Resultado:
    sum // La suma del valor acumulado de i

    Relaciones o subproblemas: 
    Se comienza con una condición de que num sea diferente de cero para determinar que es un numero válido. 

    Si la condición es veradera se ejecuta un bucle mientras. 
    La condición de este es que num sea mayor o igual a i
    Dentro sum = sum + i ya que nos dará el resultado que esperamos sumando todos los valores
    Luego i = i + 1 para acumular el valor y acercarnos al final del bucle
    

    Al terminar el bucle nos enseñará la sum. 

Diseño: 
Algoritmo: Sumatoria 

Lexico: 
    i ∈  Z+
    num ∈  Z+
    sum ∈  Z+


Inicio:

    entrada: num
    sum ← 0
    i ← 1
    si num <> 0 entonces
        mientras num >= i hacer
            sum ← sum + i
            i ← i + 1
        fmientras
    fsi
    salida: sum
Fin


*/

#include <stdio.h>

int i,num,sum;

int main()
{   
    printf("Ingrese el valor a calcular: ");
    scanf("%d",&num);
    if (num != 0){
        while (num >= i)
        {
            sum = sum + i;
            i = i + 1;
        }
    }
    printf("%d",sum);
    return 0;
}