#include<stdio.h>

void fabonacchi(int n);
int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d",&n);
    fabonacchi(n);
    printf("\n");

    return 0;


}

void fabonacchi(int n)
{
    int a = 0;
    int b = 1;

    while(a <= n)
    {
        //printf("%d | %d + %d = %d ", a, a, b, next);

        int next = a + b;
        if(a <= 9)
        {
            printf("%d       |(%d + %d = %d) \n", a, a, b, next);

        }
        else if(a > 9 || a==99)
        {
            printf("%d      |(%d + %d = %d) \n", a, a, b, next);
        }
        else if(a > 99 || a==999)
        {
            printf("%d      |(%d + %d = %d) \n", a, a, b, next);
        }
         else if(a > 999 || a==100000)
        {
            printf("%d  |(%d + %d = %d) \n", a, a, b, next);
        }
        else
        {
            a > 1000000;
            printf("%d  |(%d + %d = %d) \n", a, a, b, next);
        }



        //printf("\n%d + %d = %d\n", a, b, next);
        a = b;
        b = next;
    }
}
