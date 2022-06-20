/* 3.3.8 Em uma loja, todos os clientes que comprarem mais de R$ 
300,00 receberão um desconto proporcional ao valor de sua 
compra, de acordo com a tabela abaixo:
 __________________________________
|Valor da             |   Desconto |
|compra (R$)          |     (%)    |   
|Até 500,00           |      5     | 
|De 501,00 a 1000,00  |     10     | 
|Acima de 1000,00     |     12     |
 -----------------------------------

Você foi incumbido de fazer um programa que permita que o 
cliente entre com o valor dos produtos comprados e mostre o total
da compra, o valor do desconto e o preço a pagar. Pergunte ao 
usuário se deseja terminar a digitação dos produtos e também se
deseja finalizar o programa */

#include <stdio.h>

int main(){
    float payment, price;
    int option;
    printf("Welcome to the AyStore\n");
    printf("To proceed, enter one of the followin options:\n");
    printf("1 - Enter the Value of the Products.\n");
    printf("2 - Finish and Calculate the total amount to be paid.\n");
    printf("3 - Exit the program.\n");
    printf("Desired option: ");    
    scanf("%d", &option);

    while(option != 3){
        while(option != 2 || option == 1) {
            printf("Enter the value of the product: ");
            scanf("%f", &price);
            payment = payment + price;
            printf("Would you like to enter another product?\n");
            printf("1 - Yes\n");
            printf("2 - No, finish and calculate the discount (if applicable)\n");
            printf("Option: ");
            scanf("%d", &option);
        }
        if(option == 2){
// Se o cliente pagar menos de 300 reais:
            if(payment <= 300){
            printf("Client is not eligible to receive a discount.\n");
            printf("Client will pay %.2f R$\n", payment);
            break;
        }
// Se o cliente pagar mais de 300 reais:    
        if(payment > 300){
            if(payment <= 500) {
                payment = payment - (payment * 0.05);
                printf("This client will receive 5 percent discount and will pay %.2f R$\n", payment);
                break;
            }
            else if(payment >= 501 && payment <= 1000){
                payment = payment - (payment * 0.1);
                printf("This client will receive 10 percent discount and will pay %.2f R$\n", payment);
                break;            
            }
            else if(payment > 1000) {
                payment = payment - (payment * 0.12);
                printf("This client will receive 12 percent discount and will pay %.2f R$\n", payment);
                break;
            }
        }
        }
        else{
            printf("Invalid option!\n");
            break;
        }
        printf("1 - Enter the Value of the Products.\n");
        printf("3 - Exit the program.\n");
        printf("Desired option: ");    
        scanf("%d", &option);        

// Finish here the IFs                    
    }

}











