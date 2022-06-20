/* 4.2.12 - Considere um sistema de sensoriamento de aquecimento
de telhas em um determinado dia (24 horas). Duas telhas são
expostas ao sol com sensores sobre elas, uma com uma tinta
especial (telha 1) e outra não (telha 2 ). A cada 15 minutos o
sensor capta (usuário digita) a temperatura das telhas as quais
são registradas em dois vetores distintos (TempTelha1 e
TempTelha2). Mostre qual das telhas teve menor aquecimento
médio durante todo o dia. */

/* Obs: A day has 1440 minutes. If we take the measures in a interval of
15 minutes, it means that we will take 96 measures in a day */

#include <stdio.h>

int main(){
    // We declare two vectors to store the temperatures: temp1 and temp2:
    float temp1[96], temp2[96], avg1, avg2;
    int i;
    // We use a for loop to colect 96 measures per day:
    for (i = 0; i < 96; i++) {
    // We enter the temperature of each one as:
        printf("Enter the temperature of the roof tile 1 (in C): ");
        scanf("%f", &temp1[i]);
        printf("Enter the temperature of the roof tile 2 (in C): ");
        scanf("%f", &temp2[i]);        
    }
    // To validate the average heat per day and shows the least one:
    for (i = 0; i < 96; i++) {
        avg1 = avg1 + temp1[i];
        avg2 = avg2 + temp2[i];
    }
    // If the tile 1 average is the least one:
    if ((avg1 / 96) < (avg2 / 96)) {
        printf("The roof tile 1 had the least heat average: %.2f°C\n", (avg1 / 96));
    }
    // If the tile 2 average is the least one:
    if ((avg2 / 96) < (avg1 / 96)) {
        printf("The roof tile 2 had the least heat average: %.2f°C\n", (avg2 / 96));
    }
}