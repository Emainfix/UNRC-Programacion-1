#include <stdio.h>
#include <stdbool.h>

int num;
bool res;
bool Par(int x);

int main()
{
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    res = Par(num);

    printf("%d",res);

    return 0;
}

bool Par(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }else{
        return false;
    }
}
