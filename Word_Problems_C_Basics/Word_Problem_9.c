// Calculate and display a student’s average marks of five subjects
#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    float avg = (m1+m2+m3+m4+m5)/5.0;
    printf("You got an Average marks of %.2f",avg);
     return 0;
}