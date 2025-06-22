#include <stdio.h>

int main()
{
    float altura,peso;
    printf("Ingrese su peso en kg:");
    scanf("%f",&peso);
     while(peso<0){
        printf("Vuelve a ingresar su peso:");
        scanf("%f",&peso);
    }
    printf("Ingrese su altura en metros:");
    scanf("%f",&altura);
     while(altura<0){
        printf("Vuelve a ingresar su altura:");
        scanf("%f",&altura);
    }
    float imc;
    imc=peso/(altura*altura);
    printf("Su indice de masa cormporal es: %.2f\n",imc);
    printf("Si quiere saber su condición a continiación le mostraremos una tabla:\n");
    printf("<18.5/Bajo peso\n");
    printf("18.5 a 24.9/Normal\n");
    printf("25.0 a 29.9/Sobrepeso\n");
    printf(">=30/Obesidad\n");
    
    if(imc<18.5){
        printf("Su condición es:Bajo peso");
    }
    else{
        if(imc>18.5 && imc<24.9){
            printf("Su condición es:Normal");
        }
        else{
            if(imc>25 && imc<29.9){
                printf("Su condición es:Sobrepeso");
            }
            else{
                if(imc>=30){
                    printf("Su condición es:Obesidad");
                }
            }
        }
    }
    return 0;
}
