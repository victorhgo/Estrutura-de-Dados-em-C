/* 5.1.3 Um programa de criptografia codifica as vogais a, e, i, o, u
como 1, 2 ,3, 4, 5, respectivamente. Faça um programa que receba uma frase 
codificada do usuário e mostre-a decodificada. */

#include <stdio.h>
#include <string.h>
int main(){
    // Array to receive the coded string
    char coded_str[255];
    int i;
    // Receive the coded string
    printf("Enter the coded string: ");
    fgets(coded_str, sizeof(coded_str), stdin);
    
    /* By comparing the string's lenght (strlen) we avoid to compare memory's residual trash
    from other programs. */
    for (i = 0; i < strlen(coded_str); i++) {
        if (coded_str[i] == '1') {
            coded_str[i] = 'a';
        }
        if (coded_str[i] == '2') {
            coded_str[i] = 'e';
        }
        if (coded_str[i] == '3') {
            coded_str[i] = 'i';
        }
        if (coded_str[i] == '4') {
            coded_str[i] = 'o';
        }
        if (coded_str[i] == '5') {
            coded_str[i] = 'u';
        }                                
    }
    printf("The deciphered sentence is: \n");
    printf("%s", coded_str);
}