/*

Analisis: 
    Datos: 
        i // Contador para determianr la ejecución del bucle. Numero entero positivo
        alum // Se ingresa la cantidad de alumnos es un numero entero positivo
        nota // Se ingresa nota por nota con un num entero positivo
        suma // La suma de todas las notas. Numero entero
        prom // El promedio de las notas. Numero real
    Resultado: 
        msje // Se informa el promedio general del examen
    Relaciones o subrpoblemas: 
        un bucle para i = 1, mientras i <= alum, i = i + 1 hacer
            se imprime un mensaje = "Alumno i - Ingrese la nota: "
            se ingresa nota
            suma = suma + nota
    
    Se calcula prom = suma / alum

    condicional si prom es mayor a 8 entonces
        msje = "El rendimiento ha sido ELEVADO"
    o bien prom es igual o menor a 8 o igual o mayor a 6 entonces
        msje = "El rendimiento ha sido ACEPTABLE"
    o bien
        msje = "El rendimiento ha sido BAJO"

Diseño:
    Lexico: 
        i, alum, nota, suma ∈ Z
        prom ∈ ℝ

    Inicio: 
        Entrada: alum // Ingresa la cantidad de alumnos
        suma ← 0

        para (i ← 1, i <= alum, i ← i + 1) hacer
            msje ← "Alumno i - Ingrese la nota: "
            salida: msje i
            entrada: nota
            suma ← suma + nota
        fpara
        salida: suma

        prom ← suma / alum

        si prom > 8 entonces
            msje ← "El rendimiento ha sido ELEVADO"
            salida: msje
        sino 
            si prom <= 8 y prom >= 6 entonces
                msje ← "El rendimiento ha sido ACEPTABLE"
                salida: msje
            sino
                msje ← "El rendimiento ha sido BAJO"
                salida: msje
            fsi
        fsi
        salida: msje
    Fin

*/

#include <stdio.h>

int i, alum, nota, suma;
float prom;

int main()
{
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&alum);
    suma = 0;
    if (alum <= 0){
        printf("Ingrese una cantidad de alumnos mayor a cero.");
    }else
    {
        for (i = 1; i <= alum; i = i + 1)
        {
            printf("Alumno %d - Ingrese la nota: ", i);
            scanf("%d",&nota);
            if (nota < 0 || nota > 10)
            {
                while (nota < 0 || nota > 10)
                {
                    printf("Ingrese una nota valida para el ALUMNO %d en un rango de 0 a 10: ",i);
                    scanf("%d",&nota);
                }
                
            }
            suma = suma + nota;
        }
        prom = suma / alum;

        if (prom > 8)
        {
            printf("Promedio: %f\nEl rendimiento ha sido ELEVADO",prom);
        }else if (prom <= 8 && prom >= 6)
        {
            printf("Promedio: %f\nEl rendimiento ha sido ACEPTABLE",prom);
        }else{
            printf("Promedio: %f\nEl rendimiento ha sido BAJO",prom);
        }
    }

    
    return 0;
}