/* 4.2.9 - Cadastre em um vetor, 50 números de cheques que foram
recebidos por uma loja em um dia de trabalho. Permita que o
usuário faça uma busca neste vetor, afim de verificar se um
determinado número de cheque foi ou não cadastrado. Dê
mensagem ao usuário mostrando se o número consta ou não no
cadastro de cheques. */

#include <stdio.h>

int main(){
    int i, check_number[50], find_check;

    // Receive the check numbers
    for (i = 0; i < 50; i++) {
        printf("Enter the received check's number digits: ");
        scanf("%i", &check_number[i]);
    }
    // Enter the check number you want to look up for:
    printf("What check number would you like to confirm if it was entered?\n");
    scanf("%d", &find_check);

    // Check if the check number was entered.
    for (i = 0; i < 50; i++) {
        if (check_number[i] == find_check) {
            printf("The check number %d was successfully entered!\n", find_check);
            return 0;
        }
    }
    printf("The check number %d was not entered!\n", find_check);
}