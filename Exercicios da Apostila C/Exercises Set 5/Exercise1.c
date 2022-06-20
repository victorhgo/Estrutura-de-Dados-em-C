/* 5.1.1 - Faça um programa que receba uma frase do usuário e
mostre quantas vogais a frase contem
Important: From now on, we will be using the library string.h,
this library has some functions to work with strings like:

strcpy(): copy the data from a string to another.
strcmp(): compares the data from two strings.
strlen(): returns the size (lenght) of a string.
strcat(): concatenates two strings. */

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
        if(sentence[i] == 'a' || sentence[i] == 'A'){
            count++;
        }
        if(sentence[i] == 'e' || sentence[i] == 'E'){
            count++;
        }
        if(sentence[i] == 'i' || sentence[i] == 'I'){
            count++;
        } 
        if(sentence[i] == 'o' || sentence[i] == 'O'){
            count++;
        }
        if(sentence[i] == 'u' || sentence[i] == 'U'){
            count++;
        }       
    }
    printf("The entered sentence contains %d vowels!\n", count);
}