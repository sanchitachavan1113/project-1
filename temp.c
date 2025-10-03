#include <stdio.h>
int main() {
    int temp;
    printf(" enter your temperature: ");
    scanf("%d", &temp);
    
    if (temp <80) 
       printf("patient status : normal\n");
    else if (temp < 100)
       printf("patient status : warning\n");
    else 
       printf("patient status : critical\n");

      return 0;
}
