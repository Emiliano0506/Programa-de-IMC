#include <stdio.h>
#define TAM 5

int main()
{
   int codigo[TAM];
   float precio[TAM];

   
   printf("Ingrese %d productos,se solicitara codigo y precio:\n ",TAM);
   
   for(int i=0;i<TAM;i++){
     
        do{
            printf("Ingrese el codigo de barras(1-999999999):");
            scanf("%d",&codigo[i]);
            if(codigo[i]<0 || codigo[i]>999999999){
                printf("Error. El código de barras debe estar entre 1 y 999999999\n");
            }
        }while(codigo[i]<0 || codigo[i]>999999999);
     
        do{  
            printf("Ingrese el precio:");
            scanf("%f",&precio[i]);
            if(precio[i]<0){
                ("Error. El precio no es valido, vuelve a ingresarlo:");
            }
        }while (precio[i] < 0);
     
    }
   
   for(int j=0;j<TAM;j++){
        printf("Codigo \t Precio\n");
        printf("%d \t %.2f\n",codigo[j],precio[j]);
    }
    
    float mayor = precio[0], menor = precio[0];
    int cod_mayor = codigo[0], cod_menor = codigo[0];
    for (int i = 1; i < TAM; i++) {
        if (precio[i] > mayor) {
            mayor = precio[i];
            cod_mayor = codigo[i];
        }
        if (precio[i] < menor) {
            menor = precio[i];
            cod_menor = codigo[i];
        }
    }
    
    printf("Mas caro[%d]:%.2f\n",cod_mayor,mayor);
    printf("Mas barato[%d]:%.2f",cod_menor,menor);
    return 0;
}