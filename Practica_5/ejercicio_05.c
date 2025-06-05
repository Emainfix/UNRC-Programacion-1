#include <stdio.h>
char letra;
int esMayuscula(char a);
char aMinuscula(char b);
int esVocal(char c);
int esConsonante(char d);

int main(){
    printf("\n Ingrese caracter: ");
    scanf("%c",&letra);
    
    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))
    {
        printf("Es una letra\n");
        if (esVocal(letra))
        {
            printf("Es vocal\n");
        }else{
            printf("No es Vocal\n");
        }
        if (esConsonante(letra))
        {
            printf("Es Consonante");
        }else{
            printf("No es Consonante");
        }
    }else{
        printf("No es una letra");
    }
    
    return 0;
}

int esMayuscula(char a){
int aux;    
    if ((a >= 'A') && (a <= 'Z')){
        aux=1;
    }
    else{
        aux=0;
    }
    return (aux);
}

char aMinuscula(char b){
/* si un caracter esta comprendido entre A y Z, se le suma la diferencia entre los ASCII de las minúsculas y las mayúsculas ( 97 - 65 = 32 ) para a minuscula */
    return (b + ('a'-'A'));
}

int esVocal(char c){
    char minus;
    if (esMayuscula(c)){
        minus = aMinuscula(c);
    } 
    else{
        minus = c;
    }
    return ((minus == 'a') || (minus == 'e') || (minus == 'i') || (minus == 'o') || (minus == 'u')); 
}

int esConsonante(char d){
    if (esVocal(d))
    {
        return 0;
    }else{
        return 1;
    }
}