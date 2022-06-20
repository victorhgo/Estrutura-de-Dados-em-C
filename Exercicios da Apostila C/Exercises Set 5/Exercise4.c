/* 5.1.4 - Faça um programa que receba o nome completo do usuário
e mostre a abreviatura do seu nome. */

#include <stdio.h>
#include <string.h>
int main(){
    // Array to receive the name
    char name[100], initials[20];
    int i = 0;
    char *current = name;

    // Receive name
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    
    /* By comparing the string's lenght (strlen) we avoid to compare memory's residual trash
    from other programs. */
    // To take the first name.
    while (*current != ' '){
        strncat(initials, current, 1);
        current++;
    }
    for (i = 0; i < strlen(name); i++) {
        if (*current == ' ') {              
            strncat(initials, (current + 1), 1);
            current++;
        }
        if ((*current + 1) == '\0') {
            break;
        }
        else {
            current++;
        }
    }
    printf("The initials are: %s\n", initials);
}  