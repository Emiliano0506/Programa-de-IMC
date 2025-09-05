#include <stdio.h>
#include <math.h>

#define Pi 3.14159265359
float calcularAreaRectangulo (float longitud, float altura);
float calcularPerimetroRectangulo (float longitud, float altura);
float calcularDiagonalRectangulo (float longitud, float altura);
float calcularAreaCirculo (float radio);
float calcularPerimetroCirculo (float radio);
void imprimirResultados (float area, float perimetro);
int main(){
    int figura;
    float longitud;
    float alt;
    float rad;
    float area;
    float perimetro;
    printf("Elija la figura que desea utilizar: 1) Rectangulo 2) Circulo:");
    scanf("%d",&figura);
    
    switch(figura){
        case 1:
        printf("Usted eligio el rectangulo\n");
        printf("Ingrese su longitud:");
        scanf("%f", &longitud);
        printf("Ingrese su altura:");
        scanf("%f", &alt);
        area = calcularAreaRectangulo(alt,longitud);
        perimetro = calcularPerimetroRectangulo(alt,longitud);
        calcularDiagonalRectangulo(alt,longitud);
        imprimirResultados(area,perimetro);
        break;
        
        case 2:
        printf("Usted eligio el circulo\n");
        printf("Ingrese su radio:");
        scanf("%f",&rad);
        area = calcularAreaCirculo(rad);
        perimetro = calcularPerimetroCirculo(rad);
        imprimirResultados(area,perimetro);
        break;
        
        default:
        printf("No ingreso ninguna opción");
        break;
    }

    return 0;
}

float calcularAreaRectangulo (float longitud, float altura){
    float area;
    area = longitud * altura;
    return area;
}

float calcularPerimetroRectangulo (float longitud, float altura){
    float perimetro;
    perimetro = 2*(longitud+altura);
    return perimetro;
}

float calcularDiagonalRectangulo (float longitud, float altura){
    float diagonal;
    diagonal = sqrt(longitud*longitud + altura*altura);
    return diagonal;
}
 
float calcularAreaCirculo (float radio){
     float area;
     area=Pi*radio*radio;
     return area;
 }
 
 float calcularPerimetroCirculo (float radio){
     float perimetro;
     perimetro = 2*Pi*radio;
     return perimetro;
 }
 
 void imprimirResultados (float area, float perimetro){
     printf("El area es: %.2f\n", area);
     printf("El perimetro es: %.2f\n", perimetro);
 }
