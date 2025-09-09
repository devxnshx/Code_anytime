// prefix and prosfix
/**/

#include <stdio.h>

int main() {
    int a=5,b=7;
    // ++a;
    // printf("%d\n",a);
    // a++;
    // printf("%d\n",a);
    // --a;
    // printf("%d\n",a);
    // a--;
    // printf("%d\n",a);
    // printf("%d\n",a++);
    //     printf("%d\n",a);

     int c = (a++)+(++b)+(++a)-(--b);

     printf("a is %d and b is %d \nand \n\noutput of final expression is : %d",a,b,c);

    return 0;
}
