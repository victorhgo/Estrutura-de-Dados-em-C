/* 2.3.1 - Write a program in which the user enters a digit from 0 to 6
and returns a day of the week: 0 for Sunday and 6 for Saturday
*/

#include <stdio.h>

int main(){
    int day;

    printf("Enter a day of the week: ");
    scanf("%d", &day);

    switch (day) {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    default:
        printf("Not a valid week day\n");    
    }
}