/*Desarrolla una acción “CondiciónAlumno”, la cual recibe tres notas y con ellas la acción 
debe calcular la menor de las tres notas y el promedio de las tres notas, con estos resultados informará 
en un parámetro adecuado la condición del alumno, que será:  
‘Libre’ si la menor nota es inferior a 4.  
‘Regular’ si la menor nota es mayor o igual a 4 y menor o igual a 6 y el promedio menor a 7.  
‘Promocionado’ si la menor nota es mayor o igual a 6 y el promedio es igual o mayor a 7.*/

//Nota Personal: El problema está mal planteado ya que se contradice la condición con el promedio. No alcanza a abarcar todas las posibilidades.

#include <stdio.h>
#include <string.h>

float nota1, nota2, nota3;
char condicion[40];
void CondicionAlumno(float a, float b, float c, char *res);

int main()
{
    printf("Ingrese la primer nota: ");
    scanf("%f",&nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f",&nota2);
    printf("Ingrese la tercer nota: ");
    scanf("%f",&nota3);

    CondicionAlumno(nota1,nota2,nota3,condicion);

    printf("%s",condicion);

    return 0;
}

void CondicionAlumno(float a, float b, float c, char *res)
{
    float promedio, menorNota;

    promedio = (a+b+c)/3;

    if (a<b && a<c){
        menorNota = a;
    }else if (b<a && b<c)
    {
        menorNota = b;
    }else{
        menorNota = c;
    }

    if ((menorNota >= 6)&&(promedio >= 7))
    {
        sprintf(res, "La condicion es PROMOCIONADO\nPromedio: %f",promedio);
    }else if ((menorNota >= 4 && menorNota <= 6)&&(promedio <= 7))
    {
        sprintf(res,"La condicion es REGULAR\nPromedio: %f",promedio);
    }else{
        sprintf(res,"La condicion es LIBRE\nPromedio: %f",promedio);
    }

}