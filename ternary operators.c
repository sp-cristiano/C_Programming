#include<stdio.h>

int main()
{
    int a;

    printf("\n This function will use ternary operation to check if a number is divisible by 2 \n");
    printf("\n Enter the number to be checked: ");
    scanf("%d", &a);

    ((a%2) == 0) ? printf("%d is divisible by 2",a) : printf("%d is not divisible by 2", a);

    printf("\n");

    return 0;

}
