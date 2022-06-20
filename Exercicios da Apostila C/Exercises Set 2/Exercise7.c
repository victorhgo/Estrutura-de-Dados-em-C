/* 2.3.7 - O IMC (Índice de Massa Corpórea) é um bom sinalizador 
para o controle do nosso peso. A fórmula é simples:
 IM = peso / (altura²)
IMC < 20 = abaixo do peso normal
> 20 && < 24,9 = peso normal
> 25 && < 35 = acima do peso normal
> 35 = obeso
*/

#include <stdio.h>

int main(){
    float weight, height, imc;

    printf("Enter the Weight (in Kg): ");
    scanf("%f", &weight);
    printf("Enter the Height (in m): ");
    scanf("%f", &height);

    imc = weight / (height * height);

    if(imc <= 20){
        printf("Bellow normal Weight\n");
    }
    if(imc > 20 && imc <= 24.9){
        printf("Normal Weight\n");
    }
    if(imc > 25 && imc <= 35){
        printf("Over the normal Weight\n");
    }
    if(imc > 35){
        printf("Overweight!!!\n");
    }
    return imc;
}