#include <stdio.h>
int main() {
 int duty, period;
 printf("Enter duty cycle (number of 1s): ");
 if (scanf("%d", &duty)!=1) return 0;
 printf("Enter period (total length): ");
 if (scanf("%d", &period)!=1) return 0;
 if (duty < 0) duty = 0;
 if (duty > period) duty = period;
 printf("PWM Simulation:\\n");
 for (int row = 0; row < 2; ++row) {
 for (int i = 0; i < period; ++i) {
 if (i < duty) printf("1 ");
 else printf("0 ");
 }
 printf("\\n");
 }
 return 0;
}