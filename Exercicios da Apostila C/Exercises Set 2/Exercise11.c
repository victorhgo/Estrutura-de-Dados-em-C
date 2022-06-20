/* 2.3.11 - Receba 3 números inteiros e distintos, a partir do usuário, e
mostre-os em ordem crescente. */

#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    int low, middle, high;

// A is the lowest number.
    if(a <= b && a <= c){
        low = a;
        if(b <= c){
            middle = b;
            high = c;
        }
        else{
            middle = c;
            high = b;
        }
    }
// B is the lowest number.    
    else if(b <= a && b <= c){
        low = b;
        if(a <= c){
            middle = a;
            high = c;
        }
        else{
            middle = c;
            high = a;
        }    
    }
// C is the lowest number.    
    else{
        low = c;

        if(a <= b){
            middle = a;
            high = b;
        }
        else{
            middle = b;
            high = a;
        }
    }
    printf("Acc: %d %d %d\n", low, middle, high);    
}    

