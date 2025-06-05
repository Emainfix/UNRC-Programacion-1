/*
Analisis:
Dato: 
    año // Entero positivo

Resultado:
    bis // Resultado valor lógico

Relaciones o subproblemas: 
    si a mod 4 es 0 y mod 100 es diferente a 0 entonces
        verdadero
    o bien si a mod 100 es 0 y mod 400 es cero entonces
        también es verdadero
    sino
        es falso

Diseño: 
    Algoritmo: AñoBis

    Lexico: 
        año ∈ Z+
        bis ∈ Logico
    
        Función AñoBis (dato a ∈ Z) → Z
            Inicio
                si a mod 4 = 0 y a mod 100 <> 0 entonces
                    ← Verdadero
                sino
                    si a mod 100 = 0 y a mod 400 = 0 entonces
                        ← Verdadero
                    sino
                        ← Falso
                    fsi
                fsi
        fFuncion
    
    Inicio:
        entrada: año

        bis ← AñoBis(año)
        salida: bis
    Fin
*/

#include <stdio.h>

int año, bis;
int AñoBis(a);

int main ()
{
    printf("Ingrese el ano: ");
    scanf("%d",&año);

    bis = AñoBis(año);

    if (bis == 1)
    {
        printf("Es bisiesto");
    }else{
        printf("No es bisiesto");
    }
}

int AñoBis(a)
{
    if (a % 4 == 0 && a % 100 != 0)
    {
        return 1;
    }else if (a % 100 == 0 && a % 400 == 0)
    {
        return 1;
    }else{
        return 0;
    }
}