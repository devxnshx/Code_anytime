 /*Read  a  distance  in  kilometers  and  print  its  equivalent  in  meters,  centimeters,  and 
millimeters.*/
#include <stdio.h>

int main() {
     int km;
    printf("ENTER DISTANCE IN KMs: ");
    scanf("%d",&km);

    int m=1000*km;
    int cm=100000*km;
    int mm=1000000*km;

    printf("Distance in meters is %d\n",m);
    printf("Distance in meters is %d\n",cm);
    printf("Distance in meters is %d\n",mm);

     return 0;
}