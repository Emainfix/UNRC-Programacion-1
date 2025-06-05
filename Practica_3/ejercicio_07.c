/*
ANALISIS
    Datos= a1, a2 y a3 que corresponden a los tres tiempos ingresados
    
    Resultado= Un mensaje con los tiempos ordenos de menor a mayor

    Relaciones

    si a1 es mayor que a2 y a3 entonces ya determinamos que a1 siempre va al final
        Se habilita un condicional anidado
        si a2 es mayor que a3 entonces
            mensaje= a3, a2 y a1 en ese orden
        o bien a3 es mayor que a2
            mensaje= a2, a3 y a1 en ese orden

    o bien a2 es mayor que a1 y a3 entonces ya sabemos que a2 va al final
        Se habilita un condicional anidado
        si a1 es mayor que a3 entonces
            mensaje= a3,a1,a2 en este orden
        o bien a3 es mayor que a1 entonces
            mensaje= a1,a3,a2 en este orden

    o bien a3 es mayor que a1 y a2 determinamos que al final siempre queda a3
        Se habilita un condicional anidado
        si a1 es mayor a a2
            mensaje= a2,a1,a3 en ese orden
        o bien a2 es mayor a a1
            mensaje= a1,a2,a3
    
DISEÑO
    Algoritmo: ordenTiempos

    Lexico
        a1,a2,a3 ∈ ℝ+
        mensaje ∈ cadena

    inicio
        entrada:a1,a2,a3

        Si a1 > a2 y a1 > a3 Entonces
            Si a2>a3 Entonces
                Mensaje ← a3,a2,a1;
            SiNo
                Mensaje← a2,a3,a1;
            Fin Si
        SiNo 
            Si a2 > a1 y a2 > a3 Entonces
                Si a1 > a3 Entonces
                    Mensaje← a3,a1,a2;
                SiNo
                    Mensaje← a1,a3,a2;
                Fin Si
            SiNo
                Si a1>a2 Entonces
                    Mensaje← a2,a1,a3;
                SiNo
                    Mensaje← a1,a2,a3;
                Fin Si
            Fin Si
        Fin Si
        salida
            mensaje

FIN
        
    */

#include <stdio.h>

float a1,a2,a3;

int main()
{
    printf("Ingrese el tiempo de A-1: ");
    scanf("%f",&a1);
    printf("Ingrese el tiempo de A-2: ");
    scanf("%f",&a2);
    printf("Ingrese el tiempo de A-3: ");
    scanf("%f",&a3);

    if (a1 > a2 && a1 > a3)
    {
        if (a2>a3)
        {
            printf("%f\n%f\n%f",a3,a2,a1);
        }else{
            printf("%f\n%f\n%f",a2,a3,a1);
        }
    }else if (a2 > a1 && a2 > a3)
    {
        if (a1 > a3)
        {
            printf("%f\n%f\n%f",a3,a1,a2);
        }else{
            printf("%f\n%f\n%f",a1,a3,a2);
        }
    }else{
        if(a1>a2)
        {
            printf("%f\n%f\n%f",a2,a1,a3);
        }else{
            printf("%f\n%f\n%f",a1,a2,a3);
        }
    }
    
    return 0;
}