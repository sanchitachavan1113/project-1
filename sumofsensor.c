#include <stdio.h>

int main() {
    int S1, S2, sum;
    printf("Enter reading from Sensor 1: ");
    scanf("%d" , &S1);
    printf("Enter reading from Sensor 2: ");
    scanf("%d" , &S2);
    sum= S1+S2;
    printf("Sum of sensor readings: %d\n", sum);
    return 0;
}