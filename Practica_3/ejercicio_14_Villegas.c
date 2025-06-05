#include <stdio.h>
#include <math.h>

float recX1, recY1, recX2, recY2, punDer, punIzq, punSup, punInf, cirX, cirY, radio, puntoX, puntoY, restaX, restaY, distancia;
int rectangulo, circulo; // Para estas variables usare 1 y 0 como valores logicos correspondientes a true y false.

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

    //Calculamos la DISTANCIA del centro del circulo al punto
    restaX = puntoX - cirX;
    restaY=  puntoY - cirY;
    distancia = sqrt((restaX*restaX)+(restaY*restaY));
    
    //Determinamos si el punto esta DENTRO o FUERA del CIRCULO
    if (distancia <= radio)
    {
        circulo = 1;
    }else{
        circulo = 0;
    }

    //Determinamos la UBICACION de los puntos del RECTANGULO en el plano cartesiano
    if (recX1 > recX2)
    {
        punDer = recX1;
        punIzq = recX2;
    }else{
        punDer = recX2;
        punIzq = recX1;
    }
    if (recY1 > recY2)
    {
        punSup = recY1;
        punInf = recY2;
    }else{
        punSup = recY2;
        punInf = recY1;
    }

    //Determinamos si el punto esta DENTRO o FUERA del RECTANGULO
    if ((puntoX <= punDer && puntoX >= punIzq) && (puntoY <= punSup && puntoY >= punInf))
    {
        rectangulo = 1;
    }else{
        rectangulo = 0;
    }

    //Definimos con que criterios cumple segun lo solicitado
    if (circulo == 1 && rectangulo == 1)
    {
        printf("El Punto es interior al circulo y al rectangulo.");
    }
    else if (circulo == 1 && rectangulo == 0)
    {
        printf("El Punto es interior al circulo.");
    }
    else if (circulo == 0 && rectangulo == 1)
    {
        printf("El Punto es interior al rectangulo.");
    }else{
        printf("El Punto es exterior al circulo y al rectangulo.");
    }

    
    
    
}
