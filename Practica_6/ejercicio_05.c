#include <stdio.h>
#include <math.h>

float radio, distancia;
int booleano;
typedef struct {
    float corX;
    float corY;
} TPunto;
TPunto punto;
TPunto centro;

void PuntoCoor (TPunto *x);
void CenCirculo (TPunto *cen, float *r);
void CalcCirculo (float pX, float pY, float cX, float cY, float ra, int *b, float *d);

int main ()
{
    PuntoCoor(&punto);
    CenCirculo(&centro,&radio);
    CalcCirculo(punto.corX, punto.corY, centro.corX, centro.corY, radio, &booleano,&distancia);

    if (booleano){
        printf("El Punto esta DENTRO del circulo.\nVERDADERO\nDISTANCIA ABSOLUTA: %f",distancia);
    }else{
        printf("El Punto esta FUERA del circulo.\nFALSO\nDISTANCIA ABSOLUTA: %f",distancia);
    }
}

void PuntoCoor (TPunto *x)
{
    printf("PUNTO A DETERMINAR:\nIngrese la coordenada x: ");
    scanf("%f",&x->corX);
    printf("Ingrese la coordenada y: ");
    scanf("%f",&x->corY);
}

void CenCirculo (TPunto *cen, float *r)
{
    printf("CENTRO DEL CIRCULO:\nIngrese la coordenada x: ");
    scanf("%f",&cen->corX);
    printf("Ingrese la coordenada y: ");
    scanf("%f",&cen->corY);
    printf("RADIO DEL CIRCULO:\nIngrese el radio: ");
    scanf("%f",&(*r));
}

void CalcCirculo (float pX, float pY, float cX, float cY, float ra, int *b, float *d)
{
    float restaX, restaY;

    //Calculamos la DISTANCIA del centro del circulo al punto
    restaX = pX - cX;
    restaY=  pY - cY;
    *d = sqrt((restaX*restaX)+(restaY*restaY));

     //Determinamos si el punto esta DENTRO o FUERA del CIRCULO
    if (*d <= ra)
    {
        *b = 1;
    }else{
        *b = 0;
    }
}