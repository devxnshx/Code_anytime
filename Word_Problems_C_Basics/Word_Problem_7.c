// Swap the values of two variables entered by the user. 
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter two numbers to swap: ");
    scanf("%d%d",&a,&b);
    printf("\nYOU ENTERED : a=%d b=%d\n",a,b);

    // c=a;
    // a=b;
    // b=c;
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAFTER SWAPPING : a=%d b=%d\n",a,b);
     return 0;
}