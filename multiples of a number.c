#include<stdio.h>

int main()
{
    int i;
    int n;

    printf("\n ====== Multiplication table ====== \n");

    printf("\n Enter an number: ");
    scanf("%d", &n);
    for(i=1;i<=10; i++)
    {
        printf("\n %d * %d = %d \n",n,i,(n*i));
    }
    return 0;
}
