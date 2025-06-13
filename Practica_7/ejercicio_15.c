/*Para administrar una lista de personas se requiere desarrollar una serie de acciones que 
permitan ese trabajo. Para almacenar los nombres se utilizará un registro que contiene dos campos, 
uno con un arreglo donde se guardan los nombres y otro con la cantidad actual de nombres 
almacenados en el arreglo (Utilice un registro con un campo arreglo y otro campo con la cantidad de 
datos que se han cargado al arreglo). La cantidad máxima que se podrá almacenar será de 1000 
nombres. Para poder administrar la lista se deben desarrollar las siguientes acciones y/o funciones:  
a) Una función llamada Vacia que reciba como parámetro el registro (con el arreglo de nombres y la 
cantidad de nombres cargados), y retorne verdadero si la lista está vacía y sino debe retornar 
falso.  
b) Una función llamada Llena que reciba como parámetro el registro (con el arreglo de nombres y la 
cantidad de nombres cargados), y retorne Verdadero si el arreglo está completamente lleno (es 
decir si ya tiene 1000 nombres cargados) y sino debe retornar Falso.  
c) Una acción que permita insertar un nombre en el arreglo. Para ello se pasará como parámetros el 
registro (con el arreglo de nombres y la cantidad de nombres cargados), y el nuevo nombre a 
insertar. El nuevo nombre se inserta siempre que sea posible al final de la lista. Después de 
ejecutada la acción, la cantidad debe quedar incrementada en una unidad.  
d) Una acción que permita suprimir al primer nombre de la lista, no importa cuál es. Simplemente 
suprime el primero cada vez que la acción es ejecutada. El parámetro que debe recibir es el 
registro (con el arreglo de nombres y la cantidad de nombres cargados). Después de ejecutada la 
acción, la cantidad debe quedar decrementada en una unidad.  
e) Una acción que permita mostrar todos los nombres de la lista. Los parámetros que debe recibir son: 
el arreglo y la cantidad de nombres que tiene cargados. */
#include <stdio.h>
#include <string.h>

#define Max 1000

typedef struct
{
    char n[Max][15];
    int cant;
}TData;

TData agenda;
int opcion, fin, ctrlVacio, ctrlLleno;

int Vacia (TData x);
int Llena (TData x);
void InsertarNombre (int ctrl, TData *x);
void SuprimirNombre (int ctrl, TData *x);
void MostrarNombres (int ctrl, TData x);
int main()
{
    fin = 1;

    while (fin)
    {
        ctrlVacio = Vacia(agenda);
        ctrlLleno = Llena(agenda);

        printf("Seleccione una opcion:\n1 - Insertar Nombre\n2 - Suprimir Nombre\n3 - Mostrar Nombres\n4 - SALIR\n");
        scanf("%d",&opcion);

        while (opcion < 1 || opcion > 4)
        {
            printf("ERROR: Opcion incorrecta\n\n");
            printf("Seleccione una opcion:\n1 - Insertar Nombre\n2 - Suprimir Nombre\n3 - Mostrar Nombres\n4 - SALIR\n");
            scanf("%d",&opcion);
        }

        if (opcion == 1){
            InsertarNombre(ctrlLleno, &agenda);
        }else if (opcion == 2){
            SuprimirNombre(ctrlVacio, &agenda);
        }else if (opcion == 3){
            MostrarNombres(ctrlVacio, agenda);
        }else{
            fin = 0;
        }
        
    }
    printf("\n****Hasta pronto!!!****");

    return 0;
}

int Vacia (TData x) // Detewrmina si esta vacia
{
    if(x.cant < 1)
    {
        return 1;
    }else{
        return 0;
    }
}

int Llena (TData x) // Determina si esta llena
{
    if (x.cant == Max)
    {
        return 1;
    }else{
        return 0;
    }
}

void InsertarNombre (int ctrl, TData *x)
{
    if(ctrl)//Lleno
    {
        printf("\nLa agenda esta llena\n\n");
    }else{
        printf("\nIngrese el nuevo nombre: ");
        scanf("%s", x->n[x->cant]);
        printf("\nEl nombre se cargo exitosamente\n\n");
        x->cant ++;
    }
}

void SuprimirNombre (int ctrl, TData *x)
{
    int i,k;

    if (ctrl) //vacio
    {
        printf("\nLa agenda esta vacia\n\n");
    }else{
        x->cant --;
        k = 1;
        for (i = 0; i <= x->cant; i ++)
        {
            strcpy(x->n[i], x->n[k]);
            k++;
        }
        printf("\nEl nombre ha sido borrado\n\n");
    }
}

void MostrarNombres (int ctrl, TData x)
{
    int i, pos;
    pos = 1;

    if (ctrl) //Vacio
    {
        printf("\nLa agenda esta vacia\n\n");
    }else{
        printf("\nLos nombres guardados son:\n\n");
        for(i = 0; i < x.cant; i ++)
        {
            printf("%d: %s\n\n",pos,x.n[i]);
            pos ++;
        }
    }

}
