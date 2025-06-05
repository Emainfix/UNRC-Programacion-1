#include <stdio.h>

int num;
int Inc(int x);

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    printf("%d", Inc(num));
    return 0;
}

int Inc(int x)
{
    return x + 1;
}