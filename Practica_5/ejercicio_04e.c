#include <stdio.h>

int num, pot, res;
int Potencia(int a, int x);

int main()
{
    printf("Ingrese la base de la potencia: ");
    scanf("%d",&num);
    printf("Ingrese la potencia: ");
    scanf("%d",&pot);

    res = Potencia(num,pot);

    printf("El numero %d elevado a la %d es: %d",num,pot,res);

    return 0;
}

int Potencia(int a, int x)
{
    int i, total;
    total = 1;
    for(i = 1; i <= x; i++)
    {
        total = total * a;
    }
    return total;
}
