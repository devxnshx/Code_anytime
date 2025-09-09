// #include <stdio.h>

// int main()
// {
//     int is_odd = 0, n = 1000, j = 0;

//     for (int i = 0; i < n; i++)
//     {
//         j++;
//         if (j == 100)
//         {
//             is_odd = 1;
//             break;
//         }
//         printf("Hi\n");
//     }
//     if (is_odd)
//     {
//         printf("Hello");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int is_prime = 1, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        printf("%d\n", i);
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }


    if (is_prime)
    {
        printf("\nThis is a prime number");
    }
    else
    {
        printf("\nThis is NOT a prime number");

    }
    return 0;
}