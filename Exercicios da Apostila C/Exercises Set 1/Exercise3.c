/* Exercice 1.7.3 - Print a name write by the user
 on the screen using the scanf() function. The name
 must be stored into a variable*/

#include <stdio.h>

int main() {
    char name[30];
    printf("What is your name?\n");
// When using the scanf to enter a string, don't use the & to store the data into a variable.    
    scanf("%s",name);
    printf("Hello %s, how are you?\n", name);

    return 0;
}
