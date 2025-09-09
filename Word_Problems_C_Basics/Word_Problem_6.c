// Take the length and width of a rectangle and print its perimeter. 
#include <stdio.h>

int main() {
    int a,b;
    printf("enter length and width : ");
    scanf("%d%d",&a,&b);
    
    int p=2*(a+b);
    printf("Perimeter of rectangle is %d",p);
     return 0;
}