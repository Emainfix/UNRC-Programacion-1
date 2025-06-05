#include <stdio.h>
float base, altura; //base y altura del triangulo
float area;  
//area del triangulo
void obtenerDatos(float *x, float *y){ // Esta acción retorna dos valores verificados para que sean positivos. Una función no puede devolverte dos valores ya que solo es un dato único. 
 // controlando que x e y sean reales positivos y distintos de 0
    do {
        // El * antes del nombre de la variable significa que es un valor de salida.
        printf("Ingrese la base: ");
        scanf("%f",&(*x));
        printf("Ingrese el altura: ");
        scanf("%f",&(*y));
    } while ((*x<=0)||(*y<=0));
}
void calcularAreaT(float baseTri, float alturaTri, float *areaTri){
    *areaTri = (baseTri*alturaTri)/2;
}
void informarResultados(float a){
    printf("El area del triangulo es: %f \n",a);
}
int main(){
    obtenerDatos(&base, &altura);
    calcularAreaT(base, altura, &area);
    informarResultados(area);
    return 0;
}