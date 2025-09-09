// write a program to print multiplication table of user defined number 'n'. eg:1*n=n
// #include <stdio.h>

int main() {
    int n,m;
    printf("enter any number of which u want a table of ");
    scanf("%d",&n);
    m=n;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d ",n,i);
        m*=i;
        printf("= %d\n",n);
        
        // printf("%d * %d = %d\n",n,i,n*i);
    }
    
     return 0;
}

