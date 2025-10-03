#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read input including spaces

    printf("\nHello,Robotics!\n");
    printf("Welcome %s\n", name);
    return 0;
}