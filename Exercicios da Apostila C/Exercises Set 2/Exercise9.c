/* 2.3.9 - Faça um programa que receba 3 valores correspondentes
aos lados de um triângulo. Verifique e dê mensagens para as
seguintes condições, sendo A o maior lado:
Se A >= B + C Nenhum triangulo é formado 
Se A² = B² + C² Um triangulo retangulo é formado
Se A² > B² + C² Um triangulo obtusangulo é formado
Se A² < B² + C² Um triangulo acutangulo é formado */

//To compile with gcc, include the -lm on the compile command.

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;

    printf("Enter the A side of the triangle: ");
    scanf("%f", &a);
    printf("Enter the B side of the triangle: ");
    scanf("%f", &b);
    printf("Enter the C side of the triangle: ");
    scanf("%f", &c);

    if(a >= (b + c)){
        printf("No Triangle will be created.\n");
    }
    if((pow(a,2)) == ((pow(b,2) + pow(c,2)))){
        printf("A Rectangle Triangle will be created\n");
    }
    if(((pow(a,2) > ((pow(b,2)) + pow(c,2)))) && !(a >= (b + c))){
        printf("An Obtuse Angled Triangle will be created\n");
    }
    if(((pow(a,2) < ((pow(b,2)) + pow(c,2)))) && !(a >= (b + c))){
        printf("An Acute Angled Triangle will be created\n");
    }    

}