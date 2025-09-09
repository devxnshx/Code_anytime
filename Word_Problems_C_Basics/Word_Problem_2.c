// Accept a user’s name and print a message: “Hello, [Name]!”.
#include <stdio.h>

int main() {
    char name[50];
    printf("enter your name: ");
    scanf("%s",name);
    
    printf("Hello, %s",name);
     return 0;
}