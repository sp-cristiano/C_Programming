#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int fact = 1;

    printf("\n ====== Factorials of numbers ==== \n");

    printf("\n Enter the value of N: ");
    scanf("%d", &n);
    while(n<=0)
    {
        printf("\n Error: Please Enter a non-negative integer \n");
        printf("\n Enter the value of N: ");
        scanf("%d", &n);
    }

    while(i<=n){
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d  is %d\n", n, fact);
}
