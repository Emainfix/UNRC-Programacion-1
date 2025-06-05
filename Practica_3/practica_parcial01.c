#include <stdio.h>

int opc,cant;
float costo,res;

int main()
{
    printf("Ingrese la opción:\n1 No soy jubilado\n2 Soy jubilado\n");
    scanf("%d",&opc);

    printf("Ingrese la cantidad: ");
    scanf("%d",&cant);
    
    costo = cant * 1000;

    if (opc == 1 && cant > 1 && cant <= 12)
    {
        res = costo;
    }else if (opc == 1 && cant > 12 && cant <= 24)
    {
        res = costo - ((costo*10)/100);
    }else if (opc == 1 && cant > 24)
    {
        res = costo - ((costo*15)/100);
    }else if (opc == 2 && cant > 1 && cant <= 12)
    {
        res = costo - ((costo*10)/100);
    }else if (opc == 2 && cant > 12 && cant <= 24)
    {
        res = costo - ((costo*20)/100);
    }else if (opc == 2 && cant > 24)
    {
        res = costo - ((costo*25)/100);
    }
    printf("%f",res);

    return 0;
}