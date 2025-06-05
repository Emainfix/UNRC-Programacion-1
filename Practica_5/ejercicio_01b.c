#include <stdio.h>

int n, factorial;
int CalcFact (int num);

int main ()
{
    printf("Ingrese el numero: ");
    scanf("%d",&n);

    factorial = CalcFact(n);
    printf("El factorial de %d es: %d",n,factorial);
    return 0;
}


int CalcFact (int num)
{
    int f,k;
    f = 1;
    k = 1;
    while (k <= num)
    {
        f = f * k;
        k = k + 1;
    }
    return f;
}