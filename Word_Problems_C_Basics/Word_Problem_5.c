// Read the radius of a circle and print its area (use π = 3.14)
#include <stdio.h>
#define PI 3.14
int main() {
    int r;
    printf("enter radius : ");
    scanf("%d",&r);
    // float a = PI*r*r;
    printf("The Area of circle with radius %.2d is %.2f",r,PI*r*r);  
     return 0;
}