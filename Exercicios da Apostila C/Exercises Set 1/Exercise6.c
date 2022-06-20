/* Exercice 1.7.6 - The workers of ToadaGoo company receives
to each overtime hour, 50% more of the regular hour. Write a
program that recevives the employee's name, how much regular
hours he/she worked and the overtime. Receives the regular hour costs
and in the end show the total amount he/she will earn in the month. */

/* Observation: In order for this program works properly,
we will be working with hours in the following format:
One hour = 1
Half hour = 0.5
One hour and a half = 1.5
*/

#include <stdio.h>

int main() {
    char employee_name[30];
    float worked_hour, hour_cost, month_salary, overtime; 

    printf("    --- Welcome to ---    \n");
    printf("ToadaGoo Payment Processor\n");
    printf("############################\n\n");

    printf("What is the employee name?\n");
    scanf("%s",employee_name);

    printf("How much regular hours %s worked this month?(in hours)\n", employee_name);
    scanf("%f", &worked_hour);

    printf("How much overtime hours %s worked this month?(in hours)\n", employee_name);
    scanf("%f", &overtime);

    printf("How much does the worked hour costs for %s? (in dollar)\n", employee_name);
    scanf("%f", &hour_cost);

    month_salary = worked_hour * hour_cost + (overtime * (hour_cost + (hour_cost * 0.5))); // Since the overtime is worthy 50% (0.5) more than regular hours.

    printf("For %s, the month salary will be USD$ %.2f, since he/she worked %.2f hours and did %.2f of overtime\n", 
    employee_name, month_salary, worked_hour, overtime);

    return 0; 
}
