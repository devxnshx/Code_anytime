// Convert temperature from Celsius to Fahrenheit
#include <stdio.h>

int main() {
    int t_c;
    printf("ENTER TEMP IN CELSIUS : ");
    scanf("%d",&t_c);

    // float t_f = (9.0/5*t_c)+32;
    // float t_f = ((float)9/5*t_c)+32;
    float t_f = (1.0*9/5*t_c)+32;
    printf("TEMP IN FAHRENHEIT IS : %.2f",t_f);
     return 0;
}