#include <stdio.h>

int nota1, nota2, nota3, resultado;
int NotaFinal (int a,int b,int c);
/*int CondAlumn (int res);*/
int main ()
{
    //Primer Nota
    printf("Ingrese la primer calificacion: ");
    scanf("%d",&nota1);
    while (nota1 <= 0)//Verifica que sea positivo
    {
        printf("ERROR - Ingrese un valor mayor a 0 para LA PRIMER NOTA: ");
        scanf("%d",&nota1);
    }

    //Segunda Nota
    printf("Ingrese la segunda calificacion: ");
    scanf("%d",&nota2);
    while (nota2 <= 0)//Verifica que sea positivo
    {
        printf("ERROR - Ingrese un valor mayor a 0 para LA SEGUNDA NOTA: ");
        scanf("%d",&nota2);
    }

    //Tercer Nota
    printf("Ingrese la tercer califiacion: ");
    scanf("%d",&nota3);
    while (nota3 <= 0)//Verifica que sea positivo
    {
        printf("ERROR - Ingrese un valor mayor a 0 para LA TERCER NOTA: ");
        scanf("%d",&nota3);
    }

    //Calcula la NOTA FINAL
    resultado = NotaFinal(nota1,nota2,nota3);

    /*CondAlumn (resultado);*/

    //Determina la CONDICION
    if (resultado < 5)
    {
        printf("La condicion del alumno/a es LIBRE\nRESULTADO: %d",resultado);
    }else if (resultado >= 5 && resultado < 7)
    {
        printf("La condicion del alumno/a es REGULAR\nRESULTADO: %d",resultado);
    }else{
        printf("La condicion del alumno/a es PROMOCION\nRESULTADO: %d",resultado);
    }

    return 0;
}

int NotaFinal (int a,int b,int c)
{
    int res;
    if (a < 4 || b < 4 || c < 4)
    {
        res = 2;
    }else{
        res = (a+b+c)/3;
    }
    return res;
}

/*int CondAlumn (int res)
{
    if (res < 5)
    {
        return printf("La condicion del alumno/a es LIBRE\nRESULTADO: %d",res);
    }else if (res >= 5 && res < 7)
    {
        return printf("La condicion del alumno/a es REGULAR\nRESULTADO: %d",res);
    }else{
        return printf("La condicion del alumno/a es PROMOCION\nRESULTADO: %d",res);
    };
}*/