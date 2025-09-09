// wap for a basic calculator using switch satement 
#include <stdio.h>

int main() {
    float num1,num2;
    char op;
    printf("enter ur input, eg.1+2 \n");
    scanf(" %f%c%f",&num1,&op,&num2);
    // float add = num1+num2;
    // float sub = num1-num2;
    // float prod = num1*num2;
    // float div = num1/num2;

    switch (op)
    {
    case '+':
        printf("the sum of given no. is  %.2f",num1+num2);
        break;
    case '-':
        printf("the subtracted value of given no. is  %.2f",num1-num2);
        break;
    case '*':
        printf("the product of given no. is  %.2f",num1*num2);
        break;
    case '/':
        if (num2==0)
        {
            printf("undefined, enter some other value as 0 as an denominator is not valid");
        }
        else
        {
            printf("the quotient after dividing given no. is  %.2f",num1/num2);
            break;
           
        }
        
    
    default:
        printf("Operator not Available");
        break;
    }
     return 0;
}