#include <stdio.h>

int num;
char NumDet (int n);

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    NumDet(num);

    return 0;
}

char NumDet (int n)
{
    if (n == 0)
    {
        return printf("Es cero");
    }else if (n % 2 == 0)
    {
        return printf("Es par");
    }else{
        return printf("Es impar");
    }
}