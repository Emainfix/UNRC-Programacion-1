#include <stdio.h>
#include <math.h>

float recX1, recY1, recX2, recY2, cirX, cirY, radio, puntoX, puntoY;
int rectangulo, circulo; // Para estas variables usare 1 y 0 como valores logicos correspondientes a true y false.

int Circulo(float pX, float pY, float cX, float cY, float r);
int Rectangulo(float rX1, float rX2, float rY1, float rY2, float pX, float pY);

int main()
{
    //Ingresan los datos del RECTANGULO
    printf("DIAGONAL DEL RECTANGULO:\nIngrese la coordenada X1: ");
    scanf("%f",&recX1);
    printf("Ingrese la coordenada y1: ");
    scanf("%f",&recY1);
    printf("Ingrese la coordenada x2: ");
    scanf("%f",&recX2);
    printf("Ingrese la coordenada y2: ");
    scanf("%f",&recY2);

    //Ingresan los datos del CIRCULO
    printf("CIRCULO - CENTRO DEL CIRCULO:\nIngrese la coordenada x: ");
    scanf("%f",&cirX);
    printf("Ingrese la coordenada y: ");
    scanf("%f",&cirY);
    printf("Ingrese el RADIO del circulo: ");
    scanf("%f",&radio);

    //Se ingresa el PUNTO a determinar
    printf("PUNTO A DETERMINAR: \nIngrese la coordenada x: ");
    scanf("%f",&puntoX);
    printf("Ingrese la coordenada y: ");
    scanf("%f",&puntoY);

    
    circulo = Circulo(puntoX, puntoY, cirX, cirY, radio);
    rectangulo = Rectangulo(recX1, recX2, recY1, recY2, puntoX, puntoY);

    

    //Definimos con que criterios cumple segun lo solicitado
    if (circulo && rectangulo)
    {
        printf("El Punto es interior al circulo y al rectangulo.");
    }
    else if (circulo && !rectangulo)
    {
        printf("El Punto es interior al circulo.");
    }
    else if (!circulo && rectangulo)
    {
        printf("El Punto es interior al rectangulo.");
    }else{
        printf("El Punto es exterior al circulo y al rectangulo.");
    }

}

int Circulo(float pX, float pY, float cX, float cY, float r)
{
    float restaX,restaY,distancia;
    //Calculamos la DISTANCIA del centro del circulo al punto
    restaX = pX - cX;
    restaY=  pY - cY;
    distancia = sqrt((restaX*restaX)+(restaY*restaY));
    
    //Determinamos si el punto esta DENTRO o FUERA del CIRCULO
    if (distancia <= r)
    {
        return 1;
    }else{
        return 0;
    }
}

int Rectangulo(float rX1, float rX2, float rY1, float rY2, float pX, float pY)
{
    float punDer, punIzq, punSup, punInf;
    //Determinamos la UBICACION de los puntos del RECTANGULO en el plano cartesiano
    if (rX1 > rX2)
    {
        punDer = rX1;
        punIzq = rX2;
    }else{
        punDer = rX2;
        punIzq = rX1;
    }
    if (rY1 > rY2)
    {
        punSup = rY1;
        punInf = rY2;
    }else{
        punSup = rY2;
        punInf = rY1;
    }

    //Determinamos si el punto esta DENTRO o FUERA del RECTANGULO
    if ((pX <= punDer && pX >= punIzq) && (pY <= punSup && pY >= punInf))
    {
        return 1;
    }else{
        return 0;
    }
}