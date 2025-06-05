#include <stdio.h>

int num;
int Cubo(int a);

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    printf("%d", Cubo(num));

    return 0;
}

int Cubo(int a)
{
    return a*a*a;
}