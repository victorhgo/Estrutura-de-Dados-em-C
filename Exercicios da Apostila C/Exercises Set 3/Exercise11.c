/* 3.3.11 -Calcule a seguinte expressão: 

 5
 ∑ = x
i=1

*/

#include <stdio.h>
#include <math.h>

int main(){
    int i = 1, x, sum_power;
    printf("Enter value of X: ");
    scanf("%d", &x);

    while(i <= 5){
        sum_power = sum_power + pow(x,i);
        i++;
    }
    printf("The value is: %d\n", sum_power);
}