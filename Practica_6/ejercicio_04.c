#include <stdio.h>
char ope;
float num1, num2, res;
void ObtenerDatos(char *op, float *x, float *y);
void Calcular(char op, float x, float y, float *z);
void InfromarResultado(char op, float y, float z);

int main ()
{
    ObtenerDatos(&ope,&num1,&num2);
    Calcular(ope,num1,num2,&res);
    InfromarResultado(ope,num2,res);

    return 0;

}


void ObtenerDatos(char *op, float *x, float *y)
{
    printf("Ingrese el tipo de operacion: ");
    scanf("%c",&(*op));
    printf("Ingrese el primer numero: ");
    scanf("%f",&(*x));
    printf("Ingrese el segundo numero: ");
    scanf("%f",&(*y));
}

void Calcular(char op, float x, float y, float *z)
{
    if (op == '/' && y == 0)
    {
        *z = 999999999;
    }else if (op == '/' && y != 0)
    {
        *z = x/y;
    }else if (op == '*')
    {
        *z = x*y;
    }else if (op == '+')
    {
        *z = x+y;
    }else if (op == '-')
    {
        *z = x-y;
    }else{
        *z = 0;
    }
}

void InfromarResultado(char op, float y, float z)
{
    if (op == '/' && y == 0)
    {
        printf("ERROR");
    }else if (!(op == '/' || op == '*' || op == '+' || op == '-'))
    {
        printf("ERROR Operador no valido");
    }else{
        printf("El resultado es: %f", z);
    }
}