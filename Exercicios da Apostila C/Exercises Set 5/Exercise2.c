/* 5.1.2 - Faça um programa que mostre o número de palavras
contidas em um string. O string deve ser fornecido pelo usuário. */

#include <stdio.h>
#include <string.h>

int main(){
    // Sentence is the string that will receive the string:
    char sentence[256];
    int i, count = 0;
    
    // To receive the string and store it inside sentence:
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    /* By comparing the string's lenght (strlen) we avoid to compare memory's residual trash
    from other programs. */
    for (i = 0; i < strlen(sentence); i++) { 
    // sentence[i + i] == '\0' to guarantee the last world will be counted before the strings end.
        if(sentence[i] == ' ' || sentence[i + 1] == '\0' ){
            count++;
        }      
    }
    printf("The entered sentence contains %d words!\n", count);
}