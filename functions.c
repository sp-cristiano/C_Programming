#include<stdio.h>

//function declaration
int isEven(int num);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d is of type %d",n, isEven(n));

    return 0;
}

int isEven(int num)
{
    if(num%2 == 0)
    {
        return 1;
    } else
    {
        return 0;
    }
    //return (num%2 == 0) ? 1 : 0;
}
