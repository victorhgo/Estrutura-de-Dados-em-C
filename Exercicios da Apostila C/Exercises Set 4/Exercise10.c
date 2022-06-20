/* 4.2.10 - Em uma estrada, foi fixado um sistema de radar móvel
contendo dois radares (r1 e r2) a uma distancia de 10m um do
outro. Considere que a velocidade máxima da estrada seja de 80
Km/h e o calculo da velocidade seja V=ds/dt, onde V é
velocidade, ds é o espaço percorrido e dt é o tempo gasto para
atravessar este espaço. O programa deve receber o tempo em
segundos de cada veículo captado pelo sensor (em nosso caso,
pelo usuário). Caso o veículo ultrapasse o limite de velocidade o
programa também receberá do sensor (do usuário), a placa do
veículo. Crie dois vetores (Placas e Velocidades) para armazenar
a placa (apenas os 4 digitos finais) e a velocidade de cada veículo
multado. Quando o sensor (usuário) captar (digitar) 0(zero) no
tempo, significa que o radar foi retirado da estrada e o programa
deve ser encerrado. */

#include <stdio.h>

int main(){
    // Two vectors to store the License Plate ID and Velocity
    int license_plate[50];
    float store_velocity[50];

    // Variables used in this program:
    float velocity, time_s = 1;
    int i = 0, amount_data; 

    // While time is different than 0, executes the program
    while (time_s != 0) {
        // Enter the time that the car took to go from r1 to r2 (radar 1 and 2)
        printf("Time took from Radar 1 to Radar 2 (in seconds): ");
        scanf("%f", &time_s);

        // Enter the time = 0 to finish the program (remove the radar):
        if(time_s == 0){
            break;
        }

        /* Execute the calculus to measure the velocity based on time and distance where:
        Velocity (in m/s) = (final distance - initial distance) / (final time - initial time) */
        velocity = 10 / time_s; // 10 - because the radars are 10 meters apart

        // Convert the velocity from m/s to km/h:
        velocity = velocity * 3.6;

        if(velocity < 80){
            printf("This vehicle was at %.2fkm/h and it's bellow the speed limit of 80km/h\n", velocity);
        }
        if(velocity > 80){

            printf("This vehicle was at %.2fkm/h and it's above the speed limit of 80km/h\n", velocity);
        // Store the velocity and license plate of vehicle (las 4 digits)
            store_velocity[i] = velocity;
            printf("Enter the license plate of this vehicle (last 4 digits): ");
            scanf("%i", &license_plate[i]);
            i++;
        }
    }

    amount_data = i;
    printf("The radar was removed from the road. The captured data:\n");

    // Check if there is data stored on the radars memory:
    if(i != 0) {
    // To print on the screen the data stored into the radars
        for(i = 0; i < amount_data; i++){
        printf("The vehicle %d was at %.2fkm/h\n", license_plate[i], store_velocity[i]);
        }
    }
}