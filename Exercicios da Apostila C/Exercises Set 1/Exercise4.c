/* Exercice 1.7.4 - Print the name and the age
 write by the user on the screen using the 
 scanf() function. The name and age must 
 be stored into two different variables*/

#include <stdio.h>

int main() {
    char name[30];
    int age;
    
    printf("What is your name?\n");
    scanf("%s",name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old", name, age);

    return 0;
}
