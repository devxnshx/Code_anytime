#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    int s=n1+n2,d=n1-n2,p=n1*n2;
    float q=(float)n1/n2;
    printf("sum=%d, diff=%d, product=%d, quotient=%.2f", s,d,p,q);
    return 0;
}

/* problem statement : resolve this output  [hint: use typecasting]
 input: 3 5
 output (for q) :0.00 

     because 3(int)/2(int) ,
     so it will only store 1.00 instead 1.50 in it  */


