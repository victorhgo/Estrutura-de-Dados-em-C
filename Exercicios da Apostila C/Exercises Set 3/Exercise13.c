/* 3.3.13 Calcule a expressão, sem utilizar a função pow() da math.h:
X ^ Y
Onde: X e Y são digitados pelo usuário */

#include <stdio.h>

int main(){
    int num, y, count = 0, pot = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d will be potentiated by: ", num);
    scanf("%d", &y);

    while(count < y){
        pot = pot + (num * num);
        count++;
    }
    printf("%d potentiated by %d is equal to %d\n", num, y, pot);
}