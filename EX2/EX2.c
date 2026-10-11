#include <stdio.h>

int main() {

    double speed_kmh, speed_ms, distance;
    double acceleration, time;

    printf("Enter takeoff speed (km/hr): ");
    scanf("%lf", &speed_kmh);

    printf("Enter catapult distance (meters): ");
    scanf("%lf", &distance);


    speed_ms = speed_kmh * 1000.0 / 3600.0;

    acceleration = (speed_ms * speed_ms) / (2.0 * distance);

    time = speed_ms / acceleration;

    printf("Acceleration is: %.2f m/s^2\n", acceleration);
    printf("Time taken to reach takeoff speed: %.2f seconds\n", time);

    return 0;
}