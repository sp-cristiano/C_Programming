#include<stdio.h>

int main()
{
    int N;

    printf("Enter the value of N: ");
    scanf("%d",&N);

    int a = 0, b = 1;

    printf("Fibonacci series up to %d: \n", N);

    while(a<=N)
    {
        printf("%d, ",a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}


