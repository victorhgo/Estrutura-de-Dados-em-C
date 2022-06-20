/* 4.2.11 - Em um depósito de pisos usados, o gerente deseja um
programa onde o cliente possa dizer quantos metros quadrados
deseja cobrir de piso e ele possa dizer qual dos pisos (padrão 0,2
x 0,2 m) ele tem quantidade suficiente disponível. O programa
deve carregar em cada posição do vetor “Pisos” a quantidade
disponível de cada tipo de piso (o índice será o código do piso).
Para cada cliente deverá ser digitado a quantidade em metros
quadrados da área a ser coberta e o programa mostrará o código
de todos os pisos com quantidades suficientes. */

#include <stdio.h>

int main(){
    // Variables to be used.
    int opt = 1, ceramics[5], i; // Ceramics will be stored at ceramics[] array
    float cov_area;

    // Inside a while loop to keep running the program, 0 to exit.
    while(opt != 0){

    // Print the options:
        printf("To insert the desirable area to be covered, enter 1\n");
        printf("To enter the amount of ceramics, enter 2\n");
        printf("To calculate the ceramics that can cover the entered area, enter 3\n");
        printf("To finish the program and exit, enter 0\n");
        scanf("%d", &opt);
    // To finish the execution.
        if(opt == 0){
            printf("Goodbye!\n");
            break;
        }    
    // Client puts the desirable m² to be covered and stores into cov_area.
        if(opt == 1){
            printf("How much would you like to cover? (in m²): ");
            scanf("%f", &cov_area);
        }
    // Each ceramic(5 in total), will have 0,4m², must be entered one by one:
        if(opt == 2){
            printf("0 - Dark Gray\n");
            printf("1 - Ash Gray\n");
            printf("2 - Snow White\n");
            printf("3 - Pearl White\n");
            printf("4 - Matte Piano\n");          
            for (i = 0; i < 5; i++) {
                printf("Enter the amount of ceramics %d: ", i);
                scanf("%d", &ceramics[i]);
            }
        }
    // To calculate the ceramics that can cover the entered area:
        if (opt == 3) {
            for (i = 0; i < 5; i++) {
    // To validate if any quantity is enought:
                if ((ceramics[i] * 0.4) >= cov_area) {
                    printf("The client can cover an area of %.2fm² using the ceramics %d\n", cov_area, i);
                }
                else {
                    printf("There are not enought ceramics %d to cover the desirable area of %.2fm²\n", i, cov_area);
                }    
            }
        }
    }
}