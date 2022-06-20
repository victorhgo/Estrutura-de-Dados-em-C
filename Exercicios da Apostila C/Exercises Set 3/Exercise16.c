/* 3.3.16 - Uma das primeiras aplicações de computadores foi o cálculo
de trajetória de projéteis. Se um projétil é atirado com uma 
velocidade inicial V (m/s) a um ângulo de inclinação  θ (radianos), 
sua posição no plano vertical (x,y) no tempo t (segundos) é 
calculada pelas fórmulas:
x=(Vcosθ)t
y=(Vsenθ)t−(1/2)gt^2

Onde:  0 < θ < (π/2) e  g = 9.8 m/s^2

Faça um programa que, dados os parâmetros θ e V, liste as 
coordenadas x e y em intervalos de 0.01 segundos para um tiro em particular, 
terminando a listagem quando o projétil atingir o solo. */

#include <stdio.h>
#include <math.h>

#define pi 3.14159
#define gravity 9.807

int main(){
    float angle, axis_x = 0, axis_y = 0, time_s = 0.01, velocity;

    printf("Enter the launch angle (in degrees): ");
    scanf("%f", &angle);

    printf("Enter the velocity (in m/s): ");
    scanf("%f", &velocity);

    // Convert from Degrees to Radians - To make it easier for the operator.
    angle = angle * (pi/180);

    if(0.00 < angle < (pi/2)){
        while(axis_y >= 0.00){ // When Y = 0 it means that the projectile has hit the ground.
            axis_x = (velocity * cos(angle)) * time_s;
            axis_y = (velocity * sin(angle)) * time_s - (0.5 * gravity * pow(time_s,2));
            time_s = time_s + 0.01;
            if ((axis_y > 0.000)){
                printf("X: %.3fm Y: %.3fm Time: %.2fs\n", axis_x, axis_y, time_s);
            }
        }  
        printf("Projectile hit the ground!!!\n");      
    }
    else{
        printf("This launch angle is not valid!!!\n");
    }
    return 0;
}
