/* 2.3.2 - Troca de tubulação: ocorre as 08 da manhã
2 - verificação de problemas de vazamento: ocorre as 11h
3 - Ligação de Água e esgoto: ocorre as 15h
*/

#include <stdio.h>

int main(){
    int option;

    printf("Qual serviço você gostaria de agendar? ");
    scanf("%d", &option);

    switch (option){
    case 1:
        printf("Troca de tubulação agendada com sucesso para as 08h da manhã\n");
        break;
    case 2:
        printf("Verificação de Problemas de Vazamento agendada com sucesso para as 11h da manhã\n");
        break;
    case 3:
        printf("Ligação de Água e esgoto agendad com sucesso para as 15h da tarde\n");
        break;
    default:
        printf("Opção Inválida!!!\n");
    }

}