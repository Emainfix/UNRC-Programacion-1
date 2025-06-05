#include <stdio.h>
#include <stdbool.h>

int num, mult;
bool res;
bool Multiplo(int a, int x);

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    printf("Ingrese otro numero: ");
    scanf("%d",&mult);

    res = Multiplo(num,mult);

    printf("%d",res);

    return 0;
}

bool Multiplo(int a, int x)
{
    if (a % x == 0)
    {
        return true;
    }else{
        return false;
    }
}
