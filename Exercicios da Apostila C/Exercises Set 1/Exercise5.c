/* Exercice 1.7.5 - Write a program that receives the name,
worked hours in a month and the cost of worked hours of an
employee. Then show his name and his month salary on the
screen */

/* Observation: In order for this program works properly,
we will be working with hours in the following format:
One hour = 1
Half hour = 0.5
One hour and a half = 1.5
*/

#include <stdio.h>

int main() {
    char employee_name[30];
    float worked_hour, hour_cost, month_salary; 

    printf("What is the employee name?\n");
    scanf("%s",employee_name);

    printf("How much %s worked this month?(in hours)\n", employee_name);
    scanf("%f", &worked_hour);

    printf("How much does the worked hour costs for %s? (in dollar)\n", employee_name);
    scanf("%f", &hour_cost);

    month_salary = worked_hour * hour_cost;

    printf("For %s, the month salary will be USD$ %.2f, since he/she worked %.2f hours", employee_name, month_salary, worked_hour);

    return 0;
}
