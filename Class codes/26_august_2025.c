// #include<stdio.h>

// int main()
// {
//     int age;
//     printf("enter your age :");
//     scanf("%d",&age);

//     if (age>=18)
//     {
//         printf("yayyy! you are eligible");
//     }
//     else
//     {
//         printf("shit bhai!, you are not eligible");
//     }

//  return 0;

// }

#include <stdio.h>

int main()
{

    int num;
    printf("enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        printf("This number is Divisible by three\n");
    }
    else if (num % 4 == 0)
    {
        printf("This number is Divisible by four\n");
    }
    else if (num % 5 == 0)
    {
        printf("This number is Divisible by five\n");
    }
    else
    {
        printf("NOT DIVISIBLE BY ANY NO.\n");
    }

    return 0;
}