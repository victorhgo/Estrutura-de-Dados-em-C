/* 5.1.5 Faça uma função que receba um string como parâmetro e
devolva o conteúdo da string em ordem alfabética. Um string é
um vetor de caracteres contendo '\0' como finalizador. void
stralf(char *s1); */

#include <stdio.h>
#include <string.h>

int main(){
/* To perform a sort on a string, we need an auxiliary variable that
   will stores the char to be concatenated on the new string. */
    int i, j;
    char aux;
    char string1[50];
// First we need to receive the string from the user:
    printf("Enter the string: \n");
    fgets(string1, sizeof(string1), stdin);

// Creates the sorted string that will receive the sorted.
    char sorted_string[sizeof(string1)];
// For the second step, we create a loop for to check the order of the letters:
    

}