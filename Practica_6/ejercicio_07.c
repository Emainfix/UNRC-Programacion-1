#include <stdio.h>
#include <string.h>

float p,h;
char imc[40];
void Indice(float x, float y, char *res);

int main()
{
    printf("Ingrese su peso: ");
    scanf("%f",&p);

    printf("Ingrese su estatura en metros: ");
    scanf("%f",&h);

    Indice(p,h,imc);

    printf("%s",imc);

    return 0;

}

void Indice(float x, float y, char *res)
{
    float imc;
    imc = x / (y * y);

    if (imc < 25)
    {
        sprintf(res, "El IMC es %f: NORMAL",imc);
    }else if (imc >= 25 && imc <= 30)
    {
        sprintf(res, "El IMC es %f: SOBREPESO",imc);
    }else{
        sprintf(res, "El IMC es %f: OBESIDAD",imc);
    }
}